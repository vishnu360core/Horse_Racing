using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

using NativeWebSocket;
using System.Security.Cryptography;
using System.Text;

public class WalletConnector : MonoBehaviour
{
    static WalletConnector instance;

    public static WalletConnector Instance {  get { return instance; } }


    [DllImport("__Internal")]
    private static extern void ConnectWalletAndRetrieveAddress();

    [DllImport("__Internal")]
    private static extern void Deduct(string amountInEther);

    [DllImport("__Internal")]
    private static extern void Credit(string amountInEther);



    WebSocket websocket;

    WebSocket webSocket_Credit;
    WebSocket webSocket_Deduct;

    float _balanceDollar;
    string _currentAddress;

    [SerializeField] GameObject walletConnectPanel;

    /// <summary>
    /// Action implemented on awake
    /// </summary>
    private void Awake()
    { 
        if(instance == null)
            instance = this;
    }



    async void Start()
    {
        websocket = new WebSocket("ws://localhost:9010");

        webSocket_Credit = new WebSocket("ws://localhost:9020");
        webSocket_Deduct = new WebSocket("ws://localhost:9030");

        ConnectWalletAndRetrieveAddress();

        webSocket_Credit.OnOpen += () =>
        {
            Debug.Log("Credit Connection open!");
        };

        webSocket_Credit.OnError += (e) =>
        {
            Debug.Log("Credit Error! " + e);
        };

        webSocket_Deduct.OnMessage += (bytes) =>
        {
            string str = Encoding.UTF8.GetString(bytes);

            Debug.Log("MATICS >>" + str);


            Deduct(str);
        };

        webSocket_Credit.OnMessage += (bytes) =>
        {
            string str = Encoding.UTF8.GetString(bytes);

            Debug.Log("Credit MATICS >>" + str);

            Credit(str);
        };

        webSocket_Credit.OnClose += (e) =>
        {
            Debug.Log("Credit Connection closed!");

            Console.WriteLine("closed");
        };


        webSocket_Deduct.OnOpen += () =>
        {
            Debug.Log("deduct Connection open!");
        };

        webSocket_Deduct.OnError += (e) =>
        {
            Debug.Log("Deduct Error! " + e);
        };

        webSocket_Deduct.OnClose += (e) =>
        {
            Debug.Log("Deduct Connection closed!");

            Console.WriteLine("closed");
        };


        websocket.OnMessage += (bytes) =>
        {
            string str = Encoding.UTF8.GetString(bytes);

            _balanceDollar = float.Parse(str);

            Debug.Log("Balance >>" + _balanceDollar);

           

            Actions.WalletAmount(_balanceDollar);
        };


        websocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
        };

        websocket.OnError += (e) =>
        {
            Debug.Log("Error! " + e);
        };

        websocket.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");

            Console.WriteLine("closed");
        };

        websocket.OnMessage += (bytes) =>
        {
            string str = Encoding.UTF8.GetString(bytes);

           _balanceDollar = float.Parse(str);

            Debug.Log("Balance >>" + _balanceDollar);

            Actions.WalletAmount(_balanceDollar);         
        };

         await websocket.Connect();
         await webSocket_Credit.Connect();
         await webSocket_Deduct.Connect();

        // Call the JavaScript function to connect the wallet and retrieve the address
    }

    #region WALLET

    public void ReceiveWalletAddressAndBalance(string addressAndBalance)
    {
        string[] parts = addressAndBalance.Split(',');
        string address = parts[0];
        string balance = parts[1];

        walletConnectPanel.SetActive(false);

        _currentAddress = address;

        Debug.Log("Wallet Address: " + address);
        //ContractConnect();

        RequestBalance();
    }

    public void RequestBalance() 
    {
        StartCoroutine(SaveToNet(_currentAddress));
    }


    public void OnConnectError(string error) 
    { 
       walletConnectPanel.SetActive(true);
       walletConnectPanel.GetComponentInChildren<TMP_Text>().text = "Wallet not able to connect : ERROR " + error;  
    }

    #endregion

    /// <summary>
    /// Sending the data 
    /// </summary>
    /// <param name="jsonString"></param>
    public IEnumerator SaveToNet(string message)
    {
        Debug.Log("WebSocket State >>>> " + websocket.State);

        if (websocket.State == WebSocketState.Closed || websocket.State == WebSocketState.Closing)
            yield return null;
        else
        {
            yield return new WaitUntil(() => websocket.State == WebSocketState.Open);
            websocket.SendText(message);
        }
    }

    #region TRANSACTION

    // This method will be called by JavaScript to handle transaction success
    public void OnTransactionSent(string txHash)
    {
        Debug.Log("Transaction sent! Hash: " + txHash);
        // Handle the transaction success here
    }

    // This method will be called by JavaScript to handle transaction errors
    public void OnTransactionError(string errorMessage)
    {
        Debug.LogError("Failed to send transaction: " + errorMessage);
        // Handle the transaction error here
    }

    public void CreditAmount(float amount)
    {
       webSocket_Credit.SendText(amount.ToString());
    }

    public void DeductAmount(float amount) 
    {
        webSocket_Deduct.SendText(amount.ToString());
    }

    #endregion
}
