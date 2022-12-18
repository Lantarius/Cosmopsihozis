using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnLightOff : Event
{
    public Location location;
    public override void StartEvent()
    {
        location = _taskManager.taskLocation;
        StopPreviousEvent();
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
        _taskManager.target = target;
        yield return new WaitForSeconds(1);
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        location.IsLightsOn = false;
        location.SwitchLights();
        StartNextEvent();
    }
}
