using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenDoor : Event
{
    public Location location;
    public override void StartEvent()
    {
        if (location == null)
        {
            location = _taskManager.taskLocation;
        }
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
        target.TryGetComponent(out ObjectController TargetController);
        target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
        while (!location.IsDoorOpen)
        {
            GoTo(target);
            if (IsReach(target))
            {
                _taskManager.taskLocation.SwitchDoorPosition();
                yield return new WaitForSeconds(_taskManager.taskLocation.DoorTransferTime);
            }
            yield return null;
        }
        StartNextEvent();
    }
}
