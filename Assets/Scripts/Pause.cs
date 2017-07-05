using UnityEngine;
using UnityEngine.SceneManagement;

public class Pause : MonoBehaviour {

	public GameManager gameManager;

	public void Resume() {
		gameManager.Pause ();
	}

	public void MainMenu() {
		SceneManager.LoadScene (0);
	}
}
