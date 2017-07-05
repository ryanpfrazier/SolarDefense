using UnityEngine;
using UnityEngine.EventSystems;

public class Node : MonoBehaviour {

	[Header("Hover Colors")]
	public Color hoverColor;
	public Color notEnoughMoneyColor;
	private Color originalColor;
	private Renderer r;
	private TurretPrefabClass sellingTurret;
	TurretBuilder turretBuilder;

	public TurretPrefabClass bulletTurret;
	public int bulletTurretCost = 50;
	public TurretPrefabClass flamethrowerTurret;
	public int flamethrowerTurretCost = 125;
	public TurretPrefabClass laserTurret;
	public int laserTurretCost = 175;


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
			if (turret.ToString().Contains("Bullet")) {
				Stats.Cash += bulletTurretCost;
			}
			if (turret.ToString().Contains("Flamethrower")) {
				Stats.Cash += flamethrowerTurretCost;
			}
			if (turret.ToString().Contains("Laser")) {
				Stats.Cash += laserTurretCost;
			}
			// Should display this on the screen somewhere
			Destroy (turret);
			return; 
		}
		turretBuilder.BuildTurretOn(this);
	}
}
