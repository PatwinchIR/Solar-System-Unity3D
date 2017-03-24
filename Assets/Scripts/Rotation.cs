using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour {
    public float speed = 120.0f;

	void Update () {
        this.transform.Rotate(Vector3.up, Time.deltaTime * speed);
    }
}
