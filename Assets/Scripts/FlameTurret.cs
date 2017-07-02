using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlameTurret : MonoBehaviour {

	private Transform target;

	[Header("Turret Attributes")]

	public float range = 15f;
	public float fireRate = 0.01f;
	private float fireCountdown = 0f;
	public GameObject flamethrowerPrefab;
	public Transform flamePoint;
	private GameObject flame;

	[Header("Turret Settings")]
	public string enemyTag = "Enemy";
	public Transform rotationPoint; 
	public float rotationSpeed = 100f;


	// Shows Turret Range
	void OnDrawGizmosSelected () {
		Gizmos.color = Color.red;
		Gizmos.DrawWireSphere (transform.position, range);
	}

	void Start () {
		// Only call update target twice per second (saves computing power)
		InvokeRepeating ("UpdateTarget", 0f, .1f);
	}

	void Update () {
		if (target == null) {
			return;
		}
		if (flame != null) {
			flame.transform.position = flamePoint.position;
		}
		LockOnAndRotate ();
		TurretFire ();
	}
		
	void UpdateTarget () {
		float shortestDistance = Mathf.Infinity;
		GameObject[] enemies = GameObject.FindGameObjectsWithTag (enemyTag);
		GameObject nearestTarget = null;
		foreach (GameObject enemy in enemies) {
			float distanceToEnemy = Vector3.Distance (transform.position, enemy.transform.position);
			// Check which enemy is the closest to turret
			if (distanceToEnemy <= shortestDistance) {
				nearestTarget = enemy;
				shortestDistance = distanceToEnemy;
			}
		}
		// check if nearest target is in range, and set them to the actual target if so
		if (nearestTarget != null) {
			target = nearestTarget.transform;
		}
	}

	void LockOnAndRotate () {
		// Turret locking on to target
		Vector3 direction = target.position - transform.position;
		Quaternion lookRotation = Quaternion.LookRotation(direction);
		// Rotating turret smoothly (lerp) 
		// Rotate to look at 
		Vector3 rotation = Quaternion.Lerp(rotationPoint.rotation, lookRotation, Time.deltaTime * rotationSpeed).eulerAngles;
		// Only rotating around Y-Axis
		rotationPoint.rotation = Quaternion.Euler (0f, rotation.y, 0f);
	}

	void TurretFire() {
		float targetDistance = Vector3.Distance (transform.position, target.position);
		if (fireCountdown <= 0f && targetDistance <= range) {
			Shoot ();
//			fireCountdown = 1f / fireRate;
		}
		fireCountdown -= Time.deltaTime;
	}

	void Shoot() {
		flame = (GameObject)Instantiate (flamethrowerPrefab, flamePoint.position, flamePoint.rotation);
		FlamethrowerScript flamethrowerScript = flame.GetComponent<FlamethrowerScript> ();
		if (flamethrowerScript != null) {
			flamethrowerScript.ChaseTarget (target);
		}
	}
}
