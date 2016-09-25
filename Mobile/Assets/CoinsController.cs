using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CoinsController : MonoBehaviour {

	int score;
	public ParticleSystem coinspray;
	public Text txtCoinCount;
	public AudioClip coinSound;

	// Use this for initialization
	void Start () {
		score = 1263;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.tag == "ball") {
			Destroy (other.gameObject);
			coinspray.Play ();
			score += 7;
			txtCoinCount.text = "COINS: " + score;
			AudioSource.PlayClipAtPoint(coinSound, Camera.main.transform.position);
		}
	}
}
