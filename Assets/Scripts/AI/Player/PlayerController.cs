using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.AI;

public class PlayerController : AIController
{
    [Header("UI")]
    [SerializeField] TaskIndicator taskIndicator;
    [SerializeField] EventsOrderList EventList;
    [HideInInspector]
    private Camera mainCamera;

    void Start()
    {
        mainCamera = Camera.main;
        StartTask();
    }
    public override void NextTask()
    {
        base.NextTask();

        EventList.GeneteateEventBars();


        taskIndicator.UpdateCurrentTaskText(CurrentTask);
    }
}
