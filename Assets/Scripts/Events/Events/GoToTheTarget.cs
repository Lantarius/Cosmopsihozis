using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToTheTarget : Event
{
    public override void StartEvent()
    {
        StopPreviousEvent();
        if (target != null)
        {
            StartCoroutine(StartWalkToTarget());
        }
        else
        {
            StartNextEvent();
        }
    }
    IEnumerator StartWalkToTarget()
    {
        GoToTarget();
        yield return new WaitForSeconds(1);
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        StartNextEvent();
    }
}
