using UnityEngine;

public class Waypoints : MonoBehaviour {

	public static Transform[] points;

	void Awake () {
		// Find each waypoint and put into static array
		points = new Transform[transform.childCount];
		for (int i = 0; i < points.Length; i++) {
			points [i] = transform.GetChild (i);
		}
	}
}
