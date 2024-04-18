using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

using NativeWebSocket;
using System.Security.Cryptography;
using System.Text;

public class WalletConnector : MonoBehaviour
{

    [DllImport("__Internal")]
    private static extern void ConnectWalletAndRetrieveAddress();

    WebSocket websocket;

    float _balanceDollar;

    async void Start()
    {
        websocket = new WebSocket("ws://localhost:9010");

        ConnectWalletAndRetrieveAddress();

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

        // Call the JavaScript function to connect the wallet and retrieve the address
    }

  

    public void ReceiveWalletAddressAndBalance(string addressAndBalance)
    {
        string[] parts = addressAndBalance.Split(',');
        string address = parts[0];
        string balance = parts[1];

        Debug.Log("Wallet Address: " + address);

        StartCoroutine(SaveToNet(balance)); 

    }

    // This method will be called by JavaScript to handle errors
    public void OnConnectError(string errorMessage)
    {
        Debug.LogError("Error: " + errorMessage);
        // Handle the error here
    }


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

}
