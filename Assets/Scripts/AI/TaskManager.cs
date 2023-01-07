using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;

public class TaskManager : MonoBehaviour
{
    [Header("Location")]
    public Location CurrentLocation;
    [Space(10)]
    public List<Task> tasks;
    [HideInInspector]
    public Task CurrentTask;
    [HideInInspector]
    public int CurrentTaskId;
    [HideInInspector]
    public GameObject Creature;
    [HideInInspector]
    public NavMeshAgent agent;
    [HideInInspector]
    public UnityEvent NextEvent;
    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        Creature = gameObject;
        NextEvent.AddListener(StartNextEvent);
        CurrentTaskId = 0;
    }
    public void StartTask()
    {
        StartCoroutine(StartNextTask());
    }    
    public virtual void NextTask()
    {
        CurrentTask = tasks[CurrentTaskId];
        CurrentTask._taskManager = this;
        CurrentTask.StartTask();
        CurrentTaskId++;
    }

    public void ResetLocationProperties()
    {
        CurrentLocation = null;
    }
    public void StartNextEvent()
    {
        CurrentTask.CurrentEventId++;
        CurrentTask.StartEvent();
    }
    IEnumerator StartNextTask()
    {
        yield return null;
        if (tasks.Count > 0)
        {
            NextTask();
        }
    }
}