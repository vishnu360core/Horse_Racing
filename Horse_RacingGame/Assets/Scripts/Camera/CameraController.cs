using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.Splines;
using DG.Tweening;
using System;

public class CameraController : MonoBehaviour, CameraColliderInterface
{
    [SerializeField] SplineAnimate _targetCamera ;

    [Header("Camera:")]
    [SerializeField] Transform _resetCameraTransform;
    [SerializeField] Transform _cameraTransform;

    [SerializeField] List<CinemachineVirtualCamera> virtualCameras= new List<CinemachineVirtualCamera>();


    [Header("CameraSwiches")]
    [SerializeField] List<CameraCollider> cameraColliders = new List<CameraCollider>();

    private void Start()
    {
        Actions.RestartAction += ResetAction;
        Actions.StartAction += StartAction;
        Actions.AnimateCamera += EnablePlayCamera;

        for (int i = 0; i < cameraColliders.Count; ++i)
            cameraColliders[i].calback = this;

    }

    private void StartAction()
    {
        ResetAction();

        EnablePlayCamera(true);
    }
    
    void EnablePlayCamera(bool enable)
    {
        if (enable)
          _targetCamera.Play();
        else
          _targetCamera.Pause();
    } 

    public void CameraSwitch(int index)
    {
        for(int i = 0;i < virtualCameras.Count; ++i) 
        {
            virtualCameras[i].Priority = 0;
        }

        virtualCameras[index].Priority = 10;
    }

    void ResetAction()
    {
        _targetCamera.ElapsedTime = 0;
        //
        //_targetCamera.Play();

        CameraSwitch(0); 
        //_cameraTransform.localPosition = _resetCameraTransform.localPosition;
    }
}

