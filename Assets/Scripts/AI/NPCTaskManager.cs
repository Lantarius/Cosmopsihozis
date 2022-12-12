using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class NPCTaskManager : MonoBehaviour
{
    [Space(5)]
    [SerializeField] bool IsItNPC;
    [Space(10)]
    [Header("Location")]
    public Location taskLocation;
    [Space(10)]
    public List<Task> tasks;
    public Task CurrentTask;
    public int CurrentTaskId;
    [HideInInspector]
    public GameObject target;
    void Start()
    {
        StartNewTask();
    }
    public void StartNewTask()
    {
        //Update CurrentTask
        CurrentTask = tasks[CurrentTaskId];
        CurrentTask.StartTask();
        CurrentTaskId++;
    }

}
