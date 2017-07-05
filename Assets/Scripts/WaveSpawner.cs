using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WaveSpawner : MonoBehaviour {

	[Header("Wave Attributes")]
	public Transform enemyPrefab;
	public float timeBetweenWaves = 5f;
	public float timeBetweenEnemies;

	public Transform spawnPoint;
	private float countdown = 2f;
	public int waveNumber = 1;
	private int enemiesToSpawn = 0;

	[Header("Canvas Texts")]
	public Text waveCountdownText;
	public Text moneyText;
	public Text livesText;
	public Text waveNumberText;

	void Update () {
		// when countdown ends, spawn the next wave
		if (countdown <= 0f) {
			StartCoroutine(SpawnWave());
			countdown = timeBetweenWaves;
		}
		// decrement countdown based on real time passing
		// only after the last enemy of the wave spawns
		if (enemiesToSpawn <= 0) {
			countdown -= Time.deltaTime;
		}
		UpdateWaveCountdown();
		UpdateMoney();
		UpdateLives ();
		UpdateWaveNumber ();
	}

	// needs to be IEnumerator in order to do a coroutine
	// (which allows for us to wait between method calls)
	IEnumerator SpawnWave () {
		enemiesToSpawn = waveNumber;
		for (int i = 0; i < waveNumber; i++) {
			SpawnEnemy ();
			enemiesToSpawn--;
			// allows for enemies to spawn with a bit of time between them
			yield return new WaitForSeconds (timeBetweenEnemies);
		}
		waveNumber++;
		Stats.waves++;
	}

	void SpawnEnemy () {
		Instantiate (enemyPrefab, spawnPoint.position, spawnPoint.rotation);
	}

	void UpdateWaveCountdown () {
		countdown = Mathf.Clamp (countdown, 0, Mathf.Infinity);
		waveCountdownText.text = string.Format("{0:0.00}", countdown);
	}

	void UpdateMoney () {
		moneyText.text = "$" + Stats.Cash;
	}

	void UpdateLives() {
		if (Stats.Lives == 1) {
			livesText.text = Stats.Lives + " Life";
		} else {
			livesText.text = Mathf.Clamp(Stats.Lives, 0f, Mathf.Infinity) + " Lives";
		}
	}

	void UpdateWaveNumber() {
		if (waveNumber == 1) {
			waveNumberText.text = "Wave 1";
		} else {
			waveNumberText.text = "Wave " + (waveNumber - 1);
		}
	}
	
}