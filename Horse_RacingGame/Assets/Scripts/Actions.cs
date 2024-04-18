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
}
