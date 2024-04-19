using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoxCollider))]
public class FinishLine : MonoBehaviour
{
    BoxCollider boxCollider;

    private void Awake()
    {
        boxCollider = GetComponent<BoxCollider>();
    }

    private void OnEnable()
    {
        Actions.RestartAction += RestartAction;
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
        boxCollider.enabled = false;

        Debug.LogWarning("Reached >>>" + other.GetComponent<Horse>().GetHero);

        Actions.ReachedDestinmation(other.GetComponent<Horse>().GetHero);
    }

}
