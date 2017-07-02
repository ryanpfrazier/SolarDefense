using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class Shop : MonoBehaviour {

	TurretBuilder turretBuilder;
	public TurretPrefabClass bulletTurret;
	public TurretPrefabClass flamethrowerTurret;
	public TurretPrefabClass laserTurret;
	public Text bulletTurretCost;
	public Text flamethrowerTurretCost;
	public Text laserTurretCost;

	void Start() {
		turretBuilder = TurretBuilder.builder;
		bulletTurretCost.text = "$" + bulletTurret.cost.ToString();
		flamethrowerTurretCost.text = "$" + flamethrowerTurret.cost.ToString();
		laserTurretCost.text = "$" + laserTurret.cost.ToString();
	}

	public void SelectBulletTurret() {
		Debug.Log ("bullet turret selected");
		turretBuilder.SelectTurretToBuild (bulletTurret);
	}

	public void SelectFlamethrowerTurret() {
		Debug.Log ("flame turret selected");

		turretBuilder.SelectTurretToBuild (flamethrowerTurret);
	}

	public void SelectLaserTurret() {
		Debug.Log ("laser turret selected");
		turretBuilder.SelectTurretToBuild (laserTurret);
	}
		
}
