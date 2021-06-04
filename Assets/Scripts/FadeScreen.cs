using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeScreen : MonoBehaviour
{
    // Start is called before the first frame update
    GameObject startObject;
    GameObject endObject;
    void Start()
    {
        
        
        if (transform.GetChild(0).name == "Start")
        {
            startObject = transform.GetChild(0).gameObject;
            endObject = transform.GetChild(1).gameObject;
        }
        else
        {
            startObject = transform.GetChild(1).gameObject;
            endObject = transform.GetChild(0).gameObject;
        }
        sceneStartAnimation();
        
    }

    public void sceneStartAnimation()
    { 
        startObject.GetComponent<Animator>().SetTrigger("Start");
        
    }

    IEnumerator waiter()
    {
        yield return new WaitForSecondsRealtime(3);
    }

    public void sceneEndAnimation()
    {
        endObject.GetComponent<Animator>().SetTrigger("End");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
