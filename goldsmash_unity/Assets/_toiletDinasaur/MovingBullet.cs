using UnityEngine;
using System.Collections;

public class MovingBullet : MonoBehaviour {

	[SerializeField]
	Rigidbody myRigidbody;

	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody>();
		myRigidbody.velocity.Set( 0,0,1);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
