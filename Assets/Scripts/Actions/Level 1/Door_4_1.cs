using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door_4_1 : ActionType
{
    private Vector3 targetPosition;
    private Vector3 startPosition;
    public float Distance;
    [SerializeField] Location Location;
    void Awake()
    {
        startPosition = transform.position;
        targetPosition = transform.position + Vector3.up * Distance;
        Location = GetComponentInParent<Location>();
    }
    public override void DoAction()
    {
        StartCoroutine(MoveDoor());
    }
    override public string SetActionName()
    {
        ButtonText = "Open Door";
        return ButtonText;
    }
    IEnumerator MoveDoor()
    {
        if (Location.Door != null)
        {
            Location.IsDoorOpen = true;
        }
        for (float i = 0; i < 1; i += Time.deltaTime)
        {
            transform.position = Vector3.Lerp(startPosition, targetPosition, i);
            yield return null;
        }
    }
}
