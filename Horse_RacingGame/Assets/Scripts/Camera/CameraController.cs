using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using UnityEngine.Splines;
using DG.Tweening;
using System;

using UnityEngine.Events;

public class CameraController : MonoBehaviour, CameraColliderInterface
{
    public enum Camera_Type {main,bet };


    [Header("Camera:")]
    [SerializeField] CinemachineBrain _brain;

    [SerializeField] List<CinemachineVirtualCamera> virtualCameras = new List<CinemachineVirtualCamera>();
    [SerializeField] List<HorseCam> horseCams = new List<HorseCam>();

    List<HorseCam> betCams = new List<HorseCam>();

    [Header("Camera Colliders:")]
    [SerializeField] List<CameraCollider> cameraColliders = new List<CameraCollider>(); 
  
    [Header("Slow Motion Settings:")]
    [Range(0, 1)]
    [SerializeField] float slowMotionTimeScale;


    [Header("Cam Events")]
    [SerializeField] UnityEvent _onBetsCamIntialised;
    [SerializeField] UnityEvent _onBetsCleared;


    float startTimeScale;
    float startFixedDeltaTime;

    Horse.Hero winner;

    private void Start()
    {
        Actions.RestartAction += ResetAction;
        Actions.StartAction += StartAction;

        Actions.GetWinner += GetWinnerAction;
        Actions.BetHorses += GetBetHorseCams;

        startTimeScale = Time.timeScale;
        startFixedDeltaTime = Time.fixedDeltaTime;

        for(int i = 0; i < cameraColliders.Count; ++i)
            cameraColliders[i].calback = this;
    }

    private void GetBetHorseCams(List<Horse.Hero> betHorses)
    {
        betCams.Clear();

        _onBetsCamIntialised.Invoke();

        Debug.LogWarning("BET HORSESE CAM >>>" +  betHorses.Count);

        for (int i = 0; i < betHorses.Count; ++i)
        {
            betCams.Add(virtualCameras.Find(x => x.GetComponent<HorseCam>().Hero == betHorses[i] && x.GetComponent<HorseCam>().GetView == HorseCam.View.rear).GetComponent<HorseCam>());
        }

        if (betCams.Count > 0)
        {
            Debug.LogWarning("BET HORSESE CAMS 1>>>");

            CameraSwitch(Camera_Type.bet);
        }
    }

    private void GetWinnerAction(Horse.Hero hero)
    {
       winner = hero;
    }

    private void StartAction()
    {
       ResetAction();

       // EnablePlayCamera(true);
    }
    
    

    /// <summary>
    /// Clear the camera priorities
    /// </summary>
    void ClearCameraPriorityAction()
    {
        for (int i = 0; i < virtualCameras.Count; ++i)
        {
            virtualCameras[i].Priority = 0;
        }
    }

    public void WorldCamView()
    {
        CameraSwitch(Camera_Type.main);
    }

    public void BetCamView()
    {
        CameraSwitch(Camera_Type.bet);
    }

    /// <summary>
    /// Main switch of the camera
    /// </summary>
    /// <param name="cameraType"></param>
    void CameraSwitch(Camera_Type cameraType)
    {
        ClearCameraPriorityAction();

        switch(cameraType) 
        {
            case Camera_Type.main:

                horseCams.Find(x => x.Hero == winner && x.GetView == HorseCam.View.front).Camera.Priority = 20;
                break;

            case Camera_Type.bet:

                if(betCams.Count >0)
                {
                    Debug.LogWarning("BET HORSESE CAMS 2>>>");

                    betCams[0].Camera.Priority = 20;
                }
                break;
        }
    }


    /// <summary>
    /// Bet CAM switch (LEFT)
    /// </summary>
    public void BetCamSwitch_Left()
    {
        if (betCams.Count <= 0)
            return;

        int currentIndex = betCams.FindIndex(x => x.Camera.Priority == 20);

        Debug.Log("SWITCH left 0 >>>" + currentIndex + " " + betCams.Count);

        if (currentIndex - 1 < 0)
        {
            currentIndex = betCams.Count - 1;
        }
        else
          currentIndex--;

        Debug.Log("SWITCH left >>>" + currentIndex + " " + betCams.Count);

        ClearCameraPriorityAction();

        betCams[currentIndex].Camera.Priority = 20;
    }

    /// <summary>
    /// Bet CAM switch (RIGHT)
    /// </summary>
    public void BetCamSwitch_Right()
    {
        if (betCams.Count <= 0)
            return;

        int currentIndex = betCams.FindIndex(x => x.Camera.Priority == 20);

        Debug.Log("SWITCH right 0 >>>" + currentIndex + " " + betCams.Count);

        if (currentIndex + 1 > betCams.Count)
        {
            currentIndex = 0;
        }
        else
         currentIndex++;

        Debug.Log("SWITCH right >>>" + currentIndex + " " + betCams.Count);

        ClearCameraPriorityAction();

        betCams[currentIndex].Camera.Priority = 20;
    }

    #region SLOW MOTION

    public void FinalCameraEndPosition()
    {
        ClearCameraPriorityAction();

        _brain.m_DefaultBlend = new CinemachineBlendDefinition(CinemachineBlendDefinition.Style.Cut, 1.0f);

        virtualCameras.Find(x => x.name == "Virtual Camera_Final").Priority = 20;

        EnableSlowMotion(true);
    }

    /// <summary>
    /// Enable the slow motion 
    /// </summary>
    /// <param name="enable"></param>
    public void EnableSlowMotion(bool enable)
    {
        StopAllCoroutines();

        if(enable)
        {
            StartCoroutine(SlowMotionAction());
        }
        else
        {
            Debug.LogWarning("SLOW motion false!!!!!!!!!!!");

            Time.timeScale = 1.0f;
            Time.fixedDeltaTime = startFixedDeltaTime;

            StopCoroutine(SlowMotionAction());
        }
    }

    IEnumerator SlowMotionAction()
    {
        Time.timeScale = slowMotionTimeScale;
        Time.fixedDeltaTime = startFixedDeltaTime * slowMotionTimeScale;

        yield return null;

        StartCoroutine(SlowMotionAction());
    }

    #endregion

    void ResetAction()
    {
        ClearCameraPriorityAction();

        _brain.m_DefaultBlend = new CinemachineBlendDefinition(CinemachineBlendDefinition.Style.EaseInOut, 1.0f);

        _onBetsCleared?.Invoke();

        //_cameraTransform.localPosition = _resetCameraTransform.localPosition;
    }
}

