using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToCreature : Event
{
    [SerializeField] GameObject TargetCreature;
    public override void StartEvent()
    {
        if (target != null)
        {
            TargetCreature = target;
            StartCoroutine(ToObject());
        }
        else
        {
            StartNextEvent();
        }
    }
    IEnumerator ToObject()
    {
        target.TryGetComponent(out TaskManager TargetTaskManager);
        bool GoalIsAchieved = false;
        while (!GoalIsAchieved)
        {
            target = TargetCreature;
            if (!TargetTaskManager.CurrentLocation.IsDoorOpen)
            {
                target = TargetTaskManager.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                if (IsReach(target))
                {
                    TargetTaskManager.CurrentLocation.SwitchDoorPosition();
                    target = TargetCreature;
                }
            }
            else if (!TargetTaskManager.CurrentLocation.IsLightsOn)
            {
                target = TargetTaskManager.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                if (IsReach(target))
                {
                    TargetTaskManager.CurrentLocation.SwitchLights();
                    target = TargetCreature;
                }
            }
            if (_taskManager.CurrentLocation == TargetTaskManager.CurrentLocation && DistanceTo(TargetCreature) < 5)
            {
                GoalIsAchieved = true;
            }
            GoTo(target);
            yield return null;
        }
        StartNextEvent();
    }
}
