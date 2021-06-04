using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.U2D;

public class SpriteShapeManager : MonoBehaviour
{
    public SpriteShapeController spriteShapeController;
    public int interPoints = 3;
    public float pointsDist = 2f;
    public Vector3 startVector;
    public Vector3 endVector;
    
    [Range(-20, -1)] public float dept = -10;

    private Spline spline;

    // Start is called before the first frame update
    public float firstX = -5f;
    public float firstY = 0f;
    

    private float leftTangentX = -8f;
    private float rightTangentX = 6f;
    
    void Start()
    {
        startVector = new Vector3(firstX, firstY, 0);
        float lowestY = firstY;
        float lowestX = firstX;

        float currX =firstX;
        float currY = firstY;

        spline = spriteShapeController.spline;
        spline.SetPosition(0, new Vector3(firstX, firstY, 0));
        spline.SetTangentMode(0, ShapeTangentMode.Continuous);
        spline.SetLeftTangent(0, new Vector3( 0, 0, 0 ));
        spline.SetRightTangent(0, new Vector3( rightTangentX, 0, 0 ));

        int index = 1;
        for (int i = 0; i < interPoints +2 ; i++)
        {
             

            currX = spline.GetPosition(index - 1).x + pointsDist;
            currY = spline.GetPosition(index - 1).y + Random.Range(-10, 1);

            if (currX <= lowestX)
                lowestX = currX;
            if (currY <= lowestY)
                lowestY = currY;

            if (i<interPoints)
            {
                spline.InsertPointAt(index, new Vector3(currX, currY));
            }
            else
            {
                spline.SetPosition(index, new Vector3(currX, currY));
            }

            spline.SetTangentMode(index, ShapeTangentMode.Continuous);
            spline.SetLeftTangent(index, new Vector3( leftTangentX, 0, 0 ));
            spline.SetRightTangent(index, new Vector3( rightTangentX, 0, 0 ));

            if (i == (interPoints +1))
            {
                Debug.Log("Point "+index+" -> "+ spline.GetPosition(index));
                spline.SetRightTangent(index, new Vector3( 0, 0, 0 ));
            }
            //Debug.Log("Point "+index+" -> "+ spline.GetPosition(index));
            //prevX = prevX + pointsDist;
            index += 1;
            
        }

        endVector = new Vector3(currX, currY, 0);
        
        for (int i = 0; i < 2; i++) //Adding Base points
        {
            if (i == 0)
            {
                spline.InsertPointAt(index, new Vector3(currX, lowestY+dept ));    
            }
            else
            {
                spline.InsertPointAt(index, new Vector3(lowestX, lowestY+dept )); 
            }
            spline.SetTangentMode(index, ShapeTangentMode.Continuous);
            spline.SetLeftTangent(index, new Vector3( 0, 0, 0 ));
            spline.SetRightTangent(index, new Vector3( 0, 0, 0 ));
            index += 1;
        }
        
        
        
    }

    // Update is called once per frame
    void Update()
    {
        //gameObject.GetComponent<SpriteShapeController>().colliderOffset = 0.5f;
        
    }
}
