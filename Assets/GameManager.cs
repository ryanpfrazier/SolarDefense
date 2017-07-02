﻿using System.Collections;
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
	}

	void EndTheGame () {
		Debug.Log ("GAME OVER DORK");
		gameOver = true;
	}
}
