using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ObjectAction : MonoBehaviour
{
    [HideInInspector]
    public MainHeroValues Values;
    public string ActionName;
    [HideInInspector]
    protected int clAddValue;
    protected Location Location;
    void Awake()
    {
        Location = GetComponentInParent<Location>();
    }
    protected void UpdateControlLevel()
    {
        if (Values.cl + clAddValue >= 0 && Values.cl + clAddValue <= 100)
        {
            Values.cl += clAddValue;
        }
        else if (Values.cl + clAddValue <= 0)
        {
            Values.cl = 0;
        }
        else
        {
            Values.cl = 100;
        }
    }
    virtual public void DoAction() { }

}
    