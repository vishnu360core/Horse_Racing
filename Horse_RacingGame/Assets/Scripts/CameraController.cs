using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.Splines;
using DG.Tweening;
using System;

public class CameraController : MonoBehaviour
{
    [SerializeField] SplineAnimate _targetCamera ;

    [Header("Camera:")]
    [SerializeField] Transform _resetCameraTransform;
    [SerializeField] Transform _cameraTransform;

    [SerializeField] CinemachineVirtualCamera virtualCamera;
    [SerializeField] CinemachineStateDrivenCamera drivenCamera;

    private void Start()
    {
        Actions.RestartAction += ResetAction;
        Actions.StartAction += StartAction;
    }

    private void StartAction()
    {
        ResetAction();

        _targetCamera.Play();
    }

    void ResetAction()
    {
        _targetCamera.ElapsedTime = 0;

        _targetCamera.Play();

        //_cameraTransform.localPosition = _resetCameraTransform.localPosition;
    }
}

