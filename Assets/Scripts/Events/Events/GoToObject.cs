using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToObject : Event
{
    [SerializeField] GameObject TargetObject;
    ObjectController TargetController;
    private void Start()
    {
        TargetController = target.GetComponent<ObjectController>();
    }
    public override void StartEvent()
    {
        StartCoroutine(ToObject());
    }
    IEnumerator ToObject()
    {
        bool GoalIsAchieved = false;
        if (target != null)
        {
            TargetObject = target;
            while (!GoalIsAchieved)
            {
                target = TargetObject;
                if (!TargetController.Location.IsDoorOpen)
                {
                    target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.Location.SwitchDoorPosition();
                        target = TargetObject;
                    }
                }
                else if (!TargetController.Location.IsLightsOn)
                {
                    target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.Location.SwitchLights();
                        target = TargetObject;
                    }
                }
                if (TargetController.Location == _taskManager.CurrentLocation && IsReach(TargetObject))
                {
                    GoalIsAchieved = true;
                }
                GoTo(target);
                yield return null;
            }
            StartNextEvent();
        }
        else
        {
            StartNextEvent();
        }

    }
}
