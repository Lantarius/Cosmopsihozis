using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class DataManager : MonoBehaviour
{
    public static UnityEvent<MainHeroValues> RefreshHeroValues = new UnityEvent<MainHeroValues>();

    public static void StartAction(MainHeroValues Values)
    {
        RefreshHeroValues.Invoke(Values);
    }
}
