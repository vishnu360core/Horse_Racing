using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class ParticleManager : MonoBehaviour
{
    [SerializeField] ParticleData particleData;

    [Header("Parent_Transform:")]
    [SerializeField] Transform _dustContainer;


    private void OnEnable()
    {
        Actions.GroundHit += GroundHitAction;
    }

    private void GroundHitAction(Vector3 vector)
    {
        GameObject dust = Instantiate(particleData.GetParticle("Dust"));

        dust.transform.position = vector;
        dust.transform.SetParent(_dustContainer);

        Destroy(dust, 1.0f);
    }
}
