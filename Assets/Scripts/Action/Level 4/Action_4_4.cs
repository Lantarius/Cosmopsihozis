using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Action_4_4 : ObjectAction
{
    [SerializeField] private ActionSelector ActionMenu;
    override public void DoAction()
    {
        ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
        ActionMenu.gameObject.SetActive(false);
        UpdateControlLevel();
        Destroy(gameObject);
        DataManager.StartAction(Values);
    }
    private void Start()
    {
        ActionName = "Destroy Cube";
    }
}
