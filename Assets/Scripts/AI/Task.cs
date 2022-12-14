using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;

public class Task : MonoBehaviour
{
    [Space(5)]
    [SerializeField] public string TaskName;
    [Header("Location")]
    public Location TaskLocation;
    [Space(10)]
    public List<Event> events;
    [Header("Debug")]
    public TaskManager _taskManager;
    [HideInInspector]
    public int CurrentEventId;
    [HideInInspector]
    private Event CurrentEvent;

    public void StartTask()
    {
        _taskManager.taskLocation = TaskLocation;
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
            if (_taskManager.CurrentTaskId < _taskManager.tasks.Count)
            {
                _taskManager.NextTask();
            }
        }
    }
}