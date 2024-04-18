using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface HorseTrackDelegate
{
    void RaceFinished(Horse.Hero hero);
}


public class HorseTrackManager : MonoBehaviour,HorseDelegate
{
    [Header("Horse List:")]
    [SerializeField] List<Horse> _horses = new List<Horse>();

    public HorseTrackDelegate callback;

    private void Start()
    {
        for (int i = 0; i < _horses.Count; i++)
            _horses[i].callback = this;

        Actions.StartAction += PlayAction;
    }

    public void PlannedTrackAction()
    {

    }

    public void PlayAction()
    {
         for(int i=0; i < _horses.Count;i++)
            _horses[i].PlayAction();
    }

    public void ReachedAction(Horse.Hero hero)
    {
        Debug.Log("Won >>>" + hero);

        for (int i = 0; i < _horses.Count; i++)
        {
            _horses[i].Play(false);
            _horses[i].SubscribeAnimateEvent(false);
        }

        callback.RaceFinished(hero);
       
       // ResetAction();
    }

    void ResetAction()
    {
        for (int i = 0; i < _horses.Count; i++)
            _horses[i].ResetAction();

        for (int i = 0; i < _horses.Count; i++)
            _horses[i].Play(true);

        Actions.RestartAction();
    }

}
