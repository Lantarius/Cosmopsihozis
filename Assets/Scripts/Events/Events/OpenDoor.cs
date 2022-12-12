using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class OpenDoor : Event
{
    [SerializeField] private GameObject Door;
    private Vector3 DoorTargetPosition;
    private Vector3 DoorStartPosition;
    public float Distance;
    public override void StartEvent()
    {
        StopPreviousEvent();
        IsEventEnd = false;
        if (target != null && !_taskManager.taskLocation.IsDoorOpen && _taskManager.taskLocation.Door != null)
        {
            StartCoroutine(ToTarget());
        }
        else
        {
            IsEventEnd = true;
        }
    }
    IEnumerator ToTarget()
    {
        _taskManager.target = target;
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        StartCoroutine(MoveDoor());
        yield return new WaitForSeconds(1);
        IsEventEnd = true;
    }
    IEnumerator MoveDoor()
    {
        _taskManager.taskLocation.IsDoorOpen = true;
        DoorStartPosition = Door.transform.position;
        DoorTargetPosition = Door.transform.position + Vector3.up * Distance;
        for (float i = 0; i < 1; i += Time.deltaTime)
        {
            Door.transform.position = Vector3.Lerp(DoorStartPosition, DoorTargetPosition, i);
            yield return null;
        }
    }
}
