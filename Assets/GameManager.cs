using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	private bool gameOver = false;

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
	}

	void EndTheGame () {
		Debug.Log ("GAME OVER DORK");
		gameOver = true;
	}

	void Pause () {
		if (Time.timeScale == 1) {
			Time.timeScale = 0;
		} else {
			Time.timeScale = 1;
		}
	}
}
