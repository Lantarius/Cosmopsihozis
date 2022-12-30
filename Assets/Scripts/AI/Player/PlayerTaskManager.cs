using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.AI;

public class PlayerTaskManager : TaskManager
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

        EventsOrderList.MoveEventBar();

        taskIndicator.UpdateCurrentTaskText(CurrentTask);

        StartCoroutine(CheckEvent());
    }
    IEnumerator CheckEvent()
    {
        EventList.GeneteateEventBars();
        int EventID = 0;
        while(EventID <= CurrentTask.events.Count)
        {
            yield return new WaitUntil(() => CurrentTask.CurrentEventId > EventID);
            EventID++;
            EventsOrderList.MoveEventBar();
        }
        yield return null;
    }
}
