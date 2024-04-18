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

    [Header("Bet_Blocks:")]
    [SerializeField] List<HorseBetBlock> betBlocks = new List<HorseBetBlock>();

    public float amount =1000;

    [Space]
    [SerializeField] float setAmount;
    [SerializeField] float loseAmount;


    private void Start()
    {
        Actions.RestartAction += RestartAction;
        Actions.WalletAmount += UpdateWalletAction;

        horseTrackManager.callback = this;

        //Actions.UpdateAmount += UpdateAmount;
    }

    private void UpdateWalletAction(float obj)
    {
        amount = obj;
        amount_Text.text = "Amount: " + amount.ToString();
    }

    /// <summary>
    /// Action implemented on race finished
    /// </summary>
    /// <param name="hero"></param>
    public void RaceFinished(Horse.Hero hero)
    {
        foreach (HorseBetBlock bet in betBlocks)
        {
            if(bet.HeroType == hero)
            {
                amount += bet.SetAmount;
            }
            else
            {
                amount -= bet.LoseAmount;
            }
        }
    }

    public void PlayAction()
    {
        _betPanel.SetActive(false);

        for(int i = 0; i < betBlocks.Count; i++)
        {
            setAmount += betBlocks[i].SetAmount;
            loseAmount += betBlocks[i].LoseAmount;
        } 

       Actions.StartAction();
    }

    public void ResetAction()
    {

    }

    /// <summary>
    /// Action implemented on restart game
    /// </summary>
    private void RestartAction()
    {
        
    }
}
 