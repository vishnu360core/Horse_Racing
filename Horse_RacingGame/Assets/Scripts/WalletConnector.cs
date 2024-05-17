using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

using Thirdweb;
using Thirdweb.Examples;


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

    [Header("WalletConnect:")]
    [SerializeField] Prefab_ConnectWallet connectWallet;

    #region CONTRACT
    string abi = @" [
	{
		""inputs"": [],
		""name"": ""placebid"",
		""outputs"": [],
		""stateMutability"": ""payable"",
		""type"": ""function""
	},
	{
		""inputs"": [
			{
				""internalType"": ""address payable"",
				""name"": ""_to"",
				""type"": ""address""
			},
			{
				""internalType"": ""uint256"",
				""name"": ""_amount"",
				""type"": ""uint256""
			}
		],
		""name"": ""rewardFunc"",
		""outputs"": [],
		""stateMutability"": ""nonpayable"",
		""type"": ""function""
	},
	{
		""inputs"": [
			{
				""internalType"": ""address payable"",
				""name"": ""_to"",
				""type"": ""address""
			},
			{
				""internalType"": ""uint256"",
				""name"": ""_amount"",
				""type"": ""uint256""
			}
		],
		""name"": ""withdrawFunc"",
		""outputs"": [],
		""stateMutability"": ""nonpayable"",
		""type"": ""function""
	},
	{
		""inputs"": [],
		""name"": ""checkBalance"",
		""outputs"": [
			{
				""internalType"": ""uint256"",
				""name"": """",
				""type"": ""uint256""
			}
		],
		""stateMutability"": ""view"",
		""type"": ""function""
	}
]";

    Contract contract;
    #endregion

    /// <summary>
    /// Action implemented on awake
    /// </summary>
    private void Awake()
    { 
        if(instance == null)
            instance = this;

        Actions.Credit_Wei += Credit;
        Actions.Deduct_Wei += Deduct;

        connectWallet.onConnected.AddListener(ReceiveWalletAddressAndBalance);

        var sdk = ThirdwebManager.Instance.SDK;
        contract = sdk.GetContract("0xd7059957411ad31a0453bba8de7371D0b9f096d5", abi);
    }

     void Start()
    {
      

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

    public void ReceiveWalletAddressAndBalance(string address)
    {
        walletConnectPanel.SetActive(false);

        string addressFirst = address.Substring(0, 4);
        string addressLast = address.Substring(address.Length - 4, 4);

        string addressPrint = addressFirst + "....." + addressLast;

        Actions.SetID(addressPrint);

        _currentAddress = address;

        Debug.Log("Wallet Address: " + address);
        //ContractConnect();

        RequestBalance();
    }

    public void RequestBalance() 
    {
         StartCoroutine(Network.Instance.BalanceOf(_currentAddress));
    }


    public void OnConnectError(string error) 
    { 
       walletConnectPanel.SetActive(true);
       walletConnectPanel.GetComponentInChildren<TMP_Text>().text = "Wallet not able to connect : ERROR " + error;  
    }

    #endregion


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


    public async void Credit(string wei)
    {
        TransactionResult result = await contract.Write("rewardFunc", _currentAddress, wei);
    }

    public async  void Deduct(string wei) 
    {
        TransactionResult result = await contract.Write("placebid", new TransactionRequest() { value = wei, gasLimit = "100000" });
    }

    #endregion
}
