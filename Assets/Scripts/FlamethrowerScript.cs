using UnityEngine;

public class FlamethrowerScript : MonoBehaviour {

	private Transform target;
	public Transform firePoint;
	public float speed;


	public void ChaseTarget (Transform flameTarget) {
		target = flameTarget;
	}
	
	// Update is called once per frame
	void Update () {
		if (target == null) {
			Debug.Log ("target is null");
			Destroy (gameObject);
			return;
		}
		HitTarget ();
	}

	void HitTarget() {
		Debug.Log ("hit");
		// TODO: Change this so that it depends on enemy health!!!
		Destroy (target.gameObject, 0.5f);
		Destroy (gameObject, 0.5f);
	}

}
