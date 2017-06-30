using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shop : MonoBehaviour {

	TurretBuilder turretBuilder;

	void Start() {
		turretBuilder = TurretBuilder.builder;
	}

	public void PurchaseBulletTurret() {
		turretBuilder.SetTurretToBuild (turretBuilder.bulletTurretPrefab);
	}

	public void PurchaseFlamethrowerTurret() {
		turretBuilder.SetTurretToBuild (turretBuilder.flamethrowerTurretPrefab);
	}

	public void PurchaseLaserTurret() {
		turretBuilder.SetTurretToBuild (turretBuilder.laserTurretPrefab);
	}


}
