using UnityEngine;

public class Bullet : MonoBehaviour {

	private Transform target;
	public int damage;
	public float speed;
	public GameObject bulletImpactParticle;

	public void ChaseTarget (Transform bulletTarget) {
		target = bulletTarget;
	}

	void Update () {
		if (target == null) {
			Destroy (gameObject);
			return;
		}
		// Direction for bullet
		Vector3 dir = target.position - transform.position;
		// speed to move each frame
		float distanceToMove = speed * Time.deltaTime;
		// When bullet reaches target
		if (dir.magnitude <= distanceToMove) {
			HitTarget ();
			return;
		}
		// move and face towards target
		transform.Translate (dir.normalized * distanceToMove, Space.World);
	}
	// Create particle impact on target hit,
	// destroy particle after 1.5 seconds, destroy bullet
	void HitTarget() {
		GameObject particleImpact = (GameObject)Instantiate (bulletImpactParticle, transform.position, transform.rotation);
		Destroy (particleImpact, 1.5f);
		// TODO: Change this so that it depends on enemy health!!!
//		GameObject e = (GameObject)Enemy.
		Destroy (target.gameObject);
		Destroy (gameObject);
		Stats.Cash += 10;
	}
}
