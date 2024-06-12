using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;
using System;


public class RiderInfo : MonoBehaviour
{
    public Horse.Hero hero;
    public int index;

    [SerializeField] TMP_Text rankList;
    [SerializeField] TMP_Text nameText;
    [SerializeField] TMP_Text timeText;

    [Header("Image :")]
    [SerializeField] GameObject _1stRank;
    [SerializeField] GameObject _2stRank;
    [SerializeField] GameObject _3rdRank;
    [SerializeField] GameObject _rankPanel;

  
    /// <summary>
    /// Action implemented on enable
    /// </summary>
    private void OnEnable()
    {
       switch(hero)
       {
            case Horse.Hero.Blazer : nameText.text = "Blazer";break;
            case Horse.Hero.Wrangler: nameText.text = "Wrangler"; break;
            case Horse.Hero.Tennesse: nameText.text = "Tennesse"; break;
            case Horse.Hero.Kentucky: nameText.text = "Kentucky"; break;
            case Horse.Hero.Sassy: nameText.text = "Sassy"; break;
            case Horse.Hero.Diesel: nameText.text = "Diesel"; break;
            case Horse.Hero.Sheriff: nameText.text = "Sheriff"; break;
            case Horse.Hero.LadyBird: nameText.text = "LadyBird"; break;
       }
    }

    public void SetTime(float time)
    {
        float  roundedValue = float.Parse(time.ToString("F2"));
        int second = (int)time;

        int milisecond = (int)((roundedValue - float.Parse(second.ToString()))*100);

        timeText.text = string.Format("{0:D2}.{1:D2}", second,milisecond);
    }

    public void SetRank(int rank)
    {

        _1stRank.SetActive(false);
        _2stRank.SetActive(false);
        _3rdRank.SetActive(false);
        _rankPanel.SetActive(false);    

        if (rank == 1
        || rank == 2
        || rank == 3
            )
        {
            rankList.text = "";

            switch (rank)
            {
                case 1: _1stRank.SetActive(true); break;
                case 2: _2stRank.SetActive(true); break;
                case 3: _3rdRank.SetActive(true); break;
            }

            return;
        }
        
        _rankPanel.SetActive(true);
        rankList.text = rank.ToString();
    }

}

