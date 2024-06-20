using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

using DataCollector;

public class GameController : MonoBehaviour,HorseTrackDelegate
{
    [Header("Managers:")]
    [SerializeField] HorseTrackManager horseTrackManager;
    [SerializeField] CameraController  cameraController;

    [Header("UI Settings:")]
    [SerializeField] TMP_Text amount_Text;
    [SerializeField] GameObject _betPanel;
    [SerializeField] RestartPanel _reachedPanel;
    [SerializeField] Button _resetButton;
    [SerializeField] Button _playButton;
    [SerializeField] TMP_Text id_Text;
    [SerializeField] TMP_Text bet_Text;
    [SerializeField] GameObject _playAgainButton;
    [SerializeField] GameObject _camPanel;
    [SerializeField] GameObject _loadPanel;

 

    [Header("Bet_Blocks:")]
    [SerializeField] List<HorseBetBlock> betBlocks = new List<HorseBetBlock>();

    public float amount =1000;

    [Space]
    [SerializeField] float setAmount;
    [SerializeField] float loseAmount;

    string idText;


    private void Start()
    {
        Actions.WalletAmount += UpdateWalletAction;
        Actions.EnableGame += EnableGameControl;
        Actions.CheckBetBalance += CheckTotalBet;
        Actions.EndRaceAction += EndRaceAction;

        Actions.SetID += SetIDAction;

        Actions.Deduct += DeductAction;
        Actions.Credit += CreditAction;

        horseTrackManager.callback = this;

        EnableGameControl(false);

        //Actions.StartAction();

        //Actions.UpdateAmount += UpdateAmount;
    }

    private void EndRaceAction()
    {
        cameraController.EnableSlowMotion(false);

        AudioManager.Instance.PlayHorseRace(false);

        _loadPanel.SetActive(true);
        _loadPanel.GetComponent<Loader>().SetLoadMessage("\n Finishing the race");
    }

    /// <summary>
    /// Check the total betAmount
    /// </summary>
    private void CheckTotalBet()
    {
        float totalCurrentBet = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
            if(bet.LoseAmount >0)
            {
                totalCurrentBet += bet.LoseAmount;
            }    
        }

