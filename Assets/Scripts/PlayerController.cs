using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float playerSpeed = 10f;
    public float jumpForce = 2f;
    public Rigidbody2D characterRigidbody2D;
    [Range(0, .3f)] [SerializeField] private float _MovementSmoothing = .05f;
    
    private Vector3 m_Velocity = Vector3.zero;
    private float _move;
    private String _tag_ground = "Ground";

    private bool jumpInput;
    // Start is called before the first frame update
    private void Start()
    {
        
    }

    // Update is called once per frame
    private void Update()
    {
        _move = 0.5f; //Input.GetAxisRaw("Horizontal");

    }

    private void FixedUpdate()
    {
        Vector3 targetVelocity = new Vector2(_move * playerSpeed, characterRigidbody2D.velocity.y);
        characterRigidbody2D.velocity = Vector3.SmoothDamp(characterRigidbody2D.velocity, targetVelocity, ref m_Velocity,
            _MovementSmoothing);
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        Debug.Log(other.collider.name);
    }

    private void OnCollisionStay2D(Collision2D other)
    {
        //Debug.Log("Collision is staying "+other.collider.tag);
        if (other.collider.tag == _tag_ground)
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                characterRigidbody2D.AddForce(new Vector2(0,jumpForce),ForceMode2D.Impulse);
            }
            
        }
    }
}
