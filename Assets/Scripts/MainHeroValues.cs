using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "HeroValues", menuName = "ScriptableObjects/HeroValues")]
public class MainHeroValues : ScriptableObject
{
    [Range(0,100)]
    public int cl;
    public const int LEVEL_1_EDGE = 95;
    public const int LEVEL_2_EDGE = 70;
    public const int LEVEL_3_EDGE = 50;
    public const int LEVEL_4_EDGE = 20;
    [TextArea(20, 20)]
    public string text;
    private void Awake()
    {

    }
}
