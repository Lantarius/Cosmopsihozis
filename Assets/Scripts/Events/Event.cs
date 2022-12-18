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
    public PlayerController _playerController;
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
    protected void GoToTarget()
    {
        if (target != null)
        {
            _taskManager.target = target;
        }
    }
    protected bool IsPlayerReachDestanation()
    {
        playerPosition = _playerController.Player.transform.position;
        playerPosition.y = 0;
        targetPosition = target.transform.position;
        targetPosition.y = 0;

        if (playerPosition == targetPosition)
        {
            return true;
        }
        else return false;
    }
}
