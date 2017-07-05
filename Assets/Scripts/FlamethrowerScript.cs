using UnityEngine;

public class FlamethrowerScript : MonoBehaviour {

	private Transform target;
	public Transform firePoint;
	public float damageRadius;
	public float speed;
	public int damageAmount;
	public GameObject flameParticleImpact;
	public GameObject empty;

	public void ChaseTarget (Transform flameTarget) {
		target = flameTarget;
	}

	// Update is called once per frame
	void Update () {
		if (target == null) {
			Destroy (gameObject);
			return;
		}
		MoveFlame ();
		HitTarget ();
	}

	void HitTarget() {
		// TODO: Change this so that it depends on enemy health!!!
//		MakeExplosion ();
		if (damageRadius > 0f) {
			Explode ();
		} else {
			Damage (target);
		}
	}

	void MoveFlame () {
		// Direction for bullet
		Vector3 dir = target.position - transform.position;
		// speed to move each frame
		float distanceToMove = speed * Time.deltaTime;
		// When bullet reaches target
//		if (dir.magnitude <= distanceToMove) {
//			HitTarget ();
//			return;
//		}
		// move and face towards target
		transform.Translate (dir.normalized * distanceToMove, Space.World);
	}

	void Explode() {
		Collider[] colliders = Physics.OverlapSphere (transform.position, damageRadius);
		foreach (Collider collider in colliders) {
			if (collider.tag == "Enemy") {
				Damage (collider.transform);
			} 
		}
	}

	void Damage(Transform enemy) {
		HealthDown(enemy);
		if (target.transform.Find ("Empty(Clone)")) {
//			Destroy (enemy.gameObject, 1f);
			return;
		}
		GameObject emptyObj = (GameObject)Instantiate (empty, target.position, target.rotation);
		emptyObj.transform.parent = target.transform;
		// Make sure to check the destroying enemy.gameobject on health down
		MakeExplosion ();
//		Stats.Cash += 10;
	}

	void OnDrawGizmosSelected () {
		Gizmos.color = Color.red;
		Gizmos.DrawWireSphere (transform.position, damageRadius);
	}

	void MakeExplosion () {
		if (target.transform.Find ("FireExplosion(Clone)")) {
			return;
		}
		GameObject particleImpact = (GameObject)Instantiate (flameParticleImpact, target.position, target.rotation);
		Destroy (particleImpact, 0.25f);
	}

	void HealthDown (Transform enemy) {
		Enemy e = enemy.GetComponent<Enemy> ();
		if (e != null) {
			e.SubtractHealth (damageAmount);
		}
	}
}
