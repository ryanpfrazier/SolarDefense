using UnityEngine;

public class Enemy : MonoBehaviour {

	public float speed = 10f;

	private Transform target;
	private float dist;
	private int waypointIndex;

	void Start () {
		target = Waypoints.points [0];
	}

	void Update () {
		dist = Vector3.Distance (transform.position, target.position);
		ChangeTarget ();
		Vector3 dir = target.position - transform.position;
		transform.Translate (dir.normalized * speed * Time.deltaTime, Space.World);
	}

	void ChangeTarget() {
		if (dist <= 0.25f) {
			waypointIndex++;
		}
		if (waypointIndex >= Waypoints.points.Length) {
			Destroy (gameObject);
		}
		target = Waypoints.points [waypointIndex];
	}
}
