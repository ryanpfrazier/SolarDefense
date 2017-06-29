using UnityEngine;

public class TurretBuilder : MonoBehaviour {

	public static TurretBuilder builder;

	void Awake () {
		builder = this;
	}

	public GameObject bulletTurretPrefab;
	private GameObject turretToBuild;

	void Start () {
		turretToBuild = bulletTurretPrefab;
	}

	public GameObject GetTurretToBuild() {
		return turretToBuild;
	}

}
