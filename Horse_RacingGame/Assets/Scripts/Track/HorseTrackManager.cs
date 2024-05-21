using System;
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

    List<RiderStat> riderStats = new List<RiderStat>();

    public Dictionary<string, int> raceModel = new Dictionary<string, int>();   

    private void Start()
    {
        Actions.StartAction += PlayAction;
        Actions.ReachedDestinmation += ReachedAction;

        Actions.RestartAction += RestartAction;

        Actions.SetRaceModel += RaceModelAction;
    }

    public void RaceModelAction(Dictionary<string, int> model)
    {
        raceModel = model;
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

        if (time > 6)
        {
            time = 0;


            riderStats.Clear();

            foreach (KeyValuePair<string, int> rider in raceModel)
            {
                Horse.Hero hero = Enum.Parse<Horse.Hero>(rider.Key);

                float speed = 0.0f;

                if (rider.Value != 1)
                    speed = 0.21f +  (0.01f - rider.Value *0.001f);
                else
                    speed = 0.22f;

                Debug.Log($"Key: {rider.Key},Value: {rider.Value}, Hero: {hero}, speed: {speed} ");

                _horses.Find(x => x.GetHero == hero).ChangeSpeed(speed);


                RiderStat riderStat = new RiderStat()
                {
                    hero = hero,
                    speed = speed
                };

                riderStats.Add(riderStat);
            }

            //_horses.Find(x => x.GetHero == WinningHero).ChangeSpeed(0.22f);

            //riderStats.Find(x => x.hero == WinningHero).speed = 0.22f;
            RiderStatAction();
        }
        else
        {
            riderStats.Clear();

            for (int i = 0; i < _horses.Count; i++)
            {
                float speed = UnityEngine.Random.Range(0.21f, 0.219f);
                //Debug.Log("Speed >>>" + speed);

                _horses[i].ChangeSpeed(speed);

                RiderStat rider = new RiderStat()
                {
                    hero = _horses[i].GetHero,
                    speed = speed
                };

                riderStats.Add(rider);
            }

            RiderStatAction();

            StartCoroutine(ChangeSpeed());
        }

        time++;
    }

    void RiderStatAction()
    {
        riderStats.Sort((r2, r1) => r1.speed.CompareTo(r2.speed));

        for(int i = 0;i < riderStats.Count;i++)
        {
            Debug.Log("Stat >>>" + riderStats[i].hero + " >>>" + riderStats[i].speed);
        }

        Actions.SortedRiders(riderStats);
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
