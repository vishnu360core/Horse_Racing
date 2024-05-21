using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

public interface ControlPanelDelegate
{
   public void AddAmount(int amount,float modifier,ControlPanel.BetType betType);
   public void SubstractAmount(int amount,float modifier, ControlPanel.BetType betType);
}

public class ControlPanel : MonoBehaviour
{
    public enum BetType { Win, Place, Show };

    [Header("BetControl:")]
    [SerializeField] BetType _type;
    [SerializeField] float modifier;
    public float Modifier => modifier;

    [SerializeField] TMP_Text betAmount_Text;

    int betAmount;
    public int BetAmount => betAmount;

    public ControlPanelDelegate callback;


   #region MATH_CONTROLS

    public void Full()
    {
        betAmount = 50;
        BetDisplay(betAmount);

        callback.AddAmount(betAmount, modifier,_type);
    }

    public void Empty()
    {
        betAmount = 0;
        BetDisplay(betAmount);

        callback.SubstractAmount(50, modifier,_type);
    }

    public void Plus()
    {
        callback.AddAmount(1, modifier, _type);

        betAmount += 1;
        BetDisplay(betAmount);

    }

    public void Minus()
    {
        if (betAmount <= 0)
            return;

        callback.SubstractAmount(1, modifier, _type);

        betAmount -= 1;
        BetDisplay(betAmount);
    }

    #endregion

    void BetDisplay(int amount)
    {
       betAmount_Text.text = BetShow() + "\n" + amount;
    }

    string BetShow()
    {
        switch (_type) 
        { 
           case BetType.Win:
                return "Win";
                break;

            case BetType.Place:
                return "Place";
                break;

            case BetType.Show:
                return "Show";
                break;

            default: return "Win";   
        }
    }

}
