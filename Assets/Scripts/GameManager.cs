using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	public static bool gameOver;
	public static bool pause;
	public static bool gameOn;
	public GameObject gameOverUI;
	public GameObject pauseUI;
	public GameObject mainMenuUI;
	public CameraScript camera;

	void Start () {
		mainMenuUI.SetActive (true);
		gameOn = false;
		gameOver = false;
		pause = false;
		gameOverUI.SetActive (false);
		pauseUI.SetActive (false);
	}

	void Update () {
		if (gameOver) {
			return;
		}
		if (gameOn) {
			camera.enabled = true;
			mainMenuUI.SetActive (false);
		}
		if (Stats.Lives <= 0) {
			EndTheGame ();
		}
		if (Input.GetKeyDown(KeyCode.P)) {
			Pause ();
		}
	}

	void EndTheGame () {
		gameOver = true;
		gameOverUI.SetActive (true);
	}

	public void Pause () {
		if (Time.timeScale == 1) {
			pauseUI.SetActive (true);
			Time.timeScale = 0;
		} else {
			pauseUI.SetActive (false);
			Time.timeScale = 1;
		}
	}


}
