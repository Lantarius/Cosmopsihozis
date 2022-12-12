using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ActionSelector : MonoBehaviour
{
    public GameObject ActionMenu;
    public Button Level0Button;
    public Button Level1Button;
    public Button Level2Button;
    public Button Level3Button;
    public Button Level4Button;
    public Text Level0Text;
    public Text Level1Text;
    public Text Level2Text;
    public Text Level3Text;
    public Text Level4Text;
    void Start()
    {
        DataManager.RefreshHeroValues.AddListener(Interactable);
    }
    void Interactable(MainHeroValues Values)
    {
        if (Values.cl < MainHeroValues.LEVEL_4_EDGE)
        {
            Level4Button.interactable = true;
            Level3Button.interactable = false;
            Level2Button.interactable = false;
            Level1Button.interactable = false;
        }
        else
        {
            Level4Button.interactable = false;
            if (Values.cl < MainHeroValues.LEVEL_3_EDGE)
            {
                Level3Button.interactable = true;
            }
            else
            {
                Level3Button.interactable = false;
            }
            if (Values.cl < MainHeroValues.LEVEL_2_EDGE)
            {
                Level2Button.interactable = true;
            }
            else
            {
                Level2Button.interactable = false;
            }
            if (Values.cl < MainHeroValues.LEVEL_1_EDGE)
            {
                Level1Button.interactable = true;
            }
            else
            {
                Level1Button.interactable = false;
            }
        }
    }
}