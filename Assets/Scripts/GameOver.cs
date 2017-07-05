using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour {

	public Text wavesSurvived;

	void Start() {
		wavesSurvived.text = Stats.waves.ToString ();
	}

	public void Retry() {
		SceneManager.LoadScene (0);
	}
}
