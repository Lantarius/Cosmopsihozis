using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Timeline;

public class Task : MonoBehaviour
{
    [Space(5)]
    [SerializeField] public string TaskName;
    [Header("Location")]
    [Space(10)]
    public List<Event> events;
    [Header("Debug")]
    public AIController _taskManager;
    [HideInInspector]
    public int CurrentEventId;
    [HideInInspector]
    private Event CurrentEvent;

    public void StartTask()
    {
        StartEvent();
    }
    public void StartEvent()
    {
        if (CurrentEventId < events.Count)
        {
            CurrentEvent = events[CurrentEventId];
            if (CurrentEvent._taskManager == null)
            {
                CurrentEvent._taskManager = _taskManager;
            }
            CurrentEvent.StartEvent();
        }
        else
        {
            if (_taskManager.CurrentTaskId + 1 < _taskManager.tasks.Count || events.Count == 0)
            {
                _taskManager.CurrentTaskId++;
                _taskManager.NextTask();
            }
        }
    }
}