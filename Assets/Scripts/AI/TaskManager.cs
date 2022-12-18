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
    [Header("UI")]
    [SerializeField] TaskIndicator taskIndicator;
    [HideInInspector]
    public GameObject target;
    [HideInInspector]
    public PlayerController playerController;
    void Start()
    {
        playerController= GetComponent<PlayerController>();
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
        CurrentTask = tasks[CurrentTaskId];
        CurrentTask._taskManager = this;
        CurrentTask.StartTask();
        CurrentTaskId++;
        if (!IsItNPC)
        {
            taskIndicator.UpdateCurrentTaskText(CurrentTask);
        }
    }
}
