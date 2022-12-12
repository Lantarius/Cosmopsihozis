using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Timeline;

public class Task : MonoBehaviour
{
    [Space(5)]
    [SerializeField] public string Name;
    [Header ("For NPC")]
    [SerializeField] public bool IsItNPC;
    public GameObject ControlledCreature;
    [Header("Location")]
    public Location TaskLocation;
    [Space(10)]
    public List<Event> events;
    [Header("Debug")]
    public TaskManager _taskManager;
    public PlayerController _playerController;
    [HideInInspector]
    public int CurrentEventId;
    [HideInInspector]
    [SerializeField] private Event CurrentEvent;
    void Awake()
    {
        if (!IsItNPC)
        {
            _taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
            _playerController = GameObject.Find("Player").GetComponent<PlayerController>();
        }
        else
        {
            _taskManager = ControlledCreature.GetComponent<TaskManager>();
            _playerController = ControlledCreature.GetComponent<PlayerController>();
        }
    }
    public void StartTask()
    {
        _taskManager.taskLocation = TaskLocation;
        StartCoroutine(EventOrderList());
    }
    IEnumerator EventOrderList()
    {
        yield return null;
        while (true)
        {
            StartNextEvent();
            yield return new WaitUntil(() => CurrentEvent.IsEventEnd == true);
        }
    }
    private void StartNextEvent()
    {
        if (CurrentEventId < events.Count)
        {
            CurrentEvent = events[CurrentEventId];
            CurrentEvent.StartEvent();
            CurrentEventId++;
            Debug.Log("Starting Event " + CurrentEventId);
        }
        else
        {
            if (_taskManager.CurrentTaskId < _taskManager.tasks.Count)
            {
                StopAllCoroutines();
                _taskManager.StartNewTask();
                Debug.Log("This is last event, starting next task");
            }
            else
            {
                StopAllCoroutines();
                Debug.Log("This is the end!");
            }
        }

    }
}