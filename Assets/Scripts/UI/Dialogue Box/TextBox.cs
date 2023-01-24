using UnityEngine;
using TMPro;

public class TextBox : MonoBehaviour
{
    public GameObject Response;
    public GameObject DialogueText;
    public Vector2 maxSize = new Vector2(260, float.PositiveInfinity);
    public Vector2 minSize;
    public float Pivot;
    public void FillTextBox(DialogueLine Line)
    {
        if (Pivot == 0)
        {
            Response.GetComponent<TMP_Text>().text = "";
            Fill(Response, 5);
        }
        else
        {
            Response.GetComponent<TMP_Text>().text = "Main Hero: " + Line.response;
            Fill(Response, 5);

        }
        DialogueText.GetComponent<TMP_Text>().text = Line.Name + ": " + Line.text;
        Fill(DialogueText, 20);
    }
    protected virtual void Fill(GameObject LineType, int spacing)
    {
        TMP_Text Text = LineType.GetComponent<TMP_Text>();
        RectTransform rectTransform = LineType.GetComponent<RectTransform>();
        rectTransform.localPosition = new Vector2(0, -Pivot);
        if (Text != null)
        {
            Vector2 preferredSize = Text.GetPreferredValues(maxSize.x, maxSize.y);
            preferredSize.x = Mathf.Clamp(preferredSize.x, minSize.x, maxSize.x);
            preferredSize.y = Mathf.Clamp(preferredSize.y, minSize.y, maxSize.y);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, preferredSize.x);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, preferredSize.y);
            Pivot += rectTransform.sizeDelta.y + spacing;
        }
    }
}