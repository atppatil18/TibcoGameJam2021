using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetInfomer : MonoBehaviour
{
    // Start is called before the first frame update
    public string[] lines;
    public GameObject dialogboxHolder;
    private bool infoDisplayed;
    void Start()
    {
        infoDisplayed = false;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        //Debug.Log("Other "+other.gameObject.tag);
        if (!infoDisplayed && other.gameObject.tag == "Rocket")
        {
            showMessage();
            infoDisplayed = true;
        }
    }

    

    void showMessage()
    {
        //dialogboxHolder = Instantiate(this.dialogboxHolder);
        //Transform dialogboxHolder = transform.GetChild(0);
        if (dialogboxHolder != null)
        {
            DialogBox dialogBox = dialogboxHolder.GetComponent<DialogBox>();
            dialogBox.lines = null;
            dialogBox.textSpeed = 0.05f;
            dialogBox.lines = lines;
            dialogBox.index = 0;
            dialogboxHolder.SetActive(true);
            dialogBox.StartDialogBox();
            
            
        }
    }
}
