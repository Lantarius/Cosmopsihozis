using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Action_2_0 : ActionType
{
    override public void DoAction()
    {     
        UpdateControlLevel();
        DataManager.StartAction(Values);
    }
    override public string SetActionName()
    {
        ButtonText = "Reduce Control Level";
        return ButtonText;
    }
}