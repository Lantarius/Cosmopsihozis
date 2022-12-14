using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInteractionZone : MonoBehaviour
{
    [SerializeField] private ObjectController IntaractibleObject;
    [SerializeField] private ActionSelector ActionSelectorMenu;
    void Awake()
    {
        IntaractibleObject = GetComponentInParent<ObjectController>();
        IntaractibleObject.InteractionZone = gameObject;
        ActionSelectorMenu = GameObject.Find("Canvas").GetComponent<ActionSelector>();
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.name == "Player")
        {
            for(int i = 0; i < IntaractibleObject.availableAction.Count; i++)
            {
                if (IntaractibleObject.availableAction[i] != null)
                {
                    ActionSelectorMenu.objectAction[i] = IntaractibleObject.availableAction[i];
                }
            }
            ActionSelectorMenu.SetActionsIntoUI();
            ActionSelectorMenu.ActionMenu.gameObject.SetActive(true);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.name == "Player")
        {
            for (int i = 0; i < IntaractibleObject.availableAction.Count; i++)
            {
                ActionSelectorMenu.objectAction[i] = null;
            }
            ActionSelectorMenu.CleanButtons();
            ActionSelectorMenu.ActionMenu.gameObject.SetActive(false);
        }
    }
}
