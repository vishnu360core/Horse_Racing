using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    [Header("Managers:")]
    [SerializeField] HorseTrackManager horseTrackManager;


    private void Start()
    {
        Actions.RestartAction += RestartAction;
    }

    /// <summary>
    /// Action implemented on restart game
    /// </summary>
    private void RestartAction()
    {
        
    }
}
 