
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public interface CameraColliderInterface
{
    public void FinalCameraEndPosition();
}

[RequireComponent(typeof(BoxCollider))]
public class CameraCollider : MonoBehaviour
{
   // [SerializeField] int cameraIndex;

    public CameraColliderInterface calback;

    BoxCollider boxCollider;

    private void OnEnable()
    {
        boxCollider = GetComponent<BoxCollider>();

        Actions.RestartAction += RestartAction;
    }

    private void RestartAction()
    {
      boxCollider.enabled = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Horse"))
        {
            boxCollider.enabled = false;

            calback.FinalCameraEndPosition();
        }
    }
}
