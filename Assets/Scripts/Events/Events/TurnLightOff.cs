using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnLightOff : Event
{
    public Location location;
    public override void StartEvent()
    {
        if (location != null && target != null && location.IsLightsOn)
        {
            StartCoroutine(SwitchLight());
        }
        else
        {
            StartNextEvent();
        }
    }
    IEnumerator SwitchLight()
    {
        target.TryGetComponent(out ObjectController TargetController);
        target = TargetController.Location.ControlPanel.GetComponent<ObjectController>().InteractionZone;
        while (location.IsLightsOn)
        {
            GoTo(target);
            if (IsReach(target))
            {
                location.SwitchLights();
            }
            yield return null;
        }
        StartNextEvent();
    }
}
