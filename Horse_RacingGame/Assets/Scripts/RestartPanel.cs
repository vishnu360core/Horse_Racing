using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.UI;
using TMPro;
using System;

using DataCollector;

public class RestartPanel : MonoBehaviour
{

    [SerializeField] GameObject celebration;
    [SerializeField] TMP_Text infoText;


    [Space]
    [SerializeField] GameObject _panel;
    // Start is called before the first frame update
    void Start()
    {
        Actions.RestartAction += RestartAction;
        Actions.SetTheResult += SetInfo;
    }
    
    public void EnablePanel(bool enable)
    {
        _panel.SetActive(enable);
    }

    private void RestartAction()
    {
        infoText.text = "";
       // celebration.SetActive(false);
    }


    public void SetInfo(ResultStat result,string amount)
    {
        switch (result) 
        {
            case ResultStat.success:

                //celebration.SetActive(true);
                infoText.text = "You won $" + amount.ToString();
                infoText.color = Color.green;

                break;

            case ResultStat.fail:

               // celebration.SetActive(false);
                infoText.text = "You lost $" + amount.ToString();
                infoText.color = Color.red;

                break;
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
