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

    private void OnEnable()
    {
        winPanel.callback = this;
        placePanel.callback = this;
        showPanel.callback = this;

        _setAmount = 0.0f;
        _loseAmount = 0.0f;

        horseName.text = DisplayName();
    }

    public void AddAmount(int amount, float modifier)
    {
        _setAmount += amount * modifier;
        _loseAmount += amount;

        Actions.EnableGame(_setAmount > 0);
    }

    public void SubstractAmount(int amount, float modifier)
    {
        if(_setAmount > amount * modifier) 
        _setAmount -= amount*modifier;

        if(_loseAmount > amount)
        _loseAmount -= amount;

        Actions.EnableGame(_setAmount > 0);
    }

    public void ResetAction()
    {
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

            case Horse.Hero.Tennessee:
                return "Tennessee";
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
