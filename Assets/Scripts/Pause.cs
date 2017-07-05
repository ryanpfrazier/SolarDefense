using UnityEngine;

public class Pause : MonoBehaviour {

	public GameManager gameManager;

	public void Resume() {
		gameManager.Pause ();
	}

	public void MainMenu() {
		Debug.Log ("going to main menu");
	}

}
