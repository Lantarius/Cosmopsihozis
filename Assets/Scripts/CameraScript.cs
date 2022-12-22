using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{
    Camera maincamera;
    [SerializeField] GameObject Player;
    private PlayerTaskManager taskManager;
    [SerializeField] Vector3 CameraPos;
    [Range (0, 100)]public float CameraHight;
    void Start()
    {
        maincamera = Camera.main;
        taskManager = Player.GetComponent<PlayerTaskManager>();
        CameraToPlayer();
        maincamera.transform.position = CameraPos;
    }
    void Update()
    {
        if (taskManager.CurrentLocation != null && taskManager.CurrentLocation.IsCameraFixed)
        {
            if (taskManager.CurrentLocation.IsLightsOn)
            {
                CameraToLocationSpot();
            }
            else
            {
                CameraToPlayer();
            }
        }
        else
        {
            CameraToPlayer();
        }
    }
    public void CameraToLocationSpot()
    {
        maincamera.transform.position = Vector3.Lerp(maincamera.transform.position, taskManager.CurrentLocation.transform.position + taskManager.CurrentLocation.CameraPosition, 1.5f * Time.deltaTime);
    }
    public void CameraToPlayer()
    {
        CameraPos = Player.transform.position + Vector3.up * CameraHight;
        maincamera.transform.position = Vector3.Lerp(maincamera.transform.position, CameraPos, 1.5f * Time.deltaTime);
    }
}
