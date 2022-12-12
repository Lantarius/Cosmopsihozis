using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TestUIScript : MonoBehaviour
{
    public Text text;
    void Start()
    {
        DataManager.RefreshHeroValues.AddListener(UpdateText);
    }
    public void UpdateText(MainHeroValues ControlLevel)
    {
        text.text = ControlLevel.cl.ToString();
    }
}
