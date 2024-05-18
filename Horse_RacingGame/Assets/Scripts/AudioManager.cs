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


    public enum SFXType { button,pop}

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

            case SFXType.pop:
                _audioSource.PlayOneShot(_audioData.GetClip(AudioType.SFX, "Pop"), 1.0f);
                break;
        }
    }

    public void PlayHorseRace(bool enable)
    {
        _audioSource.loop = enable;

        if (!enable)
        {
            _audioSource.Stop();
            return;
        }

        _audioSource.clip = _audioData.GetClip(AudioType.CLIP, "Horse_Race");
        _audioSource.Play();
    }

    public void ButtonClick()
    {
        PlayAudio(SFXType.button);
    }

}
