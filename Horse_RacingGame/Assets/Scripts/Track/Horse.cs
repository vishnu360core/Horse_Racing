using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Splines;
using DG.Tweening;
using UnityEngine.UI;


[RequireComponent(typeof(SplineAnimate))]
[RequireComponent (typeof(Animator))]
public class Horse : MonoBehaviour
{
    public enum Hero { Blazer,Wrangler,Sheriff,Kentucky,Diesel,Tennesse,LadyBird,Sassy}

    [SerializeField] Hero _hero;
    public Hero GetHero => _hero;

   [SerializeField]SplineAnimate splineAnimate;
    Animator animator;

    Vector3 _currentPos = Vector3.zero;

    [SerializeField] string _horsName;
    string HorseName => _horsName;

    float transitionDuration = 10.0f;

    float currentMaxSpeed;
    float targetMaxSpeed;

    [Header("Particle System :")]
    [SerializeField] List<GroundTrigger> groundTriggers = new List<GroundTrigger>();
    [SerializeField] int particleIndex = 0;

    [Header("Arrow Header :")]
    [SerializeField] Color arrowcolor;
    [SerializeField] Image arrowImage;

    public float pos;

    public   int rank = -1;

    private void Awake()
    {
        for (int i = 0; i < groundTriggers.Count; ++i)
        {
            groundTriggers[i].SetDustParticle(particleIndex);
        }
    }

    private void OnEnable()
    {
       // splineAnimate = this.GetComponent<SplineAnimate>();
        animator = this.GetComponent<Animator>();

        arrowImage.color = arrowcolor;
    }

    private void Start()
    {

    }


    private void Update()
    {
        if (arrowImage != null) 
            arrowImage.transform.LookAt(Camera.main.transform,Vector3.up);
    }

    public float GetElaspedTime() 
    {
        return splineAnimate.elapsedTime;
    }

    public void PlayAction()
    {
        splineAnimate.Play();
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

    public void SetRank(int value)
    {
        rank = value;
    }

    /// <summary>
    /// Reset the horse
    /// </summary>
    public void ResetAction()
    {
        splineAnimate.Restart(false);

        rank = -1;

       // SubscribeAnimateEvent(true);
    }
}
