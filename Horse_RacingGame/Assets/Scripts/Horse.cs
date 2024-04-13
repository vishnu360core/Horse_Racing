using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Splines;

[RequireComponent(typeof(SplineAnimate))]
[RequireComponent (typeof(Animator))]
public class Horse : MonoBehaviour
{
    SplineAnimate splineAnimate;
    Animator animator;

    Vector3 _currentPos = Vector3.zero;

    // Start is called before the first frame update
    void Start()
    {
        splineAnimate = this.GetComponent<SplineAnimate>();
        animator = this.GetComponent<Animator>();

        splineAnimate.onUpdated += OnSplineUpdate;

    }

    private void OnSplineUpdate(Vector3 vector, Quaternion quaternion)
    {
       if((int)splineAnimate.ElapsedTime == (int)splineAnimate.duration)
       {
            Debug.Log("Stopped");

            animator.Play("Idle");
            return;
       }
    }

  
    /// <summary>
    /// Reset the horse
    /// </summary>
    void ResetAction()
    {
        animator.Play("Run");
    }
}
