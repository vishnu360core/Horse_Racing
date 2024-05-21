using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace DataCollector
{
    public enum GameStatus { unlocked, locked };

    [System.Serializable]
    public class GameData
    {
        public GameStatus status;
    }


    public enum ResultStat { success, fail };

}

