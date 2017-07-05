using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	public static bool gameOver;
	public static bool pause;
	public GameObject gameOverUI;
	public GameObject pauseUI;
	public CameraScript camera;

	void Start () {
		gameOver = false;
		pause = false;
		gameOverUI.SetActive (false);
		pauseUI.SetActive (false);
	}

	void Update () {
		if (gameOver) {
			return;
		}
		if (Stats.Lives <= 0) {
			EndTheGame ();
		}
		if (Input.GetKeyDown(KeyCode.P)) {
			Pause ();
		}
		if (Input.GetKeyDown(KeyCode.E)) {
			EndTheGame ();
		}
	}

	void EndTheGame () {
		gameOver = true;
		gameOverUI.SetActive (true);
	}

	public void Pause () {
		if (Time.timeScale == 1) {
			camera.enabled = false;
			pauseUI.SetActive (true);
			Time.timeScale = 0;
		} else {
			camera.enabled = true;
			pauseUI.SetActive (false);
			Time.timeScale = 1;
		}
	}


}
