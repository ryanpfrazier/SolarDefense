using UnityEngine;

public class TurretBuilder : MonoBehaviour {

	public static TurretBuilder builder;

	void Awake () {
		builder = this;
	}

	public GameObject bulletTurretPrefab;
	public GameObject flamethrowerTurretPrefab;
	public GameObject laserTurretPrefab;
	private GameObject turretToBuild;

	public void SetTurretToBuild (GameObject turret) {
		turretToBuild = turret;
	}

	public GameObject GetTurretToBuild() {
		return turretToBuild;
	}

}
