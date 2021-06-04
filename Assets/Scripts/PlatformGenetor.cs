using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;

public class PlatformGenetor : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject a_sprite;
    public GameObject b_sprite;

    //private SpriteShapeManager sm, sm2;
    void Start()
    {
        GameObject ob1  = Instantiate(a_sprite, new Vector3(-8f, 0f), Quaternion.identity);
        
        
        //sm = ob1.GetComponent<SpriteShapeManager>();
        SpriteShapeController ssc = ob1.GetComponentInChildren<SpriteShapeController>();
        Debug.Log("First block Start " + " -> "  +ssc.spline.GetPointCount());
        //Debug.Log("First block end "+ " -> "+sm.spriteShapeController.spline.GetPointCount());
        GameObject ob2  = Instantiate(b_sprite, ob1.GetComponent<SpriteShapeManager>().endVector, Quaternion.identity);
        //sm2 = ob2.GetComponent<SpriteShapeManager>();
        Debug.Log("Sec block Start ");
        //Debug.Log("Sec block end "+sm2.endVector);

        //b_sprite.GetComponent<SpriteShapeManager>().startVector = a_sprite.GetComponent<SpriteShapeManager>().endVector;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
