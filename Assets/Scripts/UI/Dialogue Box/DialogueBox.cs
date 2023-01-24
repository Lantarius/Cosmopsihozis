using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using UnityEngine.UI;
using System;

public class DialogueBox : MonoBehaviour
{
    [SerializeField] DialogueManager dialogueManager;
    public GameObject forksContainer;
    public GameObject TextBoxContainer;
    public GameObject TextBox;
    public List<GameObject> ForkButton;
    public void UpadateDialogueBox(string Name, DialogueLine Dialogue)
    {
        FillTextBox(Dialogue);
        FillDialogueForks(Dialogue);
    }
    public void StartDialogue(string Name, DialogueLine DialogueForks)
    {
        TextBox.GetComponent<TextBox>().Pivot = 0;
        UpadateDialogueBox(Name, DialogueForks);
        gameObject.SetActive(true);
    }
    public void EndDialogue()
    {
        gameObject.SetActive(false);
        for (int i = 0; i < ForkButton.Count; i++)
        {
            ForkButton[i].name = "Line" + i;
        }
    }
    public void FillDialogueForks(DialogueLine Dialogue)
    {
        ClearDialogueForks();
        for (int i = 0; i < ForkButton.Count; i++)
        {
            int forkindex = i;
            ForkButton[i].GetComponent<Button>().onClick.AddListener(() =>
            {
                dialogueManager.LoadDialogue(forkindex);
            });
        }
        for (int i = 0; i < Dialogue.Forks.Count; i++)
        {
            ForkButton[i].SetActive(true);
            ForkButton[i].GetComponentInChildren<TMP_Text>().text = Dialogue.Forks[i].ForkTitle;
            if (Dialogue.Forks[i].Type == DialogueLine.DialogueType.SkillCheck)
            {
                ForkButton[i].GetComponentInChildren<TMP_Text>().text = "[Required Rank - " + Dialogue.Forks[i].requiredRank+ "] " + Dialogue.Forks[i].ForkTitle;
                ForkButton[i].GetComponent<Button>().interactable = Dialogue.Forks[i].SkillCheck(3);
            }
        }
        forksContainer.GetComponent<RectTransform>().sizeDelta = new Vector2(0, forksContainer.GetComponent<GridLayoutGroup>().cellSize.y * Dialogue.Forks.Count + forksContainer.GetComponent<GridLayoutGroup>().spacing.y + 5);
    }
    public void ClearDialogueForks()
    {
        for (int i = 0; i < ForkButton.Count; i++)
        {
            ForkButton[i].GetComponent<Button>().onClick.RemoveAllListeners();
            ForkButton[i].GetComponent<Button>().interactable = true;
        }
        if (forksContainer.transform.childCount > 0)
        {
            for (int i = 0; i < ForkButton.Count; i++)
            {
                ForkButton[i].SetActive(false);
                ForkButton[i].name = "Line" + i;
            }
        }
    }
    public void FillTextBox(DialogueLine Dialogue)
    {
        TextBox.GetComponent<TextBox>().FillTextBox(Dialogue);
        Instantiate(TextBox, TextBoxContainer.transform);
        TextBoxContainer.GetComponent<RectTransform>().sizeDelta = new Vector2(0, TextBox.GetComponent<TextBox>().Pivot);
    }
    public void CallDialogueManager()
    {
        
    }
}
