using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;

public class Loader : MonoBehaviour
{
    [SerializeField] TMP_Text loadText;

    public void SetLoadMessage(string message)
    {
        loadText.text = message;
    }
}
