using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtonController : MonoBehaviour
{
    public GameObject fader;
    private List<Transform> allRockets = new List<Transform>();
    private int activeRocketStatus = -99;
    private void Start()
    {
        int cc =transform.childCount;
        for (int i = 0; i < cc; i++)
        {
            Transform child = transform.GetChild(i);
            //Debug.Log("Child "+child.tag);
            if (child.tag == "Rocket")
            {
                allRockets.Add(child);
                child.gameObject.SetActive(false);
            }
        }

        if (allRockets.Count > 0)
        {
            Debug.Log("All rocket count > 0: "+allRockets.Count);
            allRockets[0].gameObject.SetActive(true);
            activeRocketStatus = 0;
        }
    }

    public void clickPlayButton()
    {
        int nextScene = SceneManager.GetActiveScene().buildIndex +1;

        if (fader!= null)
        {
            fader.GetComponent<FadeScreen>().sceneEndAnimation();
            new WaitForSeconds(2);
        }
        SceneManager.LoadScene(nextScene);
    }

    public void clickLeaderButton()
    {
        //Hide Menu Button//Exit Game
        exitGame();
    }

    public void clickExitButton()
    {
        //Hide Menu Button//Exit Game
        exitGame();
    }

    public void leftSelect()
    {
        Debug.Log("Select Previous");
        if (activeRocketStatus > 0)
        {
            allRockets[activeRocketStatus].gameObject.SetActive(false);
            activeRocketStatus -= 1;
            allRockets[activeRocketStatus].gameObject.SetActive(true);
        }
    }

    public void rightSelect()
    {
        Debug.Log("Select Next");
        if (activeRocketStatus < allRockets.Count-1)
        {
            allRockets[activeRocketStatus].gameObject.SetActive(false);
            activeRocketStatus += 1;
            allRockets[activeRocketStatus].gameObject.SetActive(true);
        }
    }

    public void reloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    private void exitGame()
    {
        Application.Quit();
    }
}
