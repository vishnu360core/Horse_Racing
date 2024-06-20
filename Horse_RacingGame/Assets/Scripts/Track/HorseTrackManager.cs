using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
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

    Horse.Hero[] winHorses;

    bool isRaceEnd = false;

    private void Start()
    {
        Actions.StartAction += PlayAction;
        Actions.ReachedDestinmation += ReachedAction;

        Actions.RestartAction += RestartAction;

        Actions.SetRaceModel += RaceModelAction;
        Actions.EndRaceAction += RaceEndAction;

        //raceModel.Add("Blazer", 1);
        //raceModel.Add("LadyBird", 2);
        //raceModel.Add("Wrangler", 3);
        //raceModel.Add("Sheriff", 4);
        //raceModel.Add("Diesel", 5);
        //raceModel.Add("Sassy", 6);
        //raceModel.Add("Tennesse", 7);
        //raceModel.Add("Kentucky", 8);

        //PlayAction();
    }

    private void RaceEndAction()
    {
        StopCoroutine(ChangeSpeed());
        isRaceEnd = true;
        //StopCoroutine(CheckLeadAction());

        //Horse.Hero[] winHorses = { riderStats[0].hero, riderStats[1].hero, riderStats[2].hero };
    }

    public void RaceModelAction(Dictionary<string, int> model)
    {
        raceModel = model;
    }


    public void PlayAction()
    {
       RestartAction();

        StartCoroutine(CheckLeadAction()); 

         for(int i=0; i < _horses.Count; i++)
            _horses[i].Play(true);

       StartCoroutine(ChangeSpeed());
    }


    IEnumerator CheckLeadAction()
    {
        yield return new WaitForSeconds(0.5f);

        Debug.Log("Checking lead !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

        riderStats.Clear();

        for (int i = 0; i < _horses.Count; i++)
        {
            CheckLead(_horses[i]);
        }

        RiderStatAction();
        StartCoroutine(CheckLeadAction());
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

                switch(rider.Value)
                {
                    case 1: speed = 33f; break;
                    case 2: speed = 30f; break;
                    case 3: speed = 27f; break;
                    case 4: speed = 24f; break;
                    case 5: speed = 23f; break;
                    case 6: speed = 22f; break;
                    case 7: speed = 21.5f; break;
                    case 8: speed = 21f; break;
                }

                //Debug.Log($"Key: {rider.Key},Value: {rider.Value}, Hero: {hero}, speed: {speed} ");


                Horse horse = _horses.Find(x => x.GetHero == hero);

                horse.ChangeSpeed(speed);

                if (rider.Value == 1)
                {
                    Actions.GetWinner(Enum.Parse<Horse.Hero>(rider.Key));
                }
            }

            StopCoroutine(ChangeSpeed());
        }
        else
        {
            Debug.Log("Random change speed running !!!!!!!!!");

            riderStats.Clear();

            for (int i = 0; i < _horses.Count; i++)
            {
                float speed = UnityEngine.Random.Range(24f, 32f);
                //Debug.Log("Speed >>>" + speed);

                _horses[i].ChangeSpeed(speed);
            }

           // RiderStatAction();

            StartCoroutine(ChangeSpeed());
        }

        time++;
    }

    #region RANK_MANANGEMENT

    void CheckLead(Horse horse)
    {
        int defeatedCount = 0;

       // Debug.LogWarning("Lead Checking >>>" + horse.GetHero);

        for (int i = 0; i < _horses.Count; i++)
        {
            if(horse != _horses[i]) 
            {
                Vector3 forward = horse.gameObject.transform.TransformDirection(Vector3.forward);
                Vector3 toOther = Vector3.Normalize(_horses[i].gameObject.transform.position - horse.gameObject.transform.position);

               // Debug.Log("Dot value >>>>" + " " + _horses[i] + ">>>>" + Vector3.Dot(forward, toOther));

                if (Vector3.Dot(forward, toOther) < 0)
                {
                    // Current rider is leading
                    if(defeatedCount +1 <= 7)
                       defeatedCount++;
                   
                }
               
            }
        }

       // Debug.Log(horse.GetHero + " has defeated " + defeatedCount + " other horses");

        if(!isRaceEnd)
          horse.rank = 8 - defeatedCount;

        if (horse.rank != -1 && riderStats.Count < 9)
        {
            RiderStat rider = new RiderStat()
            {
                hero = horse.GetHero,
                rank = horse.rank,
                time = horse.GetElaspedTime()
            };

            riderStats.Add(rider);
        }
    }

    #endregion

    void RiderStatAction()
    {
        if(riderStats.Count ==0)
        {
            Debug.LogError("Stats are empty !!!!!");
            return;
        }

        riderStats.Sort((r1, r2) => r1.rank.CompareTo(r2.rank));

        //Debug.Log("\n");

        //for(int i = 0;i < riderStats.Count;i++)
        //{
        //    Debug.Log("Stat >>> " + " "  + i + " " + riderStats[i].hero + " >>>" + riderStats[i].rank + ">>>" + riderStats[i].time);
        //}

        Actions.SortedRiders(riderStats);
    }

    public void ReachedAction()
    {
        StopAllCoroutines();          

        StopCoroutine(CheckLeadAction());

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

        isRaceEnd = false;

        //for (int i = 0; i < _horses.Count; i++)
        //    _horses[i].Play(true);
    }

}
