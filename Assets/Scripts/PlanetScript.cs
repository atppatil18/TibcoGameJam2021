using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetScript : MonoBehaviour
{
    public GameObject massObject;

    [Range(0, 3)] public float gravityLimit;

    public float pullForce = 50f;
    // Start is called before the first frame update

    private float distanceFromRocket;
    void Start()
    {
        

    }

    // Update is called once per frame
    void Update()
    {
        distanceFromRocket = Vector2.Distance(massObject.transform.position, transform.position);
        if (distanceFromRocket < 6)
        {
            Debug.Log(massObject.transform, gameObject.transform);
            massObject.transform.GetComponent<Rigidbody2D>().AddForce(pullForce * gameObject.transform.position.normalized);
        }
    }

    private void FixedUpdate()
    {
        
    }
}
