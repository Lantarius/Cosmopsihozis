using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public MainHeroValues Values;
    [SerializeField]private Text text;
    void Start()
    {
        DataManager.StartAction(Values);
    }
    public void UpdateAll()
    {
        DataManager.StartAction(Values);
    }
}
