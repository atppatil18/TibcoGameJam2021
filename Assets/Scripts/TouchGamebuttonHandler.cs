using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchGamebuttonHandler : MonoBehaviour
{
    public GameObject rocketGameObject;
    // Start is called before the first frame update
    public void accelerate()
    {
        rocketGameObject.GetComponent<RocketController>().peddle = 1;
        //If fuel > 0
        if (rocketGameObject.GetComponent<RocketController>().fuel > 0)
        {
            rocketGameObject.GetComponent<RocketController>().fuel -= 1;
            rocketGameObject.GetComponent<RocketController>().fuelBar.GetComponent<StatusBars>()
                .setHealthSlider(rocketGameObject.GetComponent<RocketController>().fuel);
            rocketGameObject.GetComponent<Rigidbody2D>().AddForce(
                transform.up * rocketGameObject.GetComponent<RocketController>().exhaustForce, ForceMode2D.Impulse);
        }
    }

    public void rotateRight()
    {
        //Debug.Log("Right is pressed");
        
        //Debug.Log("Body name "+rocketGameObject.tag);
        //Debug.Log("Position "+rocketGameObject.GetComponent<Rigidbody2D>().rotation);
        rocketGameObject.GetComponent<RocketController>().stearing = 1;
        rocketGameObject.GetComponent<Rigidbody2D>().rotation -= 1f*rocketGameObject.GetComponent<RocketController>().maxRotation;
    }

    public void rotateLeft()
    {
        Debug.Log("Left is pressed");
        rocketGameObject.GetComponent<Rigidbody2D>().rotation -= -1f*rocketGameObject.GetComponent<RocketController>().maxRotation;
    }
}
