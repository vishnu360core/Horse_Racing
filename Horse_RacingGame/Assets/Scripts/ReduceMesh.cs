using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReduceMesh : MonoBehaviour
{
    [SerializeField] MeshFilter meshFilter;

    [Space]
    [Range(0, 1)]
    [SerializeField] float quality;

    private void OnEnable()
    {
        meshFilter = GetComponent<MeshFilter>();

        var mesh = meshFilter.sharedMesh;
        var mesSimplifier = new UnityMeshSimplifier.MeshSimplifier();

        mesSimplifier.Initialize(mesh);
        mesSimplifier.SimplifyMesh(quality);

        var destMesh = mesSimplifier.ToMesh();

        Debug.Log("Reducing mesh  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

        meshFilter.sharedMesh = destMesh;
    }
}
