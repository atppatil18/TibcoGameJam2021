using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoonDynamics : MonoBehaviour
{
    // Start is called before the first frame update
    
    public GameObject blastParticleSystem;
    public GameObject debriesParticleSystem;
    private GameObject parentPlanetGameObject;
    private bool collisionDetected;
    void Start()
    {   
        //Debug.Log("Emission : "+blastParticleSystem.GetComponent<ParticleSystem>().emission.enabled);
        parentPlanetGameObject= gameObject.transform.parent.gameObject;
         collisionDetected = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        if (!collisionDetected)
        {
            transform.RotateAround(parentPlanetGameObject.transform.position, new Vector3(0,0,1), -0.08f);
        }
        
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        collisionDetected = true;
        if (other.transform.tag == "Planet")
        {
            DestroyObject();
        }

        if (other.transform.tag == "Rocket")
        {
            RocketController rocketController = other.gameObject.GetComponent<RocketController>();
            //DestroyObject();
            rocketController.DamageRocket();
        }
    }

    void DestroyObject()
    {

        Vector3 particleScale = new Vector3(0.1f, 0.1f, 0.1f);
        debriesParticleSystem = Instantiate(debriesParticleSystem);
        debriesParticleSystem.transform.position = transform.position;
        debriesParticleSystem.transform.localScale = particleScale;
        debriesParticleSystem.GetComponent<ParticleSystem>().Play();
        
        blastParticleSystem = Instantiate(blastParticleSystem);
        blastParticleSystem.transform.position = transform.position;
        blastParticleSystem.transform.localScale = particleScale;//new Vector3(0.1f, 0.1f, 0.1f);
        blastParticleSystem.GetComponent<ParticleSystem>().Play();
        gameObject.transform.localScale = new Vector3(0, 0, 0);
        
        //Create Debries 
        Destroy(debriesParticleSystem,5);
        Destroy(blastParticleSystem,1);
        
        Destroy(gameObject,1);
    }
}
