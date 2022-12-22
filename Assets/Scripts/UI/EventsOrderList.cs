using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventsOrderList : MonoBehaviour
{
    [SerializeField] GameObject EventBar;
    Vector3 PivotPosition;
    Vector3 DefaultPivotPosition;
    PlayerTaskManager _taskManager;
    private void Start()
    {
        DefaultPivotPosition = transform.position;
        PivotPosition = DefaultPivotPosition;
        _taskManager = GameObject.Find("Player").GetComponent<PlayerTaskManager>();
        StartCoroutine(GeneteateEventBars());
    }
    IEnumerator GeneteateEventBars()
    {
        for (int i = 0; i < _taskManager.CurrentTask.events.Count; i++)
        {
            EventBar.TryGetComponent(out EventIndicator eventInducator);
            eventInducator.EventID = i;
            Instantiate(EventBar, PivotPosition, transform.rotation ,gameObject.transform);
            PivotPosition.x += 250;
            yield return null;
        }
    }

}
