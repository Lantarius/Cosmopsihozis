using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSwitch_2_1 : ActionType
{
    [SerializeField] private Location location;
    override public void DoAction()
    {
        location.IsLightsOn = !location.IsLightsOn;
        location.SwitchLights();
        UpdateControlLevel();
        SetActionName();
        DataManager.StartAction(Values);
    }
    override public string SetActionName()
    {
        if (location.IsLightsOn)
        {
            ButtonText = "Turn off light";
            return ButtonText;
        } else
        {
            ButtonText = "Turn on light";
            return ButtonText;
        }
    }
}
