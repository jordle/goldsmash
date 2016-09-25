using UnityEngine;
using System.Collections;

public class DefenderController : MonoBehaviour {



	float dx;
	float dy;

	// Use this for initialization
	void Start () {
		StartCoroutine (repeatMoving ());
	}

	IEnumerator repeatMoving () {
		Debug.Log ("Repeat 1");
		while(true) {
			Debug.Log ("Repeat 2");
			dx = Random.Range (-1.7f, 1.7f);
			dy = Random.Range (-1.7f, 1.7f);
			float delay = Random.Range (0.5f, 1.5f);
			yield return new WaitForSeconds(delay);
		}
	}

	void Update () {
		if (transform.position.x < -1.0f || transform.position.x > 1.0f) {
			dx = -dx;
		}
		if (transform.position.y < -1.0f || transform.position.y > 1.0f) {
			dy = -dy;
		} 

		transform.Translate (-dx * Time.deltaTime, dy * Time.deltaTime, 0f);
	}
}
