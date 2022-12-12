using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Location : MonoBehaviour
{
    public string LocationName;
    [Header("Location lights")]
    [SerializeField] private GameObject Lights;
    public GameObject LightSwitch;
    public bool IsLightsOn;
    [Header("Location entry/exit")]
    public GameObject Door;
    public bool IsDoorOpen;
    [Header("Camera Settings")]
    public bool IsCameraFixed;
    public Vector3 CameraPosition;
    private void Awake()
    {
        SetLocationName();
        SwitchLights();
    }

    public void SwitchLights()
    {
        if (Lights != null && IsLightsOn)
        {
            Lights.gameObject.SetActive(true);
        }
        else if (Lights != null && !IsLightsOn)
        {
            Lights.gameObject.SetActive(false);
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
        other.gameObject.TryGetComponent<TaskManager>(out TaskManager taskManager);
        taskManager.CurrentLocation = this;
        taskManager.LoadLocationProperties();
    }
    void OnTriggerExit(Collider other)
    {
        other.gameObject.TryGetComponent<TaskManager>(out TaskManager taskManager);
        taskManager.ResetLocationProperties();
    }
}
