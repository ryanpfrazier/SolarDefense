using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenu : MonoBehaviour {

	void Start () {
		Time.timeScale = 0;
	}
	
	public void StartGame() {
		GameManager.gameOn = true;
		Time.timeScale = 1;
	}
}
