using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VenusController : MonoBehaviour {

    public float radius = 21.69f;
    public float speed = 0.588f;

    // Use this for initialization
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = GetPosition(Time.time * speed);
    }

    private Vector3 GetPosition(float angle)
    {
        return new Vector3(radius * Mathf.Sin(angle), 0, radius * Mathf.Cos(angle));
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
			ZoomTarget.target_tag = 2;
			TimeScale.header = "Venus";
			TimeScale.info = "Mass: 4.87 * 10^24 kg\nDiameter: 12104 km\nGravity: 8.9 m/s^2\nDistance from Sun: 108.2 * 10^6 km";
		}
	}
}
