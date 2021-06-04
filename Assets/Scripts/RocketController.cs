using System;
using System.Collections;
using System.Collections.Generic;
using DefaultNamespace;
using UnityEngine;

public class RocketController : MonoBehaviour
{
    // Start is called before the first frame update
    public float exhaustForce;
    public float maxSpeed ;
    private Rigidbody2D rocketRigidbody2D;
    private PlayerAttraction playerAttraction;
    [Range(1, 180)]public float maxRotation;
    public float rocketHealth;// = 10f;
    public int fuel;
    public GameObject blastParticleSystem;
    public GameObject debriesParticleSystem;
    public GameObject exhaustParticleSystem;
    
    public GameObject healthBar;
    public GameObject fuelBar;

    private bool zoomedIn = false;
    private int fuelMax = 100;
    private float rocketHealthMax = 10f;
    
    public float peddle;
    public float stearing;


    public GameObject gameEndUI;

    public GameObject indicator;
    private float rocketSpeed;
    private float updateTime;

    private bool alive = true;

    private Vector3 originalPos;

    private PlanetRadar[] fuelHelper;
    private PlanetRadar[] healthHelper;

    private GameObject tempHBar = null;
    private GameObject tempFBar = null;

    private GameObject[] allPlanets;
    private PlanetRadar[] planetRadars;
    void Start()
    {
        fuelHelper = new PlanetRadar[2];
        healthHelper = new PlanetRadar[2];

        allPlanets = GameObject.FindGameObjectsWithTag("Planet");
        planetRadars = getPlanetRadars(allPlanets);
        updateTime = 1;
        fuel = fuelMax;
        rocketHealth = rocketHealthMax;
        rocketRigidbody2D = gameObject.GetComponent<Rigidbody2D>();
        playerAttraction = gameObject.GetComponent<PlayerAttraction>();
        rocketRigidbody2D.bodyType = RigidbodyType2D.Dynamic;

        healthBar.GetComponent<StatusBars>().setHealthSliderMax((int)rocketHealthMax);
        fuelBar.GetComponent<StatusBars>().setHealthSliderMax(fuelMax);
        originalPos = healthBar.transform.parent.position;

        indicator = Instantiate(indicator);
        ShowNearIndicator();
    }

    // Update is called once per frame
    void Update()
    {
        //S
        //Debug.Log("Max Speed "+maxSpeed);
        //peddle = Input.GetAxisRaw("Vertical");
        stearing = Input.GetAxisRaw("Horizontal");

        
        if (Input.GetMouseButton(0) && stearing == 0)
        {
             peddle= 1;
        }
        if (stearing != 0)
        {
            rocketRigidbody2D.constraints = RigidbodyConstraints2D.None;
            rocketRigidbody2D.rotation -= stearing*maxRotation;
        }
        else
        {
            rocketRigidbody2D.constraints = RigidbodyConstraints2D.FreezeRotation;
        }

        rocketSpeed = rocketRigidbody2D.velocity.magnitude;
        
        if (Time.time >= updateTime)
        {
            updateTime = Mathf.FloorToInt(Time.time) + 1f;
            //Debug.Log("Speed "+rocketSpeed);
            //Debug.Log("Velocity "+rocketRigidbody2D.velocity);
            //Debug.Log("Angular velocity "+rocketRigidbody2D.angularVelocity);
            //Debug.Log("Rocket Health "+rocketHealth);
        }
        
        if (rocketHealth <= 0 && alive)
        {
            DestroyObject(); 
        }
        
    }

    private void ShowNearIndicator()
    {
        //Debug.Log("Total planets "+ planetRadars.Length);
        foreach (PlanetRadar planetRadar in planetRadars)
        { 
            
            //Debug.Log("Planet : "+planetRadar.planetLocation);
            //Vector3 dir = transform.position - planetRadar.planetLocation;
            //Debug.DrawRay(transform.position, dir);
            //Vector3 forward = transform.TransformDirection(Vector3.forward) * 10;
            //Debug.DrawRay(transform.position, forward, Color.green,20f);
            
            Vector3 pos = transform.position;
            Vector3 dir = (planetRadar.planetLocation - pos).normalized;
            Vector3 targetLocation = pos + dir * 4;
            indicator.transform.position = targetLocation;
            updateClosestPlanet( planetRadar);
            //pos = new Vector3(pos.x, pos.y, 0);
            //dir = new Vector3(pos.x, pos.y, 0);
            //Debug.Log("Target location "+ (pos + dir * 4) );
            //Debug.DrawLine (pos, pos + dir * 4, Color.red, Mathf.Infinity);
        }
    }

