using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Splines;
using DG.Tweening;


[RequireComponent(typeof(SplineAnimate))]
[RequireComponent (typeof(Animator))]
public class Horse : MonoBehaviour
{
    public enum Hero { Blazer,Wrangler,Sheriff,Kentucky,Diesel,Tennessee,LadyBird,Sassy}

    [SerializeField] Hero _hero;
    public Hero GetHero => _hero;

    SplineAnimate splineAnimate;
    Animator animator;

    Vector3 _currentPos = Vector3.zero;

    [SerializeField] string _horsName;
    string HorseName => _horsName;

    private void OnEnable()
    {
        splineAnimate = this.GetComponent<SplineAnimate>();
        animator = this.GetComponent<Animator>();

        splineAnimate.onUpdated += OnSplineUpdate;

       

        //splineAnimate.MaxSpeed = 0.2f;
      //  ChangeRankPosition(3);
    }

    public void PlayAction()
    {
        splineAnimate.Play();
    }

    private void OnSplineUpdate(Vector3 vector, Quaternion quaternion)
    {
        float time = Mathf.Round(splineAnimate.ElapsedTime * 10f) / 10f;
        float duration = Mathf.Round(splineAnimate.duration * 10f) / 10f;

       // if (time == duration)
       //{
       //     Debug.Log("Stopped");

       //     callback.ReachedAction(_hero);
       //     return;
       //}
    }

    public void SubscribeAnimateEvent(bool enable)
    {
        if (splineAnimate == null)
            return;

        if(enable)
            splineAnimate.onUpdated += OnSplineUpdate;
        else
            splineAnimate.onUpdated -= OnSplineUpdate;
    }

    /// <summary>
    /// Play the spline animate
    /// </summary>
    public void Play(bool enable)
    {
        if(enable)
            splineAnimate.Play();
        else
            splineAnimate.Pause();  
    }


    /// <summary>
    /// Reset the horse
    /// </summary>
    public void ResetAction()
    {
        splineAnimate.Restart(false);
        splineAnimate.MaxSpeed = 0.2f;

        SubscribeAnimateEvent(true);
    }
}
