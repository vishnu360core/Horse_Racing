using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

public class GameController : MonoBehaviour,HorseTrackDelegate
{
    [Header("Managers:")]
    [SerializeField] HorseTrackManager horseTrackManager;

    [Header("UI Settings:")]
    [SerializeField] TMP_Text amount_Text;
    [SerializeField] GameObject _betPanel;
    [SerializeField] GameObject _reachedPanel;
    [SerializeField] Button _resetButton;
    [SerializeField] Button _playButton;
    [SerializeField] TMP_Text id_Text;
    [SerializeField] TMP_Text bet_Text;
 

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

        horseTrackManager.callback = this;

        EnableGameControl(false);

        //Actions.UpdateAmount += UpdateAmount;
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
        amount_Text.text = "Amount: " + amount.ToString("F2");
    }

    /// <summary>
    /// Action implemented on race finished
    /// </summary>
    /// <param name="hero"></param>
    public void RaceFinished(Horse.Hero hero)
    {
        _reachedPanel.SetActive(true);

        setAmount = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
            if(bet.HeroType == hero)
            {
                setAmount += bet.SetAmount;
            }
        }

        Debug.Log("Win Set>>> " + setAmount);
        Debug.Log("lose >>" + loseAmount);


        if (setAmount <= 0)
        {
            setAmount = 0;
           
            if(loseAmount>0)
             Network.Instance.SendResult(loseAmount.ToString(), idText, Notification.Result.Loss);

            return;
        }

        Network.Instance.SendResult(setAmount.ToString(), idText, Notification.Result.Win);

        float tempAmount = amount + setAmount - loseAmount;

        Debug.Log("TempAmount >>>" + tempAmount);
        amount_Text.text = "Amount: " + tempAmount.ToString("F2");

        Network.Instance.CreditAmount(setAmount);
    }

    public void PlayAction()
    {
        _reachedPanel.SetActive(false);
        _betPanel.SetActive(false);

        foreach (HorseBetBlock bet in betBlocks)
        {
            loseAmount += bet.LoseAmount;
        }

        float tempAmount = amount - loseAmount;
        amount_Text.text = "Amount: " + tempAmount.ToString("F2");

        bet_Text.text = "Total Bets: " + loseAmount;

        Network.Instance.DeductAmount(loseAmount);

        Actions.StartAction();
    }

    public void PlayAgainAction()
    {
        _reachedPanel.SetActive(false);
        _betPanel.SetActive(false);

        float tempAmount = amount - loseAmount;
        amount_Text.text = "Amount: " + tempAmount.ToString("F2");

        bet_Text.text = "Total Bets: " + loseAmount;

        Network.Instance.DeductAmount(loseAmount);

        Actions.StartAction();
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
        _reachedPanel.SetActive(false);
        _betPanel.SetActive(true);

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
 