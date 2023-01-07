using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToCreature : Event
{
    [SerializeField] GameObject TargetCreature;
    TaskManager TargetTaskManager;
    private void Start()
    {
        TargetTaskManager = target.GetComponent<TaskManager>();
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
            TargetCreature = target;
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
        else
        {
            StartNextEvent();
        }

    }
}
