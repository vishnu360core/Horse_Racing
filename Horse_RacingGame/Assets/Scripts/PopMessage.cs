using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;

public class PopMessage: MonoBehaviour
{
     static PopMessage instance;
     public static PopMessage Instance { get { return instance; } }


    [Header("Message Settings:")]
    [SerializeField] TMP_Text messageText;
    [SerializeField] GameObject _panel;

    private void Awake()
    {
        if (instance == null)
          instance = this;
    }

    public void SendMessage(string message)
    {
        _panel.SetActive(true);           
        messageText.text = message;

        StartCoroutine(PopAction());
    }

    IEnumerator PopAction()
    {
        yield return new WaitForSeconds(3.0f);

        _panel.SetActive(false);

        messageText.text = "";
    }
}
