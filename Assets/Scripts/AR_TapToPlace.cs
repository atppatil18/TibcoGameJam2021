using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;


public class AR_TapToPlace : MonoBehaviour
{
    public ARRaycastManager arRaycastManager;
    public GameObject cursorChild;
    public GameObject objectToPlace;
 
    public bool useCursor = true;
    private bool stationPlaced = false;
    
    // Start is called before the first frame update
    void Start()
    {
        cursorChild.SetActive(useCursor);
        objectToPlace.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (useCursor)
        {
            updatePlacementPost();
        }

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && !stationPlaced)
        {
            //GameObject.Instantiate(objectToPlace, transform.position, transform.rotation);
            objectToPlace.SetActive(true);
            objectToPlace.transform.position = transform.position;
            objectToPlace.transform.rotation = transform.rotation;
            stationPlaced = true;
            
        }
        else
        {
            /*
            List<ARRaycastHit> hits = new List<ARRaycastHit>();
            arRaycastManager.Raycast(Input.GetTouch(0).position, hits,
                UnityEngine.XR.ARSubsystems.TrackableType.Planes);
            if (hits.Count > 0)
            {
                //GameObject.Instantiate(objectToPlace, hits[0].pose.position, hits[0].pose.rotation);
            }
            */
        }

    }

    private void updatePlacementPost()
    {
        Vector2 screenCenter = Camera.main.ViewportToScreenPoint(new Vector2(0.5f, 0.5f));
        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        arRaycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes); 
        //arSessionOrigin.Ray

        if (hits.Count > 0)
        {
            transform.position = hits[0].pose.position;
            transform.rotation = hits[0].pose.rotation;
            //cursorChild.transform.position = hits[0].pose.position;
            //cursorChild.transform.rotation = hits[0].pose.rotation;
        }
        
    }

    public void cursorActivityToggle()
    {
        if (useCursor)
        {
            useCursor = false;
            
        }
        else
        {
            useCursor = true;
        }
        cursorChild.SetActive(useCursor);
    }
    
}
