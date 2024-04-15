using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HorseTrackManager : MonoBehaviour,HorseDelegate
{
    [Header("Horse List:")]
    [SerializeField] List<Horse> _horses = new List<Horse>();

    private void Start()
    {
        for (int i = 0; i < _horses.Count; i++)
            _horses[i].callback = this;
    }

    public void PlannedTrackAction()
    {

    }

    public void ReachedAction(string name)
    {
        Debug.Log("Won >>>" + name);

        for (int i = 0; i < _horses.Count; i++)
        {
            _horses[i].Play(false);
            _horses[i].SubscribeAnimateEvent(false);
        }

        ResetAction();
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
