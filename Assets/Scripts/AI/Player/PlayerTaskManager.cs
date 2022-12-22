using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.AI;

public class PlayerTaskManager : TaskManager
{
    [Header("UI")]
    [SerializeField] TaskIndicator taskIndicator;
    public Location CurrentLocation;
    [HideInInspector]
    private Camera mainCamera;

    void Start()
    {
        mainCamera = Camera.main;
        StartTask();
    }
    public void ResetLocationProperties()
    {
        CurrentLocation = null;
    }
    public override void NextTask()
    {
        base.NextTask();
        taskIndicator.UpdateCurrentTaskText(CurrentTask);
    }
}
