using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ObjectController : MonoBehaviour
{
    [SerializeField] private ActionSelector ActionSelector;
    public ObjectAction[] objectAction;
    public GameObject InteractionZone;
    public Location Location;
    void Awake()
    {
        ActionSelector = GameObject.Find("Canvas").GetComponent<ActionSelector>();
        Location = GetComponentInParent<Location>();
    }
    public void SetActionsIntoUI()
    {
        StoreButtons();
        InitializedButtonTitle();
    }
    void StoreButtons()
    {
        for (int i = 0; i < objectAction.Length; i++) 
        {
            if (objectAction[i] != null)
            {
                Debug.Log(objectAction[i].name);
                ActionSelector.ActionsButtons[i].gameObject.SetActive(true);
                ActionSelector.ActionsButtons[i].onClick.AddListener(objectAction[i].DoAction);
                InitializedButtonTitle();
            }
            else
            {
                ActionSelector.ActionsButtons[i].gameObject.SetActive(false);
            }
        }
    }
    public void CleanButtons()
    {
        //Delete Action from button events
        for (int i = 0; i < objectAction.Length; i++)
        {
            ActionSelector.ActionsButtons[i].onClick.RemoveAllListeners();
        }
        //Refresh Text
        for (int i = 0; i < objectAction.Length; i++)
        {
            ActionSelector.ButtonsTitle[i].text = null;
        }
    }
    void InitializedButtonTitle()
    {
        for (int i = 0; i < objectAction.Length; i++)
        {
            if (objectAction[i] != null)
            {
                ActionSelector.ButtonsTitle[i].text = objectAction[i].ActionName;
            }
        }
    }
}
