using UnityEngine;
using System.Collections;

public class BallController : MonoBehaviour {

	public GameObject cannonBall;

	// Use this for initialization
	void Start () {
		
	}

	void Update () {
		if (Input.touchCount > 0) {
			Touch touch = Input.GetTouch (0);
			if (touch.phase == TouchPhase.Began) {
				Vector3 pos = touch.position;
				pos.z = 2;
				Vector3 realWorldPos = Camera.main.ScreenToWorldPoint(pos);
				Debug.Log ("Real pos: " + realWorldPos);
				GameObject ball = (GameObject) Instantiate(cannonBall, realWorldPos, transform.rotation);  

				Rigidbody rb = ball.GetComponent<Rigidbody>();

				Vector3 vel = new Vector3(realWorldPos.x + Random.Range (-0.7f, 0.7f), 5 + Random.Range (-0.7f, 0.7f), 4 + Random.Range (-1.0f, 1.0f));
				rb.velocity = vel;
			
				Destroy(ball, 3);
			}
		}
	}
}
