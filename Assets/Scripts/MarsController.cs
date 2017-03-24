using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarsController : MonoBehaviour {

    public float radius = 45.72f;
    public float speed = 0.4f;

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
			ZoomTarget.target_tag = 4;
			TimeScale.header = "Mars";
			TimeScale.info = "Mass: 0.642 * 10^24 kg\nDiameter: 6792 km\nGravity: 3.7 m/s^2\nDistance from Sun: 227.9 * 10^6 km";
		}
	}
}
