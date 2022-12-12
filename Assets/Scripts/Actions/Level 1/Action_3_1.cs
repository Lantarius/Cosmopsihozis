using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Action_3_1 : ActionType
{
    override public void DoAction()
    {
        UpdateControlLevel();
        DataManager.StartAction(Values);
    }
    override public string SetActionName()
    {
        ButtonText = "Touch Cube";
        return ButtonText;
    }
}
