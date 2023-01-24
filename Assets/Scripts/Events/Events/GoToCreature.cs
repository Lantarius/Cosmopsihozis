using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToCreature : Event
{
    [SerializeField] GameObject TargetCreature;
    AIController TargetController;
    private void Start()
    {
        TargetController = target.GetComponent<AIController>();
        TargetCreature = target;
    }
    public override void StartEvent()
    {
        StartCoroutine(ToObject());
    }
    IEnumerator ToObject()
    {
        bool GoalIsAchieved = false;
        if (target != null && target.activeInHierarchy == true)
        {
            TargetCreature = target;
            while (!GoalIsAchieved)
            {
                target = TargetCreature;
                if (!TargetController.CurrentLocation.IsDoorOpen)
                {
                    target = TargetController.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.CurrentLocation.SwitchDoorPosition();
                        target = TargetCreature;
                    }
                }
                else if (!TargetController.CurrentLocation.IsLightsOn)
                {
                    target = TargetController.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        TargetController.CurrentLocation.SwitchLights();
                        target = TargetCreature;
                    }
                }
                if (_AIController.CurrentLocation == TargetController.CurrentLocation && DistanceTo(TargetCreature) < 5)
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
