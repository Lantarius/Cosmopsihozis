using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class DialogueBox : MonoBehaviour
{
    public static UnityEvent<string, string> _dialogueBoxEvent = new UnityEvent<string, string>();
    TMP_Text CharacterName;
    TMP_Text DialogueText;
    private void Awake()
    {
        _dialogueBoxEvent.AddListener(FillDialogueBox);
    }
    public static void Call(string Name, string Text)
    {
        _dialogueBoxEvent.Invoke(Name, Text);       
    }
    void FillDialogueBox(string Name, string Text)
    {
        CharacterName.text = Name;
        DialogueText.text = Text;
    }
}
