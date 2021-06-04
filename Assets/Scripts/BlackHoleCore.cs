using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlackHoleCore : MonoBehaviour
{
    // Start is called before the first frame update
    private float fade = 0f;
    private float con = 0.01f;
    private Material _material;
    void Start()
    {
        _material = gameObject.GetComponent<SpriteRenderer>().material;
    }

    // Update is called once per frame
    void Update()
    {
        if (fade == 0 || fade < 0)
        {
            con = 0.01f;
        }
        if (fade == 1 || fade > 1)
        {
            con = -0.01f;
        }
        fade += con;
        _material.SetFloat("Fade",fade);
    }
}
