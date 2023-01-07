using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class EventsOrderList : MonoBehaviour
{
    [SerializeField] GameObject EventBar;
    Vector3 PivotPosition;
    Vector3 DefaultPivotPosition;
    PlayerTaskManager _taskManager;
    public static UnityEvent _eventbarEvent = new UnityEvent();
    private void Awake()
    {
        DefaultPivotPosition = transform.position;
        _taskManager = GameObject.Find("Player").GetComponent<PlayerTaskManager>();
    }
    public void GeneteateEventBars()
    {
        PivotPosition = DefaultPivotPosition;
        for (int i = 0; i < _taskManager.CurrentTask.events.Count; i++)
        {
            EventBar.TryGetComponent(out EventIndicator eventInducator);
            eventInducator.EventBarID = i;
            Instantiate(EventBar, PivotPosition, transform.rotation, gameObject.transform);
            PivotPosition.x += 250;
        }
    }
    public static void MoveEventBar()
    {
        _eventbarEvent.Invoke();
    }

}
