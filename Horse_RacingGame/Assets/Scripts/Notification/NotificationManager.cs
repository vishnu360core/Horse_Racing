using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotificationManager : MonoBehaviour
{
    static NotificationManager instance;
    public static NotificationManager Instance { get { return instance; } }

    [Header("Notification Settings")]
    [SerializeField] GameObject _notificationPrefab;
    [SerializeField] Transform _viewParent;


    // Start is called before the first frame update
    void Start()
    {
        if(instance == null)
            instance = this;
    }


    /// <summary>
    /// Setting notification 
    /// </summary>
    /// <param name="result"></param>
    /// <param name="amount"></param>
    /// <param name="id"></param>
    public void SetNotication(Notification.Result result , string amount ,string id)
    {
        AudioManager.Instance.PlayAudio(AudioManager.SFXType.pop);

        GameObject go = Instantiate(_notificationPrefab, _viewParent);

        Notification notification = go.GetComponent<Notification>();
        notification.ShowResult(result, id, amount);

        Destroy(go,4.0f);
    }

    
}
