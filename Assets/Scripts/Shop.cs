using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shop : MonoBehaviour {

	TurretBuilder turretBuilder;

	void Start() {
		turretBuilder = TurretBuilder.builder;
	}

	public void PurchaseBulletTurret() {
		Debug.Log ("bullet turret selected");
		turretBuilder.SetTurretToBuild (turretBuilder.bulletTurretPrefab);
	}

	public void PurchaseFlamethrowerTurret() {
		Debug.Log ("bullet turret selected");

		turretBuilder.SetTurretToBuild (turretBuilder.flamethrowerTurretPrefab);
	}

	public void PurchaseLaserTurret() {
		Debug.Log ("bullet turret selected");
		turretBuilder.SetTurretToBuild (turretBuilder.laserTurretPrefab);
	}
		
}