        EnableGameControl(totalCurrentBet <= amount && totalCurrentBet > 0);
    }


    public void SaveGameStatus(GameStatus _status)
    {
        string jsonString = JsonUtility.ToJson(new GameData { status = _status });

        Debug.Log("Game status saved >>>" + jsonString);

        //StartCoroutine(Network.Instance.SaveToNet(jsonString));
    }

    private void DeductAction(bool enable)
    {
        _loadPanel.SetActive(false);

        if (enable)
        {
            StartGameAction();
            SaveGameStatus(GameStatus.locked);
        }
        else
        {
            RestartAction();
        }
    }

    private void CreditAction(bool enable)
    {
        _loadPanel.SetActive(false);

        AudioManager.Instance.PlayAudio(AudioManager.SFXType.win);
    }

    private void SetIDAction(string obj)
    {
        AudioManager.Instance.PlayMainScreen(true);

        idText = obj;
        id_Text.text = "Wallet Address:" + obj;
    }

    /// <summary>
    /// Enable the game controls
    /// </summary>
    /// <param name="obj"></param>
    private void EnableGameControl(bool obj)
    {
        _resetButton.interactable = obj;
        _playButton.interactable = obj;
    }

    private void UpdateWalletAction(float obj)
    {
        Debug.Log("Fetched wallet balance... ");

        amount = obj;
        amount_Text.text = "Amount: $" + amount.ToString("F2");
    }

    /// <summary>
    /// Action implemented on race finished
    /// </summary>
    /// <param name="hero"></param>
    public void RaceFinished(Horse.Hero[] heros)
    {
        _loadPanel.SetActive(false);

        cameraController.EnableSlowMotion(false);  

        AudioManager.Instance.PlayHorseRace(false);

        _reachedPanel.EnablePanel(true);

        setAmount = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
            //Debug.Log("Bets >>" + bet.HeroType + " " + bet.horseBets[0].betAmount);

            if (bet.HeroType == heros[0])
                setAmount += bet.horseBets.Find(x => x.betType == ControlPanel.BetType.Win).betAmount;


            if (bet.HeroType == heros[1])
                setAmount += bet.horseBets.Find(x => x.betType == ControlPanel.BetType.Place).betAmount;


            if (bet.HeroType == heros[2])
                setAmount += bet.horseBets.Find(x => x.betType == ControlPanel.BetType.Show).betAmount;
        }

        Debug.Log("Win Set>>> " + setAmount);
        Debug.Log("lose >>" + loseAmount);

        if (setAmount <= 0)
        {
            setAmount = 0;

            if (loseAmount > 0)
            {
                AudioManager.Instance.PlayAudio(AudioManager.SFXType.lose);

                Network.Instance.SendResult(loseAmount.ToString(), idText, Notification.Result.Loss);
                Actions.SetTheResult(ResultStat.fail, loseAmount.ToString());
            }
            return;
        }

        Network.Instance.SendResult(setAmount.ToString(), idText, Notification.Result.Win);
        Actions.SetTheResult(ResultStat.success, setAmount.ToString());

        float tempAmount = amount + setAmount - loseAmount;

        Debug.Log("TempAmount >>>" + tempAmount);

        _loadPanel.SetActive(true);
        _loadPanel.GetComponent<Loader>().SetLoadMessage("\n Credit in progress");

        Network.Instance.CreditAmount(setAmount);
    }

    public void PlayButtonAction()
    {
        _playButton.interactable = false;
        AudioManager.Instance.PlayMainScreen(false);

        PlayAction();
    }

    public void PlayAction()
    {

        List<Horse.Hero> betedHorses = new List<Horse.Hero>();

        foreach (HorseBetBlock bet in betBlocks)
        {
            loseAmount += bet.LoseAmount;

            if(bet.LoseAmount >0)
            {
                Horse.Hero horse = bet.HeroType;
                betedHorses.Add(horse);
            }
        }

        Actions.BetHorses(betedHorses);

        float tempAmount = amount - loseAmount;

        bet_Text.text = "Total Bets: " + loseAmount;

        _loadPanel.SetActive(true);
        _loadPanel.GetComponent<Loader>().SetLoadMessage("\n Deduct in progress");

        Network.Instance.DeductAmount(loseAmount);
    }

    public void StartGameAction()
    {
        AudioManager.Instance.PlayHorseRace(true);

        _camPanel.SetActive(true);

        _reachedPanel.EnablePanel(false);
        _betPanel.SetActive(false);

        _loadPanel.SetActive(false);

        Actions.StartAction();
    }

    public void PlayAgainAction()
    {
        Network.Instance.StartData();

        Actions.RestartAction();

        List<Horse.Hero> betedHorses = new List<Horse.Hero>();

        loseAmount = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
            loseAmount += bet.LoseAmount;

            if (bet.LoseAmount > 0)
            {
                Horse.Hero horse = bet.HeroType;
                betedHorses.Add(horse);
            }
        }

        float tempAmount = amount - loseAmount;

        bet_Text.text = "Total Bets: " + loseAmount;

        Actions.BetHorses(betedHorses);

        _loadPanel.SetActive(true);
        _loadPanel.GetComponent<Loader>().SetLoadMessage("\n Deduct in progress");

        _reachedPanel.EnablePanel(false);

        Network.Instance.DeductAmount(loseAmount);
    }

    public void ResetAction()
    {
        for (int i = 0; i < betBlocks.Count; ++i)
            betBlocks[i].ResetAction();

        _camPanel.SetActive(false);
    }

    /// <summary>
    /// Action implemented on restart game
    /// </summary>
    public void RestartAction()
    {
        Network.Instance.StartData();

        _camPanel.SetActive(false);

        _playButton.interactable = true;
        _resetButton.interactable = true;

        _reachedPanel.EnablePanel(false);
        _betPanel.SetActive(true);

        _playAgainButton.SetActive(true);

        setAmount = 0;
        loseAmount = 0;

        bet_Text.text = "Total Bets: " + loseAmount;

        AudioManager.Instance.PlayMainScreen(true);

        for (int i = 0; i < betBlocks.Count; i++)
            betBlocks[i].ResetAction();

        EnableGameControl(false);

        Actions.RestartAction();

        WalletConnector.Instance.RequestBalance();
    }
}
 