using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ParticleData",menuName ="Storage/Particle")]
public class ParticleData : ScriptableObject
{
    [Header("Particles:")]
    [SerializeField] List<GameObject> particles = new List<GameObject>();


    private void OnEnable()
    {
       
    }

  

    public GameObject DustParticle(int index)
    {
        return particles[index];
    }

}
