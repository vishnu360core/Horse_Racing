using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class Network : MonoBehaviour
{
    static Network instance;
    public static Network Instance { get { return instance; } }


    [DllImport("__Internal")]
    private static extern void WebSocketInit(string url);

    [DllImport("__Internal")]
    private static extern void Send(int index, string message);

    public string id;

    void ConnectCallBack(int index)
    {
        switch (index)
        {
            case 0:

                Debug.Log("Game Connection open!");
                break;

            case 1:

                Debug.Log("Wallet Connection open!");
                break;

            case 2:

                Debug.Log("Credit Connection open!");
                break;


            case 3:

                Debug.Log("Deduct Connection open!");
                break;

            case 4:

                Debug.Log("Data Connection open!");
                break;
        }
    }

    void ReceiveMessage(string data)
    {
        string[] parts;
        string message;
        string index;

        parts = data.Split('@');
        message = parts[0];
        index = parts[1];


        if (message == "Ping")
            return;

        switch (int.Parse(index))
        {
            case 0:

                string id = GetSubstringBetween(message, "<id>", "</id>");

                string loss = null;
                string win = null;

                if (message.Contains("<L>"))
                {
                    loss = GetSubstringBetween(message, "<L>", "</L>");

                    NotificationManager.Instance.SetNotication(Notification.Result.Loss, loss, id);
                }
                else if (message.Contains("<W>"))
                {
                    win = GetSubstringBetween(message, "<W>", "</W>");

                    NotificationManager.Instance.SetNotication(Notification.Result.Win, win, id);
                }

                break;

            case 1:

               float _balanceDollar = float.Parse(message);

                Debug.Log("Balance >>" + _balanceDollar);

                Actions.WalletAmount(_balanceDollar);
                break;

            case 2:

                Debug.Log("Credit MATICS >>" + message);

                Actions.Credit_Wei(message);

                break;


            case 3:

                Debug.Log("DEDUCT MATICS >>" + message);

                Actions.Deduct_Wei(message);

                break;

                case 4:
                Debug.Log("Race data >>" + message);
                Dictionary<string, int> raceModel = JsonConvert.DeserializeObject<Dictionary<string, int>>(message);

                Actions.SetRaceModel(raceModel);
                break;
        }
    }

    private void Start()
    {
        Actions.SetID += SetID;

        WebSocketInit("ws://localhost:6060"); // 0 Game 
        WebSocketInit("ws://localhost:6050");// 1 Wallet
        WebSocketInit("ws://localhost:6040");// 2 Credit
        WebSocketInit("ws://localhost:6030");// 3 Deduct
        WebSocketInit("ws://localhost:6020");// 4 Data
    }

    public string GetSubstringBetween(string fullText, string startString, string endString)
    {
        int startPos = fullText.IndexOf(startString) + startString.Length;
        int endPos = fullText.IndexOf(endString, startPos);
        if (startPos >= endPos || startPos == -1 || endPos == -1)
        {
            return "";
        }
        return fullText.Substring(startPos, endPos - startPos);
    }

    private void SetID(string obj)
    {
        id = obj;
    }

    #region GAME
    public void SendResult(string amount ,string id, Notification.Result result)
    {
        string resultMessage = null;

        switch (result)
        {
            case Notification.Result.Win:
                resultMessage = "<id>"+ id+ "</id>" + "<W>" + amount + "</W>";
                break;

            case Notification.Result.Loss:
                resultMessage = "<id>" + id + "</id>" + "<L>" + amount + "</L>";
                break;
        }

        Debug.LogWarning("Sending result >>" + resultMessage);
        Send(0, resultMessage);
    }
       #endregion


       #region WALLET

        /// <summary>
        /// Sending the data 
        /// </summary>
        /// <param name="jsonString"></param>
    public IEnumerator BalanceOf(string message)
    {
        yield return null;

        //Debug.LogWarning("id message " + idMessage);
        Send(1, message);
    }

    #endregion

    #region TRANSACTION
    public void CreditAmount(float amount)
    {
        // webSocket_Credit.SendText(amount.ToString());

        //Debug.LogWarning("id message " + idMessage);
        Send(2, amount.ToString());
    }

    public void DeductAmount(float amount)
    {
        // webSocket_Deduct.SendText(amount.ToString());

       // Debug.LogWarning("id message " + idMessage);
        Send(3, amount.ToString());
    }

    #endregion
}
