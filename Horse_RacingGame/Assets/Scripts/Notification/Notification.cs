using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;

using DG.Tweening;

public class Notification : MonoBehaviour
{

    [Header("UI Settings:")]
    [SerializeField] GameObject _panel;
    [SerializeField] TMP_Text _idText;
    [SerializeField] TMP_Text _resultText;
    [SerializeField] Image _resultPanel;

    public enum Result {  Win, Loss };


    private void Awake()
    {
    
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    void SetResultView(Color color)
    {
        _resultPanel.color = color;
        _resultText.color = color;
    }


    public void ShowResult(Result result, string id, string amount)
    {
        _idText.text = "ID :"  + id;

        switch (result) 
        {
            case Result.Win:
                _resultText.text = "WIN :" + amount;

                SetResultView(Color.green);
                break;

            case Result.Loss:
                _resultText.text = "LOSS :" + amount;

                SetResultView(Color.red);
                break;
        }
    }


}