    private void updateClosestPlanet(PlanetRadar planetRadar)
    {
        if (fuelHelper[0] == null)
        {
            fuelHelper[0] = planetRadar;
        }
        else
        {
            if (fuelHelper[1] ==null)
            {
                fuelHelper[1] = planetRadar;
            }
            else
            {
                if (planetRadar.goodFuel)
                    fuelHelper[1] = planetRadar;
            }
        }

        
    }
    private PlanetRadar[] getPlanetRadars(GameObject[] all)
    {
        PlanetRadar[] aRadars = new PlanetRadar [all.Length-1] ;
        int rindex = 0;
        for(int i = 0 ; i < all.Length; i++)
        {
            Debug.Log("Planet  "+all[i].transform.name);
            GameObject currentPlanet = all[i];
            if (currentPlanet.name != "planetEarth")
            {
                aRadars[rindex] = new PlanetRadar(all[i]);
                rindex++;
            }

        }
        return aRadars;
    }
    private void DestroyObject()
    {
        rocketHealth = 0;
        alive = false;
        healthBar.GetComponent<StatusBars>().setHealthSlider((int)rocketHealth);
        Vector3 particleScale = new Vector3(0.1f, 0.1f, 0.1f);
        //debriesParticleSystem = Instantiate(debriesParticleSystem);
        //debriesParticleSystem.transform.position = transform.position;
        //debriesParticleSystem.transform.localScale = particleScale;
        //debriesParticleSystem.GetComponent<ParticleSystem>().Play();
        
        blastParticleSystem = Instantiate(blastParticleSystem);
        blastParticleSystem.transform.position = transform.position;
        blastParticleSystem.transform.localScale = particleScale;//new Vector3(0.1f, 0.1f, 0.1f);
        var mainModule = blastParticleSystem.GetComponent<ParticleSystem>().main;
        mainModule.startSpeed = new ParticleSystem.MinMaxCurve(10);
        mainModule.startLifetime = new ParticleSystem.MinMaxCurve(2);
        var emissionModule = blastParticleSystem.GetComponent<ParticleSystem>().emission;
        var burst = emissionModule.GetBurst(0);
        burst.count = new ParticleSystem.MinMaxCurve(2000);
        emissionModule.SetBurst(0, burst);
        //blastParticleSystem.GetComponent<ParticleSystem>().emission.
            //emissionModule.
        blastParticleSystem.GetComponent<ParticleSystem>().Play();
        gameObject.transform.localScale = new Vector3(0, 0, 0);
        
        //Destroy(debriesParticleSystem,5);
        Destroy(blastParticleSystem,2);
        
        
        //RestartScreen
        if (gameEndUI != null)
        {
            gameEndUI.GetComponent<Animator>().SetTrigger("PlayerDie");
        }
        Destroy(gameObject, 10);
        //Application.Quit();
    }

    private void FixedUpdate()
    {
        //ShowNearIndicator();
        if (peddle > 0 && fuel > 0)
        {
            fuel -= 1;
            fuelBar.GetComponent<StatusBars>().setHealthSlider(fuel);
            rocketRigidbody2D.AddForce(transform.up* exhaustForce, ForceMode2D.Impulse);
            GameObject exhaustParticleSystemTemp = Instantiate(exhaustParticleSystem);
            
            exhaustParticleSystemTemp.transform.position = rocketRigidbody2D.position;
            exhaustParticleSystemTemp.transform.rotation = rocketRigidbody2D.transform.rotation;
            exhaustParticleSystemTemp.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            exhaustParticleSystemTemp.GetComponent<ParticleSystem>().Play();
            Destroy(exhaustParticleSystemTemp, 1);
            peddle = 0;
        }
        if (rocketRigidbody2D.velocity.magnitude > maxSpeed)
        {
            rocketRigidbody2D.velocity = rocketRigidbody2D.velocity.normalized * maxSpeed;
        }

        //updateTempBarPos();
    }


