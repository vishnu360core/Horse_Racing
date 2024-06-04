using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface HorseTrackDelegate
{
    void RaceFinished(Horse.Hero[] hero);
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

        //PlayAction();
    }

    public void RaceModelAction(Dictionary<string, int> model)
    {
        raceModel = model;
    }


    public void PlayAction()
    {
       RestartAction();


         for(int i=0; i < _horses.Count; i++)
            _horses[i].Play(true);

       StartCoroutine(ChangeSpeed());
    }

   

    IEnumerator ChangeSpeed()
    {
        yield return new WaitForSeconds(1);

        if (time > 5)
        {
            Debug.Log("Final change speed running !!!!!!!!!");

            time = 0;

            //StopCoroutine(ChangeSpeed());

            riderStats.Clear();

            foreach (KeyValuePair<string, int> rider in raceModel)
            {
                Horse.Hero hero = Enum.Parse<Horse.Hero>(rider.Key);

                float speed = 0.0f;

                if (rider.Value != 1)
                    speed = 24f + (8 - rider.Value)    /*0.21f +  (0.01f - rider.Value *0.001f)*/;
                else
                    speed = 32f;

                Debug.Log($"Key: {rider.Key},Value: {rider.Value}, Hero: {hero}, speed: {speed} ");

                _horses.Find(x => x.GetHero == hero).ChangeSpeed(speed);

                if (rider.Value == 1)
                {
                    Actions.GetWinner(Enum.Parse<Horse.Hero>(rider.Key));
                }


                RiderStat riderStat = new RiderStat()
                {
                    hero = hero,
                    speed = speed
                };

                riderStats.Add(riderStat);
            }


            StopCoroutine(ChangeSpeed());
            //_horses.Find(x => x.GetHero == WinningHero).ChangeSpeed(0.22f);

            //riderStats.Find(x => x.hero == WinningHero).speed = 0.22f;
            RiderStatAction();
        }
        else
        {
            Debug.Log("Random change speed running !!!!!!!!!");

            riderStats.Clear();

            for (int i = 0; i < _horses.Count; i++)
            {
                float speed = UnityEngine.Random.Range(24f,32f);
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

        Debug.Log("\n");

        for(int i = 0;i < riderStats.Count;i++)
        {
            Debug.Log("Stat >>> " + " "  + i + " " + riderStats[i].hero + " >>>" + riderStats[i].speed);
        }

        Actions.SortedRiders(riderStats);
    }

    public void ReachedAction(Horse.Hero hero)
    {
        Debug.Log("Won >>>" + hero);

        //Actions.AnimateCamera(false);

        for (int i = 0; i < _horses.Count; i++)
        {
            _horses[i].Play(false);
            //_horses[i].SubscribeAnimateEvent(false);
        }

        Debug.Log("Count >>" + riderStats.Count);

        Debug.Log("O" + riderStats[0].hero + "\n" + riderStats[1].hero + "\n" + riderStats[2].hero + "\n");

        Horse.Hero[] winHorses = { riderStats[0].hero, riderStats[1].hero, riderStats[2].hero };

        callback.RaceFinished(winHorses);
       
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
