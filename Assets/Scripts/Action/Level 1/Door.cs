using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : ObjectAction
{
    private void Start()
    {
        ActionName = "Open Door";
    }
    public override void DoAction()
    {
        Location.SwitchDoorPosition();
    }
}
