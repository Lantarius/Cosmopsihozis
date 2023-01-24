using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TaskIndicator : MonoBehaviour
{
    [SerializeField] AIController playerController;
    [SerializeField] TMP_Text CurrentTaskText;
    private void Awake()
    {
        playerController.NextTask.AddListener(UpdateCurrentTaskText);
    }
    public void UpdateCurrentTaskText()
    {
        CurrentTaskText.text = playerController.CurrentTask.TaskName;
    }
}
