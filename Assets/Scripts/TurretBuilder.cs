using UnityEngine;

public class TurretBuilder : MonoBehaviour {

	public static TurretBuilder builder;

	void Awake () {
		builder = this;
	}

	public GameObject bulletTurretPrefab;
	public GameObject flamethrowerTurretPrefab;
	public GameObject laserTurretPrefab;
	private TurretPrefabClass turretToBuild;

	public bool CanBuild { get { return turretToBuild != null; } }
	public bool EnoughMoneyToBuild { get { return Stats.Cash >= turretToBuild.cost; } }

	public void SelectTurretToBuild (TurretPrefabClass turret) {
		turretToBuild = turret;
	}

	public void BuildTurretOn(Node node) {
		if (!EnoughMoneyToBuild) {
			// Tell player they need more money?
			return;
		}
		// Decrease player's cash equal to cost of turret
		Stats.Cash -= turretToBuild.cost;
		Debug.Log (Stats.Cash);

		Vector3 buildArea = new Vector3 (node.transform.position.x, node.transform.position.y + 0.5f, node.transform.position.z);
		GameObject turret = (GameObject)Instantiate (turretToBuild.prefab, buildArea, Quaternion.identity);
		node.turret = turret; 
	}

}
