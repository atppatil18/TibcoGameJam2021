using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AR_RocketControl : MonoBehaviour
{

    public GameObject playerRocket;
    public GameObject rocketBase;
    public GameObject launchButtonObject;
    public GameObject exhaustEffect;
    public GameObject groundSmoke;
    public GameObject endCurt;
    
    
    private GameObject player;
    private bool launch = false;
    public float acceleration = 0.01f; 
    private float moveDist = 0.01f;
    private float speed = 0f;
    private float gravity = 0.05f;
    private float td = 0.1f;
    private int nextUpdate = 1;
    

    private int first5sec = 0;
    private bool playerFound = false;
    private void Start()
    {
        exhaustEffect.SetActive(false);
        groundSmoke.SetActive(false);
        //launchButtonObject.SetActive(false);
        player = playerRocket;
    }

    private void Update()
    {
        //Debug.Log("Launch "+launch);
        if (playerRocket.activeSelf)
        {
            launchButtonObject.SetActive(true);
        }
        if (launch)
        {
            
            if (Time.time >= nextUpdate)
            {
                
                if (first5sec <=5)
                {
                    //start normal exhaust particle effect
                    speed = speed + acceleration * td/50;
                }
                else if (first5sec == 6)
                {
                    //Stop normal exhaust particle effect
                    //Boost Exhaust particle effect start
                }
                else if (first5sec == 10)
                {
                    // Start fade animation
                    if (endCurt != null)
                    {
                        endCurt.GetComponent<Animator>().SetTrigger("End");
                    }
                }
                else if (first5sec == 12)
                {
                    //Load next scene
                    int nextScene = SceneManager.GetActiveScene().buildIndex +1;
                    SceneManager.LoadScene(nextScene);
                }
                else
                {
                    speed = speed + acceleration * td;
                }

                //speed = speed - gravity;
                //Debug.Log("Velocity = "+speed);
                //Debug.Log("Distance per frame "+speed*td);
                first5sec += 1;
                nextUpdate=Mathf.FloorToInt(Time.time)+1;
            }
            player.transform.position += new Vector3(0, speed*td, 0); 
            
        }
    }

    public void exhaustButton()
    {
        launch = true;
        groundSmoke.SetActive(true);
        exhaustEffect.SetActive(true);
        
        //sDebug.Log("Button Pressed Button pressed "+ launch);
    }

    public void zoomInButton()
    {
        if (playerRocket != null)
        {
            playerRocket.transform.localScale += new Vector3(0.05f, 0.05f, 0.05f);
            if (rocketBase !=null)
            {
                rocketBase.transform.localScale += new Vector3(0.05f, 0.05f, 0.05f);
            }
            
        }
    }
    
    
    public void zoomOutButton()
    {
        if (playerRocket != null)
        {
            playerRocket.transform.localScale-= new Vector3(0.05f, 0.05f, 0.05f);
            if (rocketBase !=null)
            {
                rocketBase.transform.localScale -= new Vector3(0.05f, 0.05f, 0.05f);
            }
        }
    }
}
