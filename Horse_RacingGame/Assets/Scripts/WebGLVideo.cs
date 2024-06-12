using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.Video;
using System.IO;

public class WebGLVideo : MonoBehaviour
{
    [SerializeField] VideoPlayer player;
    [SerializeField] string videoFile;

    private void OnEnable()
    {
        string videoPath = "https://drive.google.com/file/d/1TldiP7NVG9zwUwCYBgpLv5iHfkOW_KBR/view?usp=drive_link";

        Debug.Log("Path >>>" +  videoPath);

        player.url = videoPath;

        player.Prepare();


        player.Play();

        Debug.Log("Player is >>>>>>>>>>>>>>>>>>>>>>>>>>" + player.isPlaying);
    }
}
