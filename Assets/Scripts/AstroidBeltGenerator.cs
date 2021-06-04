using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class AstroidBeltGenerator : MonoBehaviour
{
    // Start is called before the first frame update
    [field: Range(1, 5)] public int beltThickness;
    public int astroidCount;
    public GameObject childAstroid_1;
    public GameObject childAstroid_2;
    private GameObject parentPlanet;
    
    //private GameObject childAtroid;
    void Start()
    {
        parentPlanet = transform.parent.gameObject;
        //childAtroid = transform.GetChild(0).gameObject;

        Vector3 center = parentPlanet.transform.position;
        float radius = 5;
        float cx = center.x;
        float cy = center.y;
        GameObject asto = childAstroid_1;
        //Destroy(transform.GetChild(0).gameObject);
        /*
        int[] angles = {0, 30, 60, 90, 270, 180};
        for (int j = 0; j < angles.Length ; j++)
        {
            int i = angles[j];
            plotX = (float) (cx  + (radius * Math.Cos(i)));
            plotY = (float) (cy + (radius * Math.Sin(i)));
            plotAstroid(plotX, plotY);
        }
        */


        float level;
        float tempRadius;
        float angle;
        for (int l = 0; l < astroidCount; l++)
        {
            //Debug.Log("Ast no " +l);
            
            level = (float) Random.Range(0, beltThickness);
            tempRadius = radius + (float)level;
            //Debug.Log("----> "+tempRadius);
            angle = Random.Range(0, 360);
            //Debug.Log("Temp radius "+tempRadius);
            //Debug.Log("Angle "+angle);
            if (l % 2 == 0)
            {
                asto = childAstroid_2;
            }
            else
            {
                asto = childAstroid_1;
            }

            plotAstroid((float) (cx + (tempRadius*Math.Cos(angle))), (float)(cy + tempRadius*Math.Sin(angle)), asto);

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void plotAstroid(float x, float y, GameObject asto )
    {
        GameObject obGameObject = Instantiate(asto, new Vector3(x, y, 0), Quaternion.identity);
        obGameObject.transform.parent = gameObject.transform;
        float size = Random.Range(0.01f, 0.15f);
        obGameObject.transform.localScale = new Vector3(size,size, 0);
    }
}
