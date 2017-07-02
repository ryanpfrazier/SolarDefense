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
		turretBuilder.SelectTurretToBuild (bulletTurret);
	}

	public void SelectFlamethrowerTurret() {
		turretBuilder.SelectTurretToBuild (flamethrowerTurret);
	}

	public void SelectLaserTurret() {
		turretBuilder.SelectTurretToBuild (laserTurret);
	}
		
}
