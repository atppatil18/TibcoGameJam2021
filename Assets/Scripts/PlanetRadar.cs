using UnityEngine;

namespace DefaultNamespace
{
    public class PlanetRadar
    {
        private int fuelPump;
        private int materials;

        public bool goodFuel = false;
        public bool goodHealth = false;
        public Vector3 planetLocation;

        public PlanetRadar(GameObject planet)
        {
            if (planet != null)
            {
                PlanetRange planetRange = planet.GetComponent<PlanetRange>();
                fuelPump = planetRange.planetFuel;
                materials = planetRange.planetRepair;
                planetLocation = planet.transform.position;
                if (fuelPump > 0)
                {
                    goodFuel = true;
                }

                if (materials > 0)
                {
                    goodHealth = true;
                }
            }
        }
    }
}