using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject followObject;
    [field: Range(4.0f, -4.0f)] public float MyXoffset;
    [field: Range(4.0f, -4.0f)] public float MyYoffset;

    private float constZoffset = -10;
    private float MyZoffset;// = -10.0f;
    private RocketController RK;
    private PlayerAttraction PA;
    private bool maxZoom = true;
    private float magnifyDist =3f;
    void Start()
    {
        if (transform.tag.Equals("MainCamera"))
        {
            MyZoffset = constZoffset;
        }

        transform.position = followObject.transform.position + new Vector3( MyXoffset , MyYoffset , MyZoffset);
        RK = followObject.GetComponent<RocketController>();

        if (followObject.GetComponent<PlayerAttraction>())
        {
            PA = followObject.GetComponent<PlayerAttraction>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log("In field: "+PA.inField);
        if (PA.inField && maxZoom)
        {
            if (transform.position.z >= (-10 + magnifyDist))
            {
                maxZoom = false;
            }
            else
            {
                MyZoffset = transform.position.z + 0.1f;
                //Debug.Log("Zoom in Condition True: "+transform.position.z);
                transform.position += new Vector3(0, 0, 0.1f);
                maxZoom = true;
            }
            //Zoom in
        }else if (!PA.inField)
        {
            //Debug.Log("Out of the field: "+MyZoffset+", "+transform.position.z);
            if (MyZoffset >= constZoffset)
            {
                MyZoffset = transform.position.z -0.1f;
                transform.position -= new Vector3(0, 0, 0.1f);
                
            }
            else
            {
                maxZoom = true;
            }
            
        }
    }

    private void FixedUpdate()
    {
        if (RK != null && RK.rocketHealth>0)
        {
            transform.position = followObject.transform.position + new Vector3( MyXoffset , MyYoffset , MyZoffset);
        }

    }
}
