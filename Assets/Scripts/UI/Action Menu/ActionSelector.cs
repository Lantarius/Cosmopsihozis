using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class ActionSelector : MonoBehaviour
{
    public GameObject ActionMenu;
    public List<Button> ActionsButtons;
    public List<Text> ButtonsTitle;
    public List<ObjectAction> objectAction;
    void Start()
    {
        DataManager.RefreshHeroValues.AddListener(Interactable);
    }
    void Interactable(MainHeroValues Values)
    {
        if (Values.cl < MainHeroValues.LEVEL_4_EDGE)
        {
            ActionsButtons[4].interactable = true;
            for (int i = 0; i < 5; i++)
            {
                ActionsButtons[i].interactable = false;
            }
        }
        else
        {
            ActionsButtons[4].interactable = false;
            ActionsButtons[3].interactable = Values.cl < MainHeroValues.LEVEL_3_EDGE ? true : false;
            ActionsButtons[2].interactable = Values.cl < MainHeroValues.LEVEL_2_EDGE ? true : false;
            ActionsButtons[1].interactable = Values.cl < MainHeroValues.LEVEL_1_EDGE ? true : false;
        }
    }
    public void SetActionsIntoUI()
    {
        StoreButtons();
        InitializedButtonTitle();
    }
    void StoreButtons()
    {
        for (int i = 0; i < objectAction.Count; i++)
        {
            if (objectAction[i] != null)
            {
                ActionsButtons[i].gameObject.SetActive(true);
                ActionsButtons[i].onClick.AddListener(objectAction[i].DoAction);
                InitializedButtonTitle();
            }
            else
            {
                ActionsButtons[i].gameObject.SetActive(false);
            }
        }
    }
    public void CleanButtons()
    {
        //Delete Action from button events
        for (int i = 0; i < objectAction.Count; i++)
        {
            ActionsButtons[i].onClick.RemoveAllListeners();
        }
        //Refresh Text
        for (int i = 0; i < objectAction.Count; i++)
        {
            ButtonsTitle[i].text = null;
        }
    }
    void InitializedButtonTitle()
    {
        for (int i = 0; i < objectAction.Count; i++)
        {
            if (objectAction[i] != null)
            {
                ButtonsTitle[i].text = objectAction[i].ActionName;
            }
        }
    }
}