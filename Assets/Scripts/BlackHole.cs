using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BlackHole : MonoBehaviour
{
    public float force;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        other.gameObject.GetComponent<RocketController>().maxSpeed *= 2;
        
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
        other.gameObject.GetComponent<RocketController>().maxSpeed /= 2;
    }

    private void OnCollisionExit2D(Collision2D other)
    {
        other.gameObject.GetComponent<PlayerAttraction>().inField = false;
        
    }


    private void rocketInGravity(Collider2D other)
    {

        //
        pullObject(other);
        other.gameObject.GetComponent<PlayerAttraction>().inField = true;
    }

    private void pullObject(Collider2D other)
    {
        Vector3 dir = (transform.position - other.transform.position).normalized;
        other.gameObject.GetComponent<Rigidbody2D>().AddForce(dir*force);
        //other.gameObject.GetComponent<Rigidbody2D>().AddTorque(10);
    }

}
