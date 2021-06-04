using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoaded : MonoBehaviour
{
    public Animator transition;

    public float transitionTime = 1f;
    public void startGameScene()
    {
        
        StartCoroutine(LoadGameScene(1));
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    IEnumerator LoadGameScene(int index)
    {
        transition.SetTrigger("FadeOut");
        yield return new WaitForSeconds(transitionTime);
        SceneManager.LoadScene(index);
    }
}
