using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event : MonoBehaviour
{
    public string EventName;
    [Header("Debug")]
    protected Vector3 targetPosition;
    protected Vector3 creaturePosition;
    [Header("Required Feilds")]
    [SerializeField] protected GameObject target;
    [HideInInspector]
    public AIController _AIController;
    public virtual void StartEvent()
    {

    }
    protected void StartNextEvent()
    {
        _AIController.NextEvent.Invoke();
    }
    protected void StopPreviousEvent()
    {
        if (_AIController.CurrentTask.CurrentEventId > 0)
        {
            _AIController.CurrentTask.events[_AIController.CurrentTask.CurrentEventId - 1].StopAllCoroutines();
        }
    }
    protected void GoTo(GameObject target)
    {
        if (target.TryGetComponent(out ObjectController objectController))
        {
            target = objectController.InteractionZone;
        }
        _AIController.agent.SetDestination(target.transform.position);
    }
    protected bool IsReach(GameObject target)
    {
        creaturePosition = _AIController.Creature.transform.position;
        creaturePosition.y = 0;
        targetPosition = target.transform.position;
        targetPosition.y = 0;

        if (creaturePosition == targetPosition)
        {
            return true;
        }
        else return false;
    }
    protected float DistanceTo(GameObject target)
    {
        return Vector3.Distance(_AIController.Creature.transform.position, target.transform.position);
    }
}
