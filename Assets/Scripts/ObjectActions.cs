using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ObjectActions : MonoBehaviour
{
    [SerializeField] private ActionSelector ActionMenu;
    [SerializeField] private bool IsNeededAdditonAction;
    [SerializeField] private ActionType ActionLevel0;
    [SerializeField] private ActionType ActionLevel1;
    [SerializeField] private ActionType ActionLevel2;
    [SerializeField] private ActionType ActionLevel3;
    [SerializeField] private ActionType ActionLevel4;
    void Awake()
    {
        ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
    }
    public void SetActionsIntoUI()
    {
        StoreButtons();
        InitializedTriggerText();
    }
    void StoreButtons()
    {
        //Store Action into button events
        if (ActionLevel4 != null)
        {
            ActionMenu.Level4Button.gameObject.SetActive(true);
            ActionMenu.Level4Button.onClick.AddListener(ActionLevel4.DoAction);
            ActionMenu.Level4Button.onClick.AddListener(InitializedTriggerText);
        } 
        else ActionMenu.Level4Button.gameObject.SetActive(false);
        if (ActionLevel3 != null)
        {
            ActionMenu.Level3Button.gameObject.SetActive(true);
            ActionMenu.Level3Button.onClick.AddListener(ActionLevel3.DoAction);
            ActionMenu.Level3Button.onClick.AddListener(InitializedTriggerText);
        }
        else ActionMenu.Level3Button.gameObject.SetActive(false);
        if (ActionLevel2 != null)
        {
            ActionMenu.Level2Button.gameObject.SetActive(true);
            ActionMenu.Level2Button.onClick.AddListener(ActionLevel2.DoAction);
            ActionMenu.Level2Button.onClick.AddListener(InitializedTriggerText);
        }
        else ActionMenu.Level2Button.gameObject.SetActive(false);
        if (ActionLevel1 != null)
        {
            ActionMenu.Level1Button.gameObject.SetActive(true);
            ActionMenu.Level1Button.onClick.AddListener(ActionLevel1.DoAction);
            ActionMenu.Level1Button.onClick.AddListener(InitializedTriggerText);
        }
        else ActionMenu.Level1Button.gameObject.SetActive(false);
        if (IsNeededAdditonAction && ActionLevel0 != null)
        {
            ActionMenu.Level0Button.gameObject.SetActive(true);
            ActionMenu.Level0Button.onClick.AddListener(ActionLevel0.DoAction);
            ActionMenu.Level0Button.onClick.AddListener(InitializedTriggerText);
        }
        else ActionMenu.Level0Button.gameObject.SetActive(false);
    }
    public void CleanButtons()
    {
        //Delete Action from button events
        ActionMenu.Level4Button.onClick.RemoveAllListeners();
        ActionMenu.Level3Button.onClick.RemoveAllListeners();
        ActionMenu.Level2Button.onClick.RemoveAllListeners();
        ActionMenu.Level1Button.onClick.RemoveAllListeners();
        ActionMenu.Level0Button.onClick.RemoveAllListeners();
        //Refresh Text
        ActionMenu.Level4Text.text = null;
        ActionMenu.Level3Text.text = null;
        ActionMenu.Level2Text.text = null;
        ActionMenu.Level1Text.text = null;
        ActionMenu.Level0Text.text = null;
    }
    void InitializedTriggerText()
    {
        if (ActionLevel4 != null)
        {
            ActionMenu.Level4Text.text = ActionLevel4.SetActionName();
        }
        if (ActionLevel3 != null)
        {
            ActionMenu.Level3Text.text = ActionLevel3.SetActionName();
        }
        if (ActionLevel2 != null)
        {
            ActionMenu.Level2Text.text = ActionLevel2.SetActionName();
        }
        if (ActionLevel1 != null)
        {
            ActionMenu.Level1Text.text = ActionLevel1.SetActionName();
        }
        if (IsNeededAdditonAction && ActionLevel0 != null)
        {
            ActionMenu.Level0Text.text = ActionLevel0.SetActionName();
        }
    }
}
