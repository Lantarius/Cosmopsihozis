using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TaskIndicator : MonoBehaviour
{
    [SerializeField] TMP_Text CurrentTaskText;
    public void UpdateCurrentTaskText(Task CurrentTask)
    {
        CurrentTaskText.text = CurrentTask.Name;
        Debug.Log(CurrentTask.name);
    }
}
