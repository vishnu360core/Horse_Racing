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

    [Header("Bet_Blocks:")]
    [SerializeField] List<HorseBetBlock> betBlocks = new List<HorseBetBlock>();

    public float amount =1000;

    [Space]
    [SerializeField] float setAmount;
    [SerializeField] float loseAmount;


    private void Start()
    {
        Actions.WalletAmount += UpdateWalletAction;

        horseTrackManager.callback = this;

        //Actions.UpdateAmount += UpdateAmount;
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
        loseAmount = 0;

        foreach (HorseBetBlock bet in betBlocks)
        {
            if(bet.HeroType == hero)
            {
                setAmount += bet.SetAmount;
            }
        }

        Debug.Log("Set>>> " + setAmount);
        Debug.Log("lose >>" + loseAmount);


        if (setAmount <= 0)
        {
            setAmount = 0;
            return;
        }


        float tempAmount = amount + setAmount - loseAmount;

        Debug.Log("TempAmount >>>" + tempAmount);
        amount_Text.text = "Amount: " + tempAmount.ToString("F2");

        WalletConnector.Instance.CreditAmount(setAmount);
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

        WalletConnector.Instance.DeductAmount(loseAmount);

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

        for (int i = 0; i < betBlocks.Count; i++)
            betBlocks[i].ResetAction();

        Actions.RestartAction();

        WalletConnector.Instance.RequestBalance();
    }
}
 