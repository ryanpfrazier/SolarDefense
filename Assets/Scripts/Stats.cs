using UnityEngine;

public class Stats : MonoBehaviour {

	public static int Cash;
	public int startingCash = 400;
	public static int Lives;
	public int startingLives = 20;
	public static int waves;

	void Start () {
		Cash = startingCash;
		Lives = startingLives;
	}
}
