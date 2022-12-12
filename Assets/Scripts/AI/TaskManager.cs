using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TaskManager : MonoBehaviour
{
    [Space(5)]
    [SerializeField] bool IsItNPC;
    [Space(10)]
    [Header("Location")]
    public Location CurrentLocation;
    public Location taskLocation;
    [Space(10)]
    public List<Task> tasks;
    public Task CurrentTask;
    public int CurrentTaskId;
    [HideInInspector]
    public GameObject target;
    [Header("UI")]
    [SerializeField] TaskIndicator taskIndicator;
    void Start()
    {
        if (tasks.Count > 0)
        {
            StartNewTask();
        }
    }
    public void LoadLocationProperties() 
    {

    }
    public void ResetLocationProperties()
    {
        CurrentLocation = null;
    }
    public void StartNewTask()
    {
        //Update CurrentTask
        CurrentTask = tasks[CurrentTaskId];
        CurrentTask.StartTask();
        CurrentTaskId++;
        if (!IsItNPC)
        {
            taskIndicator.UpdateCurrentTaskText(CurrentTask);
        }
    }
}
