using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Action_4_4 : ActionType
{
    [SerializeField] private ActionSelector ActionMenu;
    override public void DoAction()
    {
        ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
        ActionMenu.ActionMenu.gameObject.SetActive(false);
        UpdateControlLevel();
        Destroy(gameObject);
        DataManager.StartAction(Values);
    }
    override public string SetActionName()
    {
        ButtonText = "KILL THIS FUCKING CUBE";
        return ButtonText;
    }
}
