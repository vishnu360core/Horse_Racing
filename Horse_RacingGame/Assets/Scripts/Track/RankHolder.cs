using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankHolder : MonoBehaviour
{
    [SerializeField] Horse.Hero hero;

    private void OnEnable()
    {
        hero = this.GetComponent<Horse>().GetHero;
    }


}
