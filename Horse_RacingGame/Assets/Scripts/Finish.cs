using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Finish : MonoBehaviour
{
    BoxCollider boxCollider;

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
        boxCollider.enabled = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Horse"))
        {
            boxCollider.enabled = false;

            Debug.LogWarning("Reached >>>" + other.GetComponent<Horse>().GetHero);

            Actions.ReachedDestinmation(other.GetComponent<Horse>().GetHero);
        }
    }
}
