using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PlayerController : MonoBehaviour
{
    public bool IsPlayerHaveControl;
    public GameObject Player;
    private TaskManager _taskManager;
    private Camera mainCamera;
    public NavMeshAgent agent;
    void Start()
    {
        _taskManager = GetComponent<TaskManager>();
        agent = GetComponent<NavMeshAgent>();
        Player = gameObject;
        mainCamera = Camera.main;
    }
    void Update()
    {
        if (IsPlayerHaveControl)
        {
            if (Input.GetMouseButton(0))
            {
                RaycastHit hit;
                //Player under control
                if (Physics.Raycast(mainCamera.ScreenPointToRay(Input.mousePosition), out hit))
                {
                    agent.SetDestination(hit.point);
                }
            }
        }
        else if (_taskManager.target != null)
        {   //Player not under control
           agent.SetDestination(_taskManager.target.transform.position);
        }
    }
}
