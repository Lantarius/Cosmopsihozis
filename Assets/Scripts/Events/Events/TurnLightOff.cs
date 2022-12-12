using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnLightOff : Event
{
    public Location location;
    public override void StartEvent()
    {
        StopPreviousEvent();
        IsEventEnd = false;
        if (location != null && target != null && location.IsLightsOn)
        {
            StartCoroutine(SwitchLight());
        }
        else
        {
            IsEventEnd = true;
        }
    }
    IEnumerator SwitchLight()
    {
        _taskManager.target = target;
        yield return new WaitForSeconds(1);
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        location.IsLightsOn = false;
        location.SwitchLights();
        IsEventEnd = true;
    }
}
