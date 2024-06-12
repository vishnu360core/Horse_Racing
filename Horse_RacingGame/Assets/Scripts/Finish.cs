using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    BoxCollider boxCollider;

    int riderCount = 0;

    private void Awake()
    {
        boxCollider = GetComponent<BoxCollider>();
    }

    private void OnEnable()
    {
        Actions.RestartAction += RestartAction;
        Actions.StartAction += RestartAction;
    }

    /// <summary>
    /// Restart the finishedLine
    /// </summary>
    void RestartAction()
    {
        riderCount = 0;
        boxCollider.enabled = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Horse"))
        {
            if (riderCount == 0)
                Actions.EndRaceAction();

            riderCount++;

            Debug.LogWarning("Reached >>>" + other.GetComponent<Horse>().GetHero + " left: " + (8- riderCount) );

            if(8- riderCount  == 0)
            {
                boxCollider.enabled = false;
                Actions.ReachedDestinmation();
            }
        }
    }
}
