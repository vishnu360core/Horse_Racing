using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;
using System.ComponentModel;

public class HorseBetBlock : MonoBehaviour,ControlPanelDelegate
{
    [SerializeField] Horse.Hero heroType;
    public Horse.Hero HeroType =>heroType;

    [Header("Bets:")]
    [SerializeField] ControlPanel winPanel;
    [SerializeField] ControlPanel placePanel;
    [SerializeField] ControlPanel showPanel;

    [Space]
    [SerializeField]float _setAmount, _loseAmount;

    public float SetAmount => _setAmount;
    public float LoseAmount => _loseAmount;

    [Header("UI Settings:")]
    [SerializeField] TMP_Text horseName;


    public List<HorseBet> horseBets = new List<HorseBet>();

    private void OnEnable()
    {
        winPanel.callback = this;
        placePanel.callback = this;
        showPanel.callback = this;

        _setAmount = 0.0f;
        _loseAmount = 0.0f;

        horseName.text = DisplayName();
    }

    public void AddAmount(int amount, float modifier,ControlPanel.BetType betType)
    {
        _setAmount += amount * modifier;
        _loseAmount += amount;

        Debug.Log("Add amount bet block >>>>>>" + _loseAmount + " " + _setAmount);

        if (horseBets.Count > 0)
        {
            bool isBetPresent = false;


            foreach(HorseBet horseBet in horseBets)
            {
                if(horseBet.betType == betType)
                {
                    horseBet.betAmount += amount * modifier;
                    isBetPresent = true;
                    break;
                }
            }


            if(!isBetPresent) 
            {
                HorseBet horseBet = new HorseBet()
                {
                    betAmount = amount * modifier,
                    betType = betType
                };

                horseBets.Add(horseBet);
            }
        }
        else
        {
            HorseBet horseBet = new HorseBet()
            {
                betAmount = amount * modifier,
                betType = betType
            };

            horseBets.Add(horseBet);
        }

        //Actions.EnableGame(_setAmount > 0);
        Actions.CheckBetBalance();
    }

    public void SubstractAmount(int amount, float modifier, ControlPanel.BetType betType)
    {
       if(_setAmount >= amount * modifier) 
        _setAmount -= amount*modifier;

        if(_loseAmount >= amount)
          _loseAmount -= amount;

        Debug.Log("Subtract amount bet block >>>>>>" + _loseAmount + " " + _setAmount);

        if (horseBets.Count > 0)
        {
            foreach (HorseBet horseBet in horseBets)
            {
                if (horseBet.betType == betType)
                {
                    if(horseBet.betAmount > amount * modifier)
                        horseBet.betAmount -= amount * modifier;
                    else
                        horseBets.Remove(horseBet);

                    break;
                }
            }
        }

        Actions.CheckBetBalance();
    }

    public void ResetAction()
    {
        horseBets.Clear();

        winPanel.Empty();
        placePanel.Empty();
        showPanel.Empty();

        _setAmount  =0.0f;
        _loseAmount=0.0f;

        Actions.EnableGame(false);
    }


    string DisplayName()
    {
        switch (heroType) 
        {
            case Horse.Hero.Blazer:
                return "Blazer";
                break;

            case Horse.Hero.Wrangler:
                return "Wrangler";
                break;

            case Horse.Hero.Tennesse:
                return "Tennesse";
                break;

            case Horse.Hero.Kentucky:
                return "Kentucky";
                break;

            case Horse.Hero.Sheriff:
                return "Sheriff";
                break;

            case Horse.Hero.Diesel:
                return "Diesel";
                break;

            case Horse.Hero.LadyBird:
                return "LadyBird";
                break;

            case Horse.Hero.Sassy:
                return "Sassy";
                break;

            default: return "Blazer";
        }
    }

}

[System.Serializable]
public class HorseBet
{
   public ControlPanel.BetType betType;
   public float betAmount;
}
