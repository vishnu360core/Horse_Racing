using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

public interface ControlPanelDelegate
{
   public void AddAmount(int amount,float modifier);
   public void SubstractAmount(int amount,float modifier);
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

        callback.AddAmount(betAmount, modifier);
    }

    public void Empty()
    {
        betAmount = 0;
        BetDisplay(betAmount);

        callback.SubstractAmount(50, modifier);
    }

    public void Plus()
    {
        betAmount += 1;
        BetDisplay(betAmount);

        callback.AddAmount(betAmount, modifier);
    }

    public void Minus()
    {
        betAmount -= 1;
        BetDisplay(betAmount);

        callback.SubstractAmount(betAmount,modifier);
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
