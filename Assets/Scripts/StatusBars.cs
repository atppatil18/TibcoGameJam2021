using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StatusBars : MonoBehaviour
{
    public Slider HealthSlider;
    //public Slider FuelHealthSlider;

    public void setHealthSliderMax(int maxHealth)
    {
        HealthSlider.maxValue = maxHealth;
    }

    public void setHealthSlider(int health)
    {
        HealthSlider.value = health;
    }

    public float getHealSliderValue()
    {
        return HealthSlider.value;
    }
    
}
