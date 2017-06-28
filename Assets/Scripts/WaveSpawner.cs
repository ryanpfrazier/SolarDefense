using UnityEngine;
using System.Collections;

public class WaveSpawner : MonoBehaviour {

	public Transform enemyPrefab;
	public float timeBetweenWaves = 5f;
	public float timeBetweenEnemies;
	public Transform spawnPoint;
	private float countdown = 2f;
	private int waveNumber = 1;

	void Update () {
		if (countdown <= 0f) {
			StartCoroutine(SpawnWave());
			countdown = timeBetweenWaves;
		}
		countdown -= Time.deltaTime;
	}

	IEnumerator SpawnWave () {
		for (int i = 0; i < waveNumber; i++) {
			SpawnEnemy ();
			yield return new WaitForSeconds (timeBetweenEnemies);
		}
		waveNumber++;
	}

	void SpawnEnemy () {
		Instantiate (enemyPrefab, spawnPoint.position, spawnPoint.rotation);
	}
}
