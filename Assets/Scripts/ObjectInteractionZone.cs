using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInteractionZone : MonoBehaviour
{
    [SerializeField] private ObjectController IntaractibleObject;
    [SerializeField] private ActionSelector ActionSelectorMenu;
    void Start()
    {
        IntaractibleObject = GetComponentInParent<ObjectController>();
        IntaractibleObject.InteractionZone = gameObject;
        ActionSelectorMenu = GameObject.Find("Canvas").GetComponent<ActionSelector>();
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.name == "Player")
        {
            IntaractibleObject.SetActionsIntoUI();
            ActionSelectorMenu.ActionMenu.gameObject.SetActive(true);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.name == "Player")
        {
            IntaractibleObject.CleanButtons();
            ActionSelectorMenu.ActionMenu.gameObject.SetActive(false);
        }
    }
}
