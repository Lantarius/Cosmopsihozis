using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToObject : Event
{
    [SerializeField] GameObject TargetObject;
    public override void StartEvent()
    {
        if (target != null)
        {
            TargetObject = target;
            StartCoroutine(ToObject());
        }
        else
        {
            StartNextEvent();
        }
    }
    IEnumerator ToObject()
    {
        target.TryGetComponent(out ObjectController TargetController);
        while (!IsReach(TargetObject))
        {
            if (_taskManager.CurrentLocation != TargetController.Location)
            {
                if (!TargetController.Location.IsDoorOpen)
                {
                    target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.Location.SwitchDoorPosition();
                        target = TargetObject;
                    }
                }
                if (!TargetController.Location.IsLightsOn)
                {
                    target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.Location.SwitchLights();
                        target = TargetObject;
                    }
                }
            }
            GoTo(target);
            yield return null;
        }
        StartNextEvent();
    }
}
 