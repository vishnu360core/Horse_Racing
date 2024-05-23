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

    [Header("UI Settings:")]
    [SerializeField] TMP_Text amount_Text;
    [SerializeField] GameObject _betPanel;
    [SerializeField] RestartPanel _reachedPanel;
    [SerializeField] Button _resetButton;
    [SerializeField] Button _playButton;
    [SerializeField] TMP_Text id_Text;
    [SerializeField] TMP_Text bet_Text;
    [SerializeField] GameObject _playAgainButton;

 

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

        Actions.SetID += SetIDAction;

        Actions.Deduct += DeductAction;

        horseTrackManager.callback = this;

        EnableGameControl(false);

        //Actions.StartAction();

        //Actions.UpdateAmount += UpdateAmount;
    }


    public void SaveGameStatus(GameStatus _status)
    {
        string jsonString = JsonUtility.ToJson(new GameData { status = _status });

        Debug.Log("Game status saved >>>" + jsonString);

        //StartCoroutine(Network.Instance.SaveToNet(jsonString));
    }

    private void DeductAction(bool enable)
    {
        if (enable)
        {
            StartGameAction();
            SaveGameStatus(GameStatus.locked);
        }
        else
        {
            setAmount = 0;
            loseAmount = 0;

            bet_Text.text = "Total Bets: " + loseAmount;

            for (int i = 0; i < betBlocks.Count; i++)
                betBlocks[i].ResetAction();

            _playAgainButton.SetActive(false);
        }
    }

    private void SetIDAction(string obj)
    {
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
        AudioManager.Instance.PlayHorseRace(false);

        _reachedPanel.EnablePanel(true);

        setAmount = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
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
                Network.Instance.SendResult(loseAmount.ToString(), idText, Notification.Result.Loss);
                Actions.SetTheResult(ResultStat.fail, loseAmount.ToString());
            }
            return;
        }

        Network.Instance.SendResult(setAmount.ToString(), idText, Notification.Result.Win);
        Actions.SetTheResult(ResultStat.success, setAmount.ToString());

        float tempAmount = amount + setAmount - loseAmount;

        Debug.Log("TempAmount >>>" + tempAmount);
        amount_Text.text = "Amount: $" + tempAmount.ToString("F2");

        Network.Instance.CreditAmount(setAmount);
    }

    public void PlayButtonAction()
    {
        _playButton.interactable = false;

        PlayAction();
    }

    public void PlayAction()
    {

        foreach (HorseBetBlock bet in betBlocks)
        {
            loseAmount += bet.LoseAmount;
        }

        float tempAmount = amount - loseAmount;
        amount_Text.text = "Amount: $" + tempAmount.ToString("F2");

        bet_Text.text = "Total Bets: " + loseAmount;

        Network.Instance.DeductAmount(loseAmount);
    }

    public void StartGameAction()
    {
        AudioManager.Instance.PlayHorseRace(true);

        _reachedPanel.EnablePanel(false);
        _betPanel.SetActive(false);

        Actions.StartAction();
    }

    public void PlayAgainAction()
    {
        Network.Instance.StartData();

        float tempAmount = amount - loseAmount;
        amount_Text.text = "Amount: $" + tempAmount.ToString("F2");

        bet_Text.text = "Total Bets: " + loseAmount;

        Network.Instance.DeductAmount(loseAmount);
    }

    public void ResetAction()
    {
        for (int i = 0; i < betBlocks.Count; i++)
            betBlocks[i].ResetAction();
    }

    /// <summary>
    /// Action implemented on restart game
    /// </summary>
    public void RestartAction()
    {
        Network.Instance.StartData();

        _playButton.interactable = true;
        _resetButton.interactable = true;

        _reachedPanel.EnablePanel(false);
        _betPanel.SetActive(true);

        _playAgainButton.SetActive(true);

        setAmount = 0;
        loseAmount = 0;

        bet_Text.text = "Total Bets: " + loseAmount;

        for (int i = 0; i < betBlocks.Count; i++)
            betBlocks[i].ResetAction();

        EnableGameControl(false);

        Actions.RestartAction();

        WalletConnector.Instance.RequestBalance();
    }
}
 