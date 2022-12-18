using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseDoor : Event
{
    public override void StartEvent()
    {
        target = _taskManager.taskLocation.Door.GetComponent<ObjectController>().InteractionZone;
        if (target != null && _taskManager.taskLocation.IsDoorOpen && _taskManager.taskLocation.Door != null)
        {
            StartCoroutine(SwitchDoorPosition());
        }
        else
        {
            StartNextEvent();
        }
    }
    IEnumerator SwitchDoorPosition()
    {
        GoToTarget();
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        _taskManager.taskLocation.SwitchDoorPosition();
        yield return new WaitForSeconds(_taskManager.taskLocation.DoorTransferTime);
        StartNextEvent();
    }
}
