using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class AudioManager : MonoBehaviour
{
    static AudioManager instance;
    public static AudioManager Instance { get { return instance; } }

    [Header("AudioData:")]
    [SerializeField] AudioData _audioData;

    AudioSource _audioSource;


    public enum SFXType { button }

    private void Awake()
    {
        if (instance == null)
            instance = this;

         _audioSource = GetComponent<AudioSource>();
    }


    public void PlayAudio(SFXType sFXType)
    {
        switch (sFXType) 
        {
            case SFXType.button:
                _audioSource.PlayOneShot(_audioData.GetClip(AudioType.SFX, "Click"), 1.0f);
                break;
        }
    }

    public void ButtonClick()
    {
        PlayAudio(SFXType.button);
    }

}
