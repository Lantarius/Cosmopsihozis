using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoToTheTarget : Event
{
    public override void StartEvent()
    {
        StopPreviousEvent();
        IsEventEnd = false;
        if (target != null)
        {
            StartCoroutine(StartWalkToTarget());
        }
        else
        {
            IsEventEnd = true;
        }
    }
    IEnumerator StartWalkToTarget()
    {
        _taskManager.target = target;
        yield return new WaitForSeconds(1);
        yield return new WaitUntil(() => IsPlayerReachDestanation());
        IsEventEnd = true;
    }
}
