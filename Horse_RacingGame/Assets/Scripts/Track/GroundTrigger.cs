using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class GroundTrigger : MonoBehaviour
{
    public Collider collider;

    private void OnEnable()
    {
        collider = GetComponent<Collider>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Track"))
        {
            Vector3 closestPoint = collider.ClosestPoint(other.transform.position);

            Debug.LogWarning("Track >>> " + closestPoint);  
            Actions.GroundHit(closestPoint);
        }
    }
}