    private void OnCollisionEnter2D(Collision2D other)
    {
        //Debug.Log("Name "+other.gameObject.tag );
        //Debug.Log("Spped more than max "+(rocketRigidbody2D.velocity.magnitude > rocketSpeed/2));
        if (other.gameObject.tag == "Planet" && (rocketRigidbody2D.velocity.magnitude >= maxSpeed/2))
        {
            rocketHealth = 0;
        }
        else if (other.gameObject.tag == "Planet" && (rocketRigidbody2D.velocity.magnitude < maxSpeed/2))
        {
            DamageRocket();
        }
        
    }
///*
    private void OnCollisionStay2D(Collision2D other)
    {
        if (other.gameObject.tag == "Planet")
        {
            transform.RotateAround(other.transform.position, new Vector3(0,0,1), 0.1f);

            float maxH = other.gameObject.GetComponent<PlanetRange>().planetRepair / 100 * rocketHealthMax;
            float maxF = other.gameObject.GetComponent<PlanetRange>().planetFuel / 100 * fuelMax;
            //Debug.Log("Max Fuel on planet "+maxF);
            //Debug.Log("Max Fuel total "+fuelMax);
            //Debug.Log("Current fuel "+fuel);
            
            if (Time.time >= updateTime )
            {
                if (rocketHealth <= maxH)
                {
                    rocketHealth += 1.0f;
                    healthBar.GetComponent<StatusBars>().setHealthSlider((int)rocketHealth);
                    updateTempBars();
                }

                if (maxH < 0)
                {
                    rocketHealth -= 1.0f;
                    healthBar.GetComponent<StatusBars>().setHealthSlider((int)rocketHealth);
                    updateTempBars();
                }

                if (fuel <= maxF)
                {
                    fuel += 2;
                    fuelBar.GetComponent<StatusBars>().setHealthSlider(fuel);
                    updateTempBars();
                }
                
            }

            if (!zoomedIn)
            {
                float y = -Screen.currentResolution.height / 2;
                float x = Screen.currentResolution.width / 2;
                //healthBar.transform.parent.localScale += new Vector3(1, 1, 1);
                //healthBar.transform.parent.position = new Vector3(x, y, 0);
                zoomedIn = true;
                ShowHealthBarOnPlanet(other);
                updateTempBarPos(other);
            }
            
        }
        
    }

void updateTempBars()
{
    if (tempHBar != null)
    {
        tempHBar.GetComponent<StatusBars>().setHealthSlider((int)rocketHealth);
        tempFBar.GetComponent<StatusBars>().setHealthSlider(fuel);
    }
}

void updateTempBarPos(Collision2D planet)
{
    if (tempHBar != null)
    {
        
        Vector3 screenPos = Camera.main.WorldToScreenPoint(planet.transform.position);
        tempHBar.transform.position = new Vector3(screenPos.x, screenPos.y + Screen.currentResolution.height/10, screenPos.z);
        tempFBar.transform.position = new Vector3(screenPos.x, screenPos.y , screenPos.z);
        //Debug.Log("Updated position "+screenPos);
    }
}
private void ShowHealthBarOnPlanet(Collision2D planet)
{
    
    GameObject canvas = transform.GetChild(1).gameObject;
    tempHBar = Instantiate(healthBar, canvas.transform);
    tempFBar = Instantiate(fuelBar, canvas.transform);
    Vector3 screenPos = Camera.main.WorldToScreenPoint(planet.transform.position);
    tempHBar.transform.position = new Vector3(screenPos.x, screenPos.y + Screen.currentResolution.height/10, screenPos.z);
    tempFBar.transform.position = new Vector3(screenPos.x, screenPos.y, screenPos.z);
    
   // Debug.Log("View Port to screen point "+Camera.main.ViewportToScreenPoint(planet.transform.position));
   // Debug.Log("world to screen point "+Camera.main.WorldToScreenPoint(planet.transform.position));
   // Debug.Log("Source bar position  " +healthBar.transform.position);//planet.transform.position;
   // Debug.Log("Temp bar pos = "+tempHBar.transform.position);

}

private void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.tag == "Planet")
        {
            if (zoomedIn)
            {
                if (tempHBar != null)
                {
                    DestroyObject(tempHBar);
                    DestroyObject(tempFBar);
                }
                //healthBar.transform.parent.localScale -= new Vector3(1, 1, 1);
                //healthBar.transform.parent.gameObject.GetComponent<RectTransform>().position = originalPos;
                zoomedIn = false;
            }
        }
    }

private void OnTriggerEnter2D(Collider2D other)
{
   // Debug.Log("NAME:   "+ other.transform.name);
    if (other.transform.name == "Core")
    {
        DestroyObject();
    }
}

public void DamageRocket()
    {
        
        rocketHealth -= (rocketHealth / 5);
        healthBar.GetComponent<StatusBars>().setHealthSlider((int)rocketHealth);
    }

}
