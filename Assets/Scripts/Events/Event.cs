using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event : MonoBehaviour
{
    [Header("Debug")]
    [SerializeField] protected TaskManager _taskManager;
    [SerializeField] protected Task Task;
    [SerializeField] protected PlayerController _playerController;
    [SerializeField] protected Vector3 targetPosition;
    [SerializeField] protected Vector3 playerPosition;
    [Header("Required Feilds")]
    [SerializeField] protected GameObject target;
    [HideInInspector]
    public bool IsEventEnd;
    void Start()
    {
        Task = GetComponent<Task>();
        if (Task.IsItNPC)
        {
            _taskManager = Task.ControlledCreature.GetComponent<TaskManager>();
            _playerController = Task.ControlledCreature.GetComponent<PlayerController>();
        }
        else
        {
            _taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
            _playerController = GameObject.Find("Player").GetComponent<PlayerController>();
        }
    }
    public virtual void StartEvent()
    {

    }
    protected void StopPreviousEvent()
    {
        if (_taskManager.CurrentTask.CurrentEventId > 0)
        {
            _taskManager.CurrentTask.events[_taskManager.CurrentTask.CurrentEventId - 1].StopAllCoroutines();
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
