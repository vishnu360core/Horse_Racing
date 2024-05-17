using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
}
