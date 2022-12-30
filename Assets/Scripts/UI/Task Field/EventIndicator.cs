using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class EventIndicator : MonoBehaviour
{
    [SerializeField] TMP_Text EventName;
    [SerializeField] PlayerTaskManager _taskManager;
    public int EventBarID;
    public int CurentEventID;
    int TaskID;
    private void Awake()
    {
        _taskManager = GameObject.Find("Player").GetComponent<PlayerTaskManager>();
        EventsOrderList._eventbarEvent.AddListener(EventBarBehavior);
        EventName.text = _taskManager.CurrentTask.events[EventBarID].EventName;
        TaskID = _taskManager.CurrentTaskId;
    }
    void EventBarBehavior()
    {
        if(TaskID == _taskManager.CurrentTaskId)
        {
            if (EventBarID < _taskManager.CurrentTask.CurrentEventId)
            {
                StartCoroutine(SwipeAndDestroy());
            }
            else
            {
                StartCoroutine(Swipe());
            }
        }
        else
        {
            Destroy(gameObject);
        }
    }
    IEnumerator Swipe()
    {
        for (float i = 0; i < 1; i += Time.deltaTime)
        {
            transform.position = Vector3.Lerp(transform.position, transform.position + Vector3.left * 500 * Time.deltaTime, i);
            yield return null;
        }
    }
    IEnumerator SwipeAndDestroy()
    {
        for (float i = 0; i < 1; i += Time.deltaTime)
        {
            transform.position = Vector3.Lerp(transform.position, transform.position + Vector3.left * 1000 * Time.deltaTime, i);
            yield return null;
        }
        Destroy(gameObject);
        yield return null;
    }

}
