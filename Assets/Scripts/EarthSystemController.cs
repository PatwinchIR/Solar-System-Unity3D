using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class EarthSystemController : MonoBehaviour {

    public float radius = 34.0f;
    public float speed = 0.5f;
    public float selfSpeed = 12.0f;

    private Transform Earth;

	// Use this for initialization
	void Start () {
        Earth = this.transform.FindChild("Earth");
	}
	
	// Update is called once per frame
	void Update () {
        Earth.Rotate(Vector3.up, Time.deltaTime * selfSpeed);
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
		} else {
			ZoomTarget.zoom = true;
			ZoomTarget.target_tag = 3;
		}
	}
}
