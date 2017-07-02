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
	public Text waveCountdownText;
	private int waveNumber = 1;
	private int enemiesToSpawn = 0;
	public Text moneyText;

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
	
}