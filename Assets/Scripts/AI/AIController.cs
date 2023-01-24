using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Events;

public abstract class AIController : MonoBehaviour
{
    [HideInInspector]
    public GameObject Creature;
    [Header("Location")]
    public Location CurrentLocation;
    [Space(10)]
    public List<Task> tasks;
    [HideInInspector]
    public Task CurrentTask;
    [HideInInspector]
    public int CurrentTaskId;
    [HideInInspector]
    public NavMeshAgent agent;
    [HideInInspector]
    public UnityEvent NextEvent;
    [HideInInspector]
    public UnityEvent NextTask;
    private void Awake()
    {
        NextTask.AddListener(StartNextTask);
        NextEvent.AddListener(StartNextEvent);
        agent = GetComponent<NavMeshAgent>();
        Creature = gameObject;
        CurrentTask = tasks[CurrentTaskId];
        StartCoroutine(LoadTasks());
    }
    virtual public void StartNextTask()
    {
        CurrentTask = tasks[CurrentTaskId];
        CurrentTask._taskManager = this;
        CurrentTask.StartTask();
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
    public void FreezeCreature()
    {
        agent.isStopped = true;
    }
    public void UnfreezeCreature()
    {
        agent.isStopped = false;
    }
    IEnumerator LoadTasks()
    {
        yield return null;
        NextTask.Invoke();
    }
}