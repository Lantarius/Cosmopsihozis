using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyObject : ObjectAction
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
