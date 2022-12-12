using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectTriggerEvent : MonoBehaviour
{
    [SerializeField] private ObjectActions Object;
    [SerializeField] private ActionSelector ActionMenu;
    void Start()
    {
        Object = GetComponentInParent<ObjectActions>();
        ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.name == "Player")
        {
            Object.SetActionsIntoUI();
            ActionMenu.ActionMenu.gameObject.SetActive(true);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.name == "Player")
        {
            Object.CleanButtons();
            ActionMenu.ActionMenu.gameObject.SetActive(false);
        }
    }
}
