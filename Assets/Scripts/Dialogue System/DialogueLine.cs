using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Line", menuName = "ScriptableObjects/Dialogue")]
public class DialogueLine : ScriptableObject
{
    public GameObject ForkButton;
    public DialogueType Type;
    [TextArea(3, 20)]
    public string ForkTitle;
    [TextArea(3, 20)]
    public string response;
    [TextArea(3, 20)]
    public string Name;
    [TextArea(3, 20)]
    public string text;
    public List<DialogueLine> Forks;
    [Range(0, 10)]
    public int requiredRank;
    public enum DialogueType
    {
        Dialogue,
        StopDialogue,
        SkillCheck,
        Continiu
    }
    public bool SkillCheck(int lvl)
    {
        if(lvl > requiredRank)
        {
            return true;
        }
        else { return false; }
    }
}
