using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using DataCollector;

public static class Actions
{
    public static Action RestartAction;

    public static Action StartAction;


    public static Action<Horse.Hero> ReachedDestinmation;

    public static Action<float,float> UpdateAmount;

    public static Action<float> WalletAmount;

    public static Action<bool> EnableGame;

    public static Action<string> Credit_Wei;

    public static Action<string> Deduct_Wei;

    public static Action<string> SetID;

    public static Action<List<RiderStat>> SortedRiders;

    public static Action<bool> Deduct;
    public static Action<bool> Credit;

    public static Action<ResultStat, string> SetTheResult;

    public static Action<Dictionary<string, int>> SetRaceModel;

    public static Action<Vector3,int> GroundHit;

    public static Action<Horse.Hero>  GetWinner;

    public static Action<List<Horse.Hero>> BetHorses; 
}
