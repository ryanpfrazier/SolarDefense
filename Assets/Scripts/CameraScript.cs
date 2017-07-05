using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour {

	public float panSpeed = 0.5f;
	public float border = 10f;
	private bool canMove = true;
	public float scrollSpeed = 5f;
	public float minScroll = 20;
	public float maxScroll = 100;
	private float minX = -52f;
	private float maxX = 11f;
	private float minZ = -7f;
	private float maxZ = 55f;



	void Update () {
		if (Input.GetKeyDown(KeyCode.Tab)) {
			canMove = !canMove;
		}
		// Use Escape to stop movement controls
		// TODO: Should probably put the controls
		// TODO: in a home screen to let user know
		if (!canMove) {
			return;
		}
		if (Input.GetKey("w") || Input.mousePosition.y >= Screen.height - border) {
			transform.Translate (Vector3.forward * panSpeed, Space.World);
		}
		if (Input.GetKey("a") || Input.mousePosition.x <= border) {
			transform.Translate (Vector3.left * panSpeed, Space.World);
		}
		if (Input.GetKey("s") || Input.mousePosition.y <= border) {
			transform.Translate (Vector3.back * panSpeed, Space.World);
		}
		if (Input.GetKey("d") || Input.mousePosition.x >= Screen.width - border) {
			transform.Translate (Vector3.right * panSpeed, Space.World);
		}
		// Zoom controlling 
		float scroll = Input.GetAxis ("Mouse ScrollWheel");
		Vector3 scrollPos = transform.position;
		scrollPos.y -= scroll * 50 * scrollSpeed * Time.deltaTime;
		// Don't let camera go too far
		scrollPos.y = Mathf.Clamp(scrollPos.y, minScroll, maxScroll);
		scrollPos.x = Mathf.Clamp (scrollPos.x, minX, maxX);
		scrollPos.z = Mathf.Clamp (scrollPos.z, minZ, maxZ);
		transform.position = scrollPos;
	}
}
