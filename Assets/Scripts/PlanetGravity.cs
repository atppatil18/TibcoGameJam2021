using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetGravity : MonoBehaviour
{
    // Start is called before the first frame update

    private GameObject ParentPlanet;
    void Start()
    {
        ParentPlanet = gameObject.transform.parent.gameObject;
        //float range =  ParentPlanet.GetComponent<PlanetRange>().range;
        //range = range / 100;
        //float scaleFactor = 0.1f;
        //gameObject.transform.localScale = new Vector3( scaleFactor+range , scaleFactor +range, 0);
        
    }

    // Update is called once per frame
    void Update()
    {
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        //Debug.Log("Trigger stay "+other.transform.name);
        if(other.transform.tag == "Rocket") 
        {
            rocketInGravity(other);    
        }
        else
        {
            pullObject(other);
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<PlayerAttraction>() != null)
        {
            other.gameObject.GetComponent<PlayerAttraction>().inField = false;
        }
        
    }

    private void OnCollisionExit2D(Collision2D other)
    {
        other.gameObject.GetComponent<PlayerAttraction>().inField = false;
        
    }


    private void rocketInGravity(Collider2D other)
    {
        //Debug.Log("Collision Stay");
        pullObject(other);

        other.gameObject.GetComponent<PlayerAttraction>().inField = true;
    }

    private void pullObject(Collider2D other)
    {
        Vector3 dir = (ParentPlanet.transform.position - other.transform.position).normalized;
        float force = ParentPlanet.GetComponent<PlanetRange>().cal_pull_force(other.gameObject);
            other.gameObject.GetComponent<Rigidbody2D>().AddForce(dir*force);
        //other.gameObject.GetComponent<Rigidbody2D>().AddTorque(10);
    }
    

}
