
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface CameraColliderInterface
{
    public void CameraSwitch(int index);
}

public class CameraCollider : MonoBehaviour
{
    [SerializeField] int cameraIndex;

    public CameraColliderInterface calback;


    private void OnTriggerEnter(Collider other)
    {
       if(other.CompareTag("CameraTarget"))
        {
            Debug.LogWarning("Index >>>" + cameraIndex);
            calback.CameraSwitch(cameraIndex);
        }
    }
}
