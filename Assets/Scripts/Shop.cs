using UnityEngine;
using UnityEngine.UI;

[System.Serializable]
public class Shop : MonoBehaviour {

	TurretBuilder turretBuilder;
	[Header("Bullet Turret Attributes")]
	public TurretPrefabClass bulletTurret;
	public Text bulletTurretName;
	public Text bulletTurretCost;

	[Header("Flamethrower Turret Attributes")]
	public TurretPrefabClass flamethrowerTurret;
	public Text flamethrowerTurretName;
	public Text flamethrowerTurretCost;

	[Header("Laser Turret Attributes")]
	public TurretPrefabClass laserTurret;
	public Text laserTurretName;
	public Text laserTurretCost;

	void Start() {
		turretBuilder = TurretBuilder.builder;
		SetTurretCosts ();
		SetTurretNames () ;
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

	public void SetTurretCosts () {
		bulletTurretCost.text = "$" + bulletTurret.cost.ToString();
		flamethrowerTurretCost.text = "$" + flamethrowerTurret.cost.ToString();
		laserTurretCost.text = "$" + laserTurret.cost.ToString();
	}

	public void SetTurretNames () {
		bulletTurretName.text = bulletTurret.name;
		flamethrowerTurretName.text = flamethrowerTurret.name;
		laserTurretName.text = laserTurret.name;
	}
}
