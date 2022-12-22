using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnLightsOn : Event
{
    public Location location;
    public override void StartEvent()
    {
        if (location == null)
        {
            location = _taskManager.taskLocation;
        }
        StopPreviousEvent();
        if (location != null && target != null && !location.IsLightsOn)
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
        GoToTarget();
        yield return new WaitForSeconds(1);
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        location.IsLightsOn = true;
        location.SwitchLights();
        StartNextEvent();
    }
}
