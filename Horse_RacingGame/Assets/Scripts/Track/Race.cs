using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using DG.Tweening;
using UnityEngine.UI;

public class Race : MonoBehaviour
{
    public List<RiderInfo> riderInfos = new List<RiderInfo>();

    [SerializeField] VerticalLayoutGroup layoutGroup;


    private void OnEnable()
    {
        layoutGroup = GetComponent<VerticalLayoutGroup>();

        Actions.SortedRiders += SortRidersAction;
    }

    private void SortRidersAction(List<RiderStat> riders)
    {
        for (int i = 0; i < riders.Count; i++)
        {
            RiderInfo riderInfo = riderInfos.Find(x => x.hero == riders[i].hero);

            //layoutGroup.enabled = false;

            Transform riderTransform = riderInfo.transform;
            Vector3 newPos = layoutGroup.transform.GetChild(i).localPosition;

            riderInfo.SetRank(i + 1);

            riderTransform.DOLocalMove(newPos, 0.5f).OnComplete(() =>
            {
                riderTransform.SetSiblingIndex(i);

                // layoutGroup.enabled = true;
            });
        }
    }
}

[System.Serializable]
public class RiderStat
{
    public Horse.Hero hero;

    public int rank;
}
