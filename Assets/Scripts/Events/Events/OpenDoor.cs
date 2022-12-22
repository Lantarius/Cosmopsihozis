using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenDoor : Event
{
    public override void StartEvent()
    {
        if (target != null && !_taskManager.taskLocation.IsDoorOpen && _taskManager.taskLocation.Door != null)
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
