using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartSpawn : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject spawnObject;

    private float updateTime = 3;
    private ShootinStar SS;
    private Vector2 leftBottom;
    private Vector2 leftTop;
    private Vector2 rightBottom;
    private Vector2 rightTop;

    private Vector2[] slots;
    private float[] angles;
    void Start()
    {
        
        SS= spawnObject.GetComponent<ShootinStar>();
        leftBottom = Camera.main.ViewportToScreenPoint(new Vector2(0f, 0f));
        leftTop = Camera.main.ViewportToScreenPoint(new Vector2(0f, 1f));
        rightBottom = Camera.main.ViewportToScreenPoint(new Vector2(1f, 0f));
        rightTop = Camera.main.ViewportToScreenPoint(new Vector2(1f, 1f));
        slots = new[] {leftBottom, leftTop, rightBottom, rightTop };
        angles = new[] {-45f, -135, 45, 135};
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time >= updateTime)
        {
            updateTime = Mathf.FloorToInt(Time.time) + 1f;
            GameObject temp = Instantiate(spawnObject);

            int index = (int) Random.Range(0, 5);
            if (index > 4)
            {
                index = 4;
            }

            temp.transform.position = slots[index];
            temp.transform.Rotate(0, 0, angles[index], Space.World);
        }

    }
}
