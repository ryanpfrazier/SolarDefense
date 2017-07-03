using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserTurret : MonoBehaviour {
	
	private Transform target;
	private LineRenderer laser;

	[Header("Turret Attributes")]

	public float range = 15f;
	public float fireRate = 1000f;
	private float fireCountdown = 0f;
	public Transform laserPoint;
	public Transform laserPointBack;
	public GameObject laserParticles;

	[Header("Turret Settings")]
	public string enemyTag = "Enemy";
	public Transform rotationPoint; 
	public float rotationSpeed;


	// Shows Turret Range
	void OnDrawGizmosSelected () {
		Gizmos.color = Color.red;
		Gizmos.DrawWireSphere (transform.position, range);
	}

	void Start () {
		// Only call update target twice per second (saves computing power)
		laser = GetComponent<LineRenderer> ();
		InvokeRepeating ("UpdateTarget", 0f, .5f);
	}

	void Update () {
		if (target == null) {
			DeleteLaser ();
			return;
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
		Vector3 rotation = Quaternion.Lerp(rotationPoint.rotation, lookRotation, Time.deltaTime * rotationSpeed).eulerAngles;
		// Only rotating around Y-Axis
		rotationPoint.rotation = Quaternion.Euler (0f, rotation.y, 0f);
	}

	void TurretFire() {
		float targetDistance = Vector3.Distance (transform.position, target.position);
		RaycastHit hit;
		if (fireCountdown <= 0f) {
			if (targetDistance <= range) {
				if (Physics.Raycast(laserPointBack.position, (laserPoint.position - laserPointBack.position), out hit, Mathf.Infinity)) {
					if (hit.collider.tag == "Enemy") {
						Shoot ();
					}
				}
				fireCountdown = 1f / fireRate;
			} else {
				DeleteLaser ();
			}
		}
		fireCountdown -= Time.deltaTime;
	}

	void Shoot() {
		laser.SetPosition (0, laserPoint.position);
		laser.SetPosition (1, target.transform.position);
		Vector3 dir = laserPoint.position - target.position;
		GameObject particles = (GameObject)Instantiate (laserParticles, target.position, Quaternion.LookRotation(dir));
		Destroy (particles, 0.1f);
	}

	void DeleteLaser() {
		laser.SetPosition (0, laserPoint.position);
		laser.SetPosition (1, laserPoint.position);
	}
}
