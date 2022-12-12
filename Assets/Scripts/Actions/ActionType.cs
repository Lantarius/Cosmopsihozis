using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ActionType : MonoBehaviour
{
    public MainHeroValues Values;
    [SerializeField] protected string ButtonText = "Place holder";
    [SerializeField] protected int clAddValue;
    [SerializeField] protected float rwpAddValue;
    [SerializeField] protected KnownKnowledge Knowledge;
    [HideInInspector]
    public TaskManager taskManager;
    void Awake()
    {
        taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
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
    protected void UpdateRWP()
    {
        if (Values.rwp + rwpAddValue > 10 && Values.rwp + rwpAddValue < 0)
        {
            Values.rwp += rwpAddValue;
        }
        else if (Values.rwp + rwpAddValue <= 0)
        {
            Values.rwp = 0;
        }
        else Values.rwp = 10;
    }
    protected void AddNewKnowledge()
    {
        Values.Knowledges.Add(Knowledge);
    }
    virtual public void DoAction() { }
    virtual public string SetActionName() { return null; }

}
    