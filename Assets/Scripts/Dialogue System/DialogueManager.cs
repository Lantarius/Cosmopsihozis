using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogueManager : MonoBehaviour
{
    public DialogueLine dialogue;
    public DialogueBox dialogueBox;
    public bool IsDialogueActive;
    public void LoadDialogue(int forkindex)
    {
        dialogue = dialogue.Forks[forkindex];
        if(dialogue.Type == DialogueLine.DialogueType.StopDialogue)
        {
            IsDialogueActive = false;
            dialogueBox.EndDialogue();
        }
        if (dialogue.Type == DialogueLine.DialogueType.Dialogue)
        {
            dialogueBox.UpadateDialogueBox("Test", dialogue);
        }
        if (dialogue.Type == DialogueLine.DialogueType.SkillCheck)
        {
            dialogueBox.UpadateDialogueBox("Test", dialogue);
        }
    }
    public void StartDialogue(DialogueLine dialogue)
    {
        this.dialogue = dialogue;
        IsDialogueActive = true;
        dialogueBox.StartDialogue("Test", dialogue);
    }
    public void func()
    {
    }
}
