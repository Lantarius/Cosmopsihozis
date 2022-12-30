using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event : MonoBehaviour
{
    public string EventName;
    [Header("Debug")]
    protected Vector3 targetPosition;
    protected Vector3 playerPosition;
    [Header("Required Feilds")]
    [SerializeField] protected GameObject target;
    [HideInInspector]
    public TaskManager _taskManager;
    [HideInInspector]
    public virtual void StartEvent()
    {

    }
    protected void StartNextEvent()
    {
        _taskManager.CurrentTask.CurrentEventId++;
        _taskManager.CurrentTask.StartEvent();
    }
    protected void StopPreviousEvent()
    {
        if (_taskManager.CurrentTask.CurrentEventId > 0)
        {
            _taskManager.CurrentTask.events[_taskManager.CurrentTask.CurrentEventId - 1].StopAllCoroutines();
        }
    }
    protected void StartEventBar()
    {

    }
    protected void GoTo(GameObject target)
    {
        if (target.TryGetComponent(out ObjectController objectController))
        {
            target = objectController.InteractionZone;
        }
        _taskManager.agent.SetDestination(target.transform.position);
    }
protected bool IsReach(GameObject target)
{
    playerPosition = _taskManager.Creature.transform.position;
    playerPosition.y = 0;
    targetPosition = target.transform.position;
    targetPosition.y = 0;

    if (playerPosition == targetPosition)
    {
        return true;
    }
    else return false;
}
protected float DistanceTo(GameObject target)
{
    return Vector3.Distance(_taskManager.Creature.transform.position, target.transform.position);
}
}
