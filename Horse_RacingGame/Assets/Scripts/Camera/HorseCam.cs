using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Cinemachine;

[RequireComponent(typeof(CinemachineVirtualCamera))]
public class HorseCam : MonoBehaviour
{
    [SerializeField] Horse.Hero _hero;
    public Horse.Hero Hero => _hero;


    public enum View { front , rear };

    [Space]
    [SerializeField] View _view;
    public View GetView => _view;


    CinemachineVirtualCamera camera;
    public CinemachineVirtualCamera Camera => camera;


    private void OnEnable()
    {
        camera = GetComponent<CinemachineVirtualCamera>();
    }

}
