using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class EventIndicator : MonoBehaviour
{
    [SerializeField] TMP_Text EventName;
    [SerializeField] TaskManager _taskManager;
    public int EventID;
    public int CurentEventID;
    private void Awake()
    {
        _taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
        EventName.text = _taskManager.CurrentTask.events[EventID].EventName;
        StartCoroutine(ShowEventBar());
    }
    IEnumerator ShowEventBar()
    {
        yield return null;
    }
}
