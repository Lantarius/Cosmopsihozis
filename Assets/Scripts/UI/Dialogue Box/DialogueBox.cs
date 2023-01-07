using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class DialogueBox : MonoBehaviour
{
    TMP_Text CharacterName;
    TMP_Text DialogueText;
    public void UpadateDialogueBox(string Name, string Text)
    {
        CharacterName.text = Name;
        DialogueText.text = Text;
    }
    public void StartDialogue(string Name, string Text)
    {
        gameObject.SetActive(true);
    }
    public void EndDialogue()
    {
        gameObject.SetActive(false);
        CharacterName = null;
        DialogueText = null;
    }
}
