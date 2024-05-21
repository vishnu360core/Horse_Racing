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
    public enum Hero { Blazer,Wrangler,Sheriff,Kentucky,Diesel,Tennesse,LadyBird,Sassy}

    [SerializeField] Hero _hero;
    public Hero GetHero => _hero;

    SplineAnimate splineAnimate;
    Animator animator;

    Vector3 _currentPos = Vector3.zero;

    [SerializeField] string _horsName;
    string HorseName => _horsName;

    float transitionDuration = 2.0f;

    float currentMaxSpeed;
    float targetMaxSpeed;

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


    public void ChangeSpeed(float speed)
    {
        targetMaxSpeed = speed;

        currentMaxSpeed = splineAnimate.MaxSpeed;
        splineAnimate.MaxSpeed = speed;

        StartCoroutine(ChangeMaxSpeedSmoothly());
    }

    IEnumerator ChangeMaxSpeedSmoothly()
    {
        float elapsedTime = 0f;

        while (elapsedTime < transitionDuration)
        {
            // Calculate the interpolation factor (0 to 1)
            float t = elapsedTime / transitionDuration;

            // Interpolate the current max speed towards the target max speed
            float interpolatedSpeed = Mathf.Lerp(currentMaxSpeed, targetMaxSpeed, t);

            // Update the max speed of the spline animator
            splineAnimate.MaxSpeed = interpolatedSpeed;

            // Increment the elapsed time
            elapsedTime += Time.deltaTime;

            yield return null;
        }

        // Set the max speed to the target max speed once the transition is complete
        splineAnimate.MaxSpeed = targetMaxSpeed;
    }


    /// <summary>
    /// Reset the horse
    /// </summary>
    public void ResetAction()
    {
        splineAnimate.Restart(false);

        SubscribeAnimateEvent(true);
    }
}
