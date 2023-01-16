using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Location : MonoBehaviour
{
    public string LocationName;
    [Header("Location lights")]
    [SerializeField] private GameObject Lights;
    public GameObject ControlPanel;
    public bool IsLightsOn;
    [Header("Location entry/exit")]
    public GameObject Door;
    private Vector3 targetPosition;
    private Vector3 startPosition;
    public float DoorTransferDistance;
    public float DoorTransferTime;
    public bool IsDoorOpen;
    [Header("Camera Settings")]
    public bool IsCameraFixed;
    public Vector3 CameraPosition;
    private void Awake()
    {
        SetLocationName();
        if (Door == null && Lights == null)
        {
            IsLightsOn = true; IsDoorOpen = true;
        }
        else
        {
            startPosition = Door.transform.position;
            targetPosition = startPosition + Vector3.up * DoorTransferDistance;
            CallLight();
            CallDoor();
        }
    }

    public void SwitchLights()
    {
        IsLightsOn = !IsLightsOn;
        CallLight();
    }
    void CallLight()
    {
        if (Lights != null && IsLightsOn)
        {
            Lights.gameObject.SetActive(true);
        }
        else
        {
            Lights.gameObject.SetActive(false);
        }
    }
    public void SwitchDoorPosition()
    {
        IsDoorOpen = !IsDoorOpen;
        CallDoor();
    }
    void CallDoor()
    {
        if (Door != null)
        {
            StopAllCoroutines();
            StartCoroutine(DoorTransfer());
        }
    }
    protected void SetLocationName()
    {
        if (LocationName == null || LocationName == "")
        {
            LocationName = "Place Holder";
            Debug.LogWarning(gameObject.name + " Location name is missing, enter name in Inspector");
        }
    }
    public virtual void CustomProperties() { }
    void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.TryGetComponent<AIController>(out AIController taskManager))
        {
            taskManager.CurrentLocation = this;
        }
    }

    IEnumerator DoorTransfer()
    {
        if (IsDoorOpen)
        {
            for (float i = 0; i < DoorTransferTime; i += Time.deltaTime)
            {
                Door.transform.position = Vector3.Lerp(Door.transform.position, targetPosition, i);
                yield return null;
            }
        }
        else
        {
            for (float i = 0; i < DoorTransferTime; i += Time.deltaTime)
            {
                Door.transform.position = Vector3.Lerp(Door.transform.position, startPosition, i);
                yield return null;
            }
        }
    }
}