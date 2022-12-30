using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class TaskManager : MonoBehaviour
{
    [Header("Location")]
    public Location taskLocation;
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
    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        Creature = gameObject;
    }
    public void StartTask()
    {
        if (tasks.Count > 0)
        {
            NextTask();
        }
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
}