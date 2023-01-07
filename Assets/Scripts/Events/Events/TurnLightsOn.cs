using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnLightsOn : Event
{
    ObjectController TargetController;
    private void Start()
    {
        TargetController = target.GetComponent<ObjectController>();
    }
    public override void StartEvent()
    {
        StartCoroutine(SwitchLight());
    }
    IEnumerator SwitchLight()
    {
        target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
        if (TargetController.Location != null && target != null && !TargetController.Location.IsLightsOn)
        {
            while (!TargetController.Location.IsLightsOn)
            {
                GoTo(target);
                if (IsReach(target))
                {
                    TargetController.Location.SwitchLights();
                }
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
