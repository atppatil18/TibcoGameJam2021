using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootinStar : MonoBehaviour
{
    // Start is called before the first frame update
    public float zRotation = -45f;
    public Vector2 offset = new Vector2(10f, 10f);
    public float step = 0.05f;
    void Start()
    {
        Vector2 leftBottom = Camera.main.ViewportToScreenPoint(new Vector2(0f, 0f));
        Vector2 rightTop = Camera.main.ViewportToScreenPoint(new Vector2(1f, 1f));
        transform.position = leftBottom - offset;
        transform.Rotate(0, 0, zRotation, Space.World);
    }

    // Update is called once per frame
    private void FixedUpdate()
    {
        transform.position += new Vector3(step, step, 0);
    }
}
