using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;


public class RiderInfo : MonoBehaviour
{
    public Horse.Hero hero;
    public int index;

    [SerializeField] TMP_Text rankList;


    public void SetRank(int rank)
    {
        rankList.text = rank.ToString();
    }

}

