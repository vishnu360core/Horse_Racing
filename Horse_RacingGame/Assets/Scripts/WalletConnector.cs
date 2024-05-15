using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

using System.Security.Cryptography;
using System.Text;
using Best.HTTP.SecureProtocol.Org.BouncyCastle.Utilities;
using UnityEditor.VersionControl;

public class WalletConnector : MonoBehaviour
{
    static WalletConnector instance;

    public static WalletConnector Instance {  get { return instance; } }


    [DllImport("__Internal")]
    private static extern void WebSocketInit(string url);

    [DllImport("__Internal")]
    private static extern void Send(int index, string message);

    float _balanceDollar;
    string _currentAddress;

    [SerializeField] GameObject walletConnectPanel;

    void ConnectCallBack(int index)
    {
        switch(index) 
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
                _balanceDollar = float.Parse(message);

                Debug.Log("Balance >>" + _balanceDollar);

                Actions.WalletAmount(_balanceDollar);
                break;

            case 2:

                Debug.Log("Credit MATICS >>" + message);
                break;


            case 3:

                Debug.Log("DEDUCT MATICS >>" + message);
                break;
        }
    }


    /// <summary>
    /// Action implemented on awake
    /// </summary>
    private void Awake()
    { 
        if(instance == null)
            instance = this;
    }

     void Start()
    {
        WebSocketInit("ws://localhost:6060"); // 0 Game 
        WebSocketInit("ws://localhost:6050");// 1 Wallet
        WebSocketInit("ws://localhost:6040");// 2 Credit
        WebSocketInit("ws://localhost:6030");// 3 Deduct

        //ConnectWalletAndRetrieveAddress();

        //#region WEB_CREDIT

        //webSocket_Credit.OnOpen += () =>
        //{
        //    Debug.Log("Credit Connection open!");
        //};

        //webSocket_Credit.OnClose += (e) =>
        //{
        //    Debug.Log("Credit Connection closed!");

        //    Console.WriteLine("closed");
        //};

        //webSocket_Credit.OnError += (e) =>
        //{
        //    Debug.Log("Credit Error! " + e);
        //};

        //webSocket_Credit.OnMessage += (bytes) =>
        //{
        //    string str = Encoding.UTF8.GetString(bytes);

        //    Debug.Log("Credit MATICS >>" + str);

        //    Credit(_currentAddress, str);
        //};

        //#endregion

        //#region WEB_DEDUCT

        //webSocket_Deduct.OnMessage += (bytes) =>
        //{
        //    string str = Encoding.UTF8.GetString(bytes);

        //    Debug.Log("MATICS >>" + str);


        //    Deduct(_currentAddress,str);
        //};

        //webSocket_Deduct.OnOpen += () =>
        //{
        //    Debug.Log("deduct Connection open!");
        //};

        //webSocket_Deduct.OnError += (e) =>
        //{
        //    Debug.Log("Deduct Error! " + e);
        //};

        //webSocket_Deduct.OnClose += (e) =>
        //{
        //    Debug.Log("Deduct Connection closed!");

        //    Console.WriteLine("closed");
        //};

        //#endregion

        //#region WEB_WALLET

        //websocket_Wallet.OnMessage += (bytes) =>
        //{
        //    string str = Encoding.UTF8.GetString(bytes);

        //    _balanceDollar = float.Parse(str);

        //    Debug.Log("Balance >>" + _balanceDollar);

           

        //    Actions.WalletAmount(_balanceDollar);
        //};


        //websocket_Wallet.OnOpen += () =>
        //{
        //    Debug.Log("Connection open!");
        //};

        //websocket_Wallet.OnError += (e) =>
        //{
        //    Debug.Log("Error! " + e);
        //};

        //websocket_Wallet.OnClose += (e) =>
        //{
        //    Debug.Log("Connection closed!");

        //    Console.WriteLine("closed");
        //};

        //websocket_Wallet.OnMessage += (bytes) =>
        //{
        //    string str = Encoding.UTF8.GetString(bytes);

        //   _balanceDollar = float.Parse(str);

        //    Debug.Log("Balance >>" + _balanceDollar);

        //    Actions.WalletAmount(_balanceDollar);         
        //};

        //#endregion

        //await websocket_Wallet.Connect();
        //await webSocket_Credit.Connect();
        //await webSocket_Deduct.Connect();
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
        yield return null;
        //Debug.Log("WebSocket State >>>> " + websocket_Wallet.State);

        //if (websocket_Wallet.State == WebSocketState.Closed || websocket_Wallet.State == WebSocketState.Closing)
        //    yield return null;
        //else
        //{
        //    yield return new WaitUntil(() => websocket_Wallet.State == WebSocketState.Open);
        //    websocket_Wallet.SendText(message);
        //}

        Send(1, message);
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


    public void Deduct_Rejected()
    {
        Debug.Log("Deduction rejected !!!");
    }

    public void Deduct_GetHash(string hashString)
    {
        Debug.LogWarning("Hash >>" + hashString);
    }

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
