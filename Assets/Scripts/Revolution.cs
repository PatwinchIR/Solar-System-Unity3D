using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Revolution : MonoBehaviour {
    public float radius = 3.0f;
    public float speed = 0.1f;

    void Update()
    {
        this.transform.localPosition = GetPosition(Time.time * speed * Mathf.PI / 180.0f);
    }

    private Vector3 GetPosition(float angle)
    {
        var x = radius * Mathf.Sin(angle);
        var z = radius * Mathf.Cos(angle);
        return new Vector3(x, 0, z);
    }
}
