using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class StartDialogue : Event
{
    GameObject TargetCreature;
    AIController _TargetController;
    DialogueManager dialogueManager;
    [SerializeField] DialogueLine dialogue;
    private void Start()
    {
        dialogueManager = GameObject.Find("Dialogue Manager").GetComponent<DialogueManager>();
        _TargetController = target.GetComponent<AIController>();
        TargetCreature = target;
    }
    public override void StartEvent()
    {
        StartCoroutine(ToObject());
    }
    IEnumerator ToObject()
    {
        bool GoalIsAchieved = false;
        if (target != null && target.activeInHierarchy == true)
        {
            TargetCreature = target;
            while (!GoalIsAchieved)
            {
                target = TargetCreature;
                if (!_TargetController.CurrentLocation.IsDoorOpen)
                {
                    target = _TargetController.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        _TargetController.CurrentLocation.SwitchDoorPosition();
                        target = TargetCreature;
                    }
                }
                else if (!_TargetController.CurrentLocation.IsLightsOn)
                {
                    target = _TargetController.CurrentLocation.ControlPanel.GetComponent<ObjectController>().InteractionZone;
                    if (IsReach(target))
                    {
                        _TargetController.CurrentLocation.SwitchLights();
                        target = TargetCreature;
                    }
                }
                if (_AIController.CurrentLocation == _TargetController.CurrentLocation && DistanceTo(TargetCreature) < 5)
                {
                    GoalIsAchieved = true;
                }
                GoTo(target);
                yield return null;
            }
            dialogueManager.StartDialogue(dialogue);
            while (dialogueManager.IsDialogueActive)
            {
                _AIController.FreezeCreature();
                _TargetController.FreezeCreature();
                yield return null;
            }
            _AIController.UnfreezeCreature();
            _TargetController.UnfreezeCreature();
            StartNextEvent();
        }
        else
        {
            StartNextEvent();
        }
    }
}
