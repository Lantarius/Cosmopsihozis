using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Action_1_0 : ActionType
{
    override public void DoAction()
    {
        UpdateControlLevel();
        DataManager.StartAction(Values);
    }
    override public string SetActionName()
    {
        ButtonText = "Increase Control Level";
        return ButtonText;
    }
}
