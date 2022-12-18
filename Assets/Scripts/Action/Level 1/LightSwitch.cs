using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSwitch : ObjectAction
{
    private void Start()
    {
        if (Location.IsLightsOn)
        {
            ActionName = "Turn off light";
        }
        else
        {
            ActionName = "Turn on light";
        }
    }
    override public void DoAction()
    {
        Location.IsLightsOn = !Location.IsLightsOn;
        Location.SwitchLights();
        UpdateControlLevel();
        Start();
        DataManager.StartAction(Values);
    }

}
