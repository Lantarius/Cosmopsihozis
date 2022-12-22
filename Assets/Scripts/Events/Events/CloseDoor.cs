using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseDoor : Event
{
    public override void StartEvent()
    {
        if (target != null && _taskManager.taskLocation.Door != null)
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
        while(_taskManager.taskLocation.IsDoorOpen)
        {
            GoToTarget();
            yield return new WaitUntil(() => IsPlayerReachDestanation());
            _taskManager.taskLocation.SwitchDoorPosition();
            yield return new WaitForSeconds(_taskManager.taskLocation.DoorTransferTime);
        }
        StartNextEvent();
    }
}
