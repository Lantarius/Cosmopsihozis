using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ObjectController : MonoBehaviour
{
    [SerializeField] private ActionSelector ActionSelector;
    public List<ObjectAction> availableAction;
    public GameObject InteractionZone;
    public Location Location;
    void Awake()
    {
        Location = GetComponentInParent<Location>();
    }
}