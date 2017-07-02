using UnityEngine;
using UnityEngine.EventSystems;

public class Node : MonoBehaviour {

	[Header("Hover Colors")]
	public Color hoverColor;
	public Color notEnoughMoneyColor;
	private Color originalColor;
	private Renderer r;
	TurretBuilder turretBuilder;

	[Header("Optional")]
	public GameObject turret;

	void Start () {
		r = GetComponent<Renderer> ();
		originalColor = r.material.color;
		turretBuilder = TurretBuilder.builder;
	}

	void OnMouseEnter() {
		if (EventSystem.current.IsPointerOverGameObject ()) {
			return;
		}
		if (!turretBuilder.CanBuild) {
			return;
		}
		// if not enough money, change to red
		if (turretBuilder.EnoughMoneyToBuild) {
			r.material.color = hoverColor;
		} else {
			r.material.color = Color.red;
		}
	}

	void OnMouseExit() {
		r.material.color = originalColor;
	}

	void OnMouseUpAsButton() {
		if (EventSystem.current.IsPointerOverGameObject ()) {
			return;
		}
		if (!turretBuilder.CanBuild) {
			return;
		}
		if (turret != null) {
			// Should display this on the screen somewhere
			Destroy (turret);
			return; 
		}
		turretBuilder.BuildTurretOn(this);
	}

}
