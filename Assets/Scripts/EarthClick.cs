using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarthClick : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnMouseDown() {
		bool zoom = ZoomTarget.zoom;
		if (zoom) {
			ZoomTarget.zoom = false;
			ZoomTarget.target_tag = 0;
			TimeScale.header = "Solar System";
			TimeScale.info = "Mercury\nVenus\nEarth\nMars";
		} else {
			ZoomTarget.zoom = true;
			ZoomTarget.target_tag = 3;
			TimeScale.header = "Earth";
			TimeScale.info = "Mass: 5.97 * 10^24 kg\nDiameter: 12756 km\nGravity: 9.8 m/s^2\nDistance from Sun: 149.6  * 10^6 km\n\nMoon:\nMass: 0.073 * 10^24 kg\nDiameter: 3475 km\nGravity: 1.6 m/s^2\nDistance from Sun: 0.384 * 10^6 km";
		}
	}
}
