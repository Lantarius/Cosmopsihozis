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
}