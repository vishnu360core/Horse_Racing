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

    string _id;

    public string Id => _id;


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

        Debug.Log("Index :" + index + " " + message);

        if (message == "Ping")
            return;

        switch (int.Parse(index))
        {
            case 0:

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
        }
    }

    private void Start()
    {
        Actions.SetID += SetID;

        WebSocketInit("ws://localhost:6060"); // 0 Game 
        WebSocketInit("ws://localhost:6050");// 1 Wallet
        WebSocketInit("ws://localhost:6040");// 2 Credit
        WebSocketInit("ws://localhost:6030");// 3 Deduct
    }

    private void SetID(string obj)
    {
        _id = obj;
    }

    #region GAME
    public IEnumerator SendResult(string message)
    {
        yield return null;

        string resultMessage = _id + message;

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

        Send(1, message);
    }

    #endregion

    #region TRANSACTION
    public void CreditAmount(float amount)
    {
        // webSocket_Credit.SendText(amount.ToString());

        Send(2, amount.ToString());
    }

    public void DeductAmount(float amount)
    {
        // webSocket_Deduct.SendText(amount.ToString());

        Send(3, amount.ToString());
    }

    #endregion
}
