using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class WaveSpawner : MonoBehaviour {

	public Transform enemyPrefab;
	public float timeBetweenWaves = 5f;
	public float timeBetweenEnemies;
	public Transform spawnPoint;
	private float countdown = 2f;
	public Text waveCountdownText;
	private int waveNumber = 1;
	private int enemiesToSpawn;

	void Update () {
		// when countdown ends, spawn the next wave
		if (countdown < 0f) {
			StartCoroutine(SpawnWave());
			countdown = timeBetweenWaves;
		}
		// decrement countdown based on real time passing
		// only after the last enemy of the wave spawns
		if (enemiesToSpawn <= 0) {
			countdown -= Time.deltaTime;
		}
		// update countdown timer UI
		waveCountdownText.text = Mathf.Clamp(Mathf.Floor(countdown + 1), 0, 5).ToString();
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
}