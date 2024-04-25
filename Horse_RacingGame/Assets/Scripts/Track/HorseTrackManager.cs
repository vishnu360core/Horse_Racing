using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface HorseTrackDelegate
{
    void RaceFinished(Horse.Hero hero);
}


public class HorseTrackManager : MonoBehaviour
{
    [Header("Horse List:")]
    [SerializeField] List<Horse> _horses = new List<Horse>();

    public HorseTrackDelegate callback;

    [SerializeField] Horse.Hero WinningHero;

    int time = 0;

    private void Start()
    {
        Actions.StartAction += PlayAction;
        Actions.ReachedDestinmation += ReachedAction;

        Actions.RestartAction += RestartAction;
    }

    public void PlayAction()
    {
        RestartAction();


         for(int i=0; i < _horses.Count;i++)
            _horses[i].PlayAction();

        StartCoroutine(ChangeSpeed());
    }

   

    IEnumerator ChangeSpeed()
    {
        yield return new WaitForSeconds(1);

        if(time >6)
        {
            time = 0;
            _horses.Find(x => x.GetHero  == WinningHero).ChangeSpeed(0.22f);
        }
        else
        {

            for (int i = 0; i < _horses.Count; i++)
            {
                float speed = Random.Range(0.21f, 0.219f);
                Debug.Log("Speed >>>" + speed);

                _horses[i].ChangeSpeed(speed);
            }

             StartCoroutine(ChangeSpeed());
        }

        time++;
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

    void RestartAction()
    {
        for (int i = 0; i < _horses.Count; i++)
            _horses[i].ResetAction();

        time = 0;

        //for (int i = 0; i < _horses.Count; i++)
        //    _horses[i].Play(true);
    }

}
