using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour {

	public Color hoverColor;
	private Color originalColor;
	private GameObject turret;
	private Renderer r;

	void Start () {
		r = GetComponent<Renderer> ();
		originalColor = r.material.color;
	}

	void OnMouseEnter() {
		r.material.color = hoverColor;
	}

	void OnMouseExit() {
		r.material.color = originalColor;
	}

	void OnMouseUpAsButton() {
		if (turret != null) {
			// Should display this on the screen somewhere
			Debug.Log ("Gotta destroy the turret!");
			Destroy (turret);
			return;
		}
		Vector3 buildArea = new Vector3 (transform.position.x, transform.position.y + 0.5f, transform.position.z);
		GameObject turretToBuild = TurretBuilder.builder.GetTurretToBuild ();
		turret = (GameObject)Instantiate (turretToBuild, buildArea, transform.rotation);
	}

}
