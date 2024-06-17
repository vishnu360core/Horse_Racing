using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class GroundTrigger : MonoBehaviour
{
   [SerializeField]  Collider collider;

   [SerializeField] int _dustIndex = 0;

    public void SetDustParticle(int dustIndex)
    {  _dustIndex = dustIndex; }


    private void OnEnable()
    {
        collider = GetComponent<Collider>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Track"))
        {
            Vector3 closestPoint = collider.ClosestPoint(other.transform.position);

            Actions.GroundHit(closestPoint,_dustIndex);
        }
    }
}
