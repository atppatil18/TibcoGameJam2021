using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetRange : MonoBehaviour
{
    // Start is called before the first frame update
    public float planetMass;
    public float Gconst = 10f;

    public int planetFuel;
    public int planetRepair;
    
    
    
    //public float rangeRotation;

    private float updateTime = 0.1f;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time >= updateTime)
        {
            updateTime = Mathf.FloorToInt(Time.time) + 0.1f;
            updateEverySec();
        }
    }

    private void updateEverySec()
    {
        gameObject.GetComponent<Rigidbody2D>().rotation += (0.1f);    
    }

    public float cal_pull_force(GameObject obGameObject, float mass)
    {
        float dist = Vector2.Distance(obGameObject.transform.position, gameObject.transform.position);
        float force = Gconst * planetMass * mass / (dist * dist);
        return force;
    }
    
    public float cal_pull_force(GameObject obGameObject)
    {
        float mass = obGameObject.GetComponent<Rigidbody2D>().mass;
        float dist = Vector2.Distance(obGameObject.transform.position, gameObject.transform.position);
        float force = Gconst * planetMass * mass / (dist * dist);
        return force;
    }
}
