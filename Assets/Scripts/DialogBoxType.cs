using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class DialogBoxType : MonoBehaviour
{
    public TextMeshProUGUI textMeshProUGUI;
    public string[] lines;
    public float textSpeed;

    public int index;
    // Start is called before the first frame update
    void Start()
    {
        StartDialogBox();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            if (textMeshProUGUI.text == lines[index])
            {
                nextLine();
            }
            else
            {
                StopAllCoroutines();
                textMeshProUGUI.text = lines[index];
            }

            if (index >= lines.Length -1 )
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
            }
        }
    }

    void startDialog()
    {
        index = 0;
        StartCoroutine(TypeLine());

    }

    IEnumerator TypeLine()
    {
        foreach (char c in lines[index].ToCharArray())
        {
            
            textMeshProUGUI.text += c;
            yield return new WaitForSeconds(textSpeed);
        }
    }

    void nextLine()
    {
        if (index < lines.Length -1 )
        {
            index++;
            textMeshProUGUI.text = string.Empty;
            //Time.timeScale = 1;
            StartCoroutine(TypeLine());
            //Time.timeScale = 0;
        }
        else
        {
            //Time.timeScale = 1;
            gameObject.SetActive(false);
        }
    }

    public void StartDialogBox()
    {
        textMeshProUGUI.text = string.Empty;
        //Time.timeScale = 0;
        startDialog();
    }
}
