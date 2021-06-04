using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttraction : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject planetSystem;

    public bool inField;
    void Start()
    {
        inField = false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        //Debug.Log("In field "+ inField);
        //Debug.Log("In field "+ inField);
        /*
        int pc = planetSystem.transform.childCount;
        
        for (int i = 0; i < pc; i++)
        {
            //Debug.Log(i);
            PlanetRange planet = planetSystem.transform.GetChild(i).GetComponent<PlanetRange>();    
            Vector3 dir = (planet.transform.position - transform.position).normalized;
            float force = planet.cal_pull_force(gameObject);
            float dist = Vector2.Distance(gameObject.transform.position, planet.transform.position);
            //Debug.Log("Dist: "+dist +" & Range: "+planet.range);
            if (planet.range >= dist )
            {
                gameObject.GetComponent<Rigidbody2D>().AddForce(dir * force );
                inField = true;
            }
            else
            {
                inField = false;
            }
            
        }
        */
    }
}
