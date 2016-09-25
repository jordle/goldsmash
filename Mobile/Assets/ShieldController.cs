using UnityEngine;
using System.Collections;

public class ShieldController : MonoBehaviour {

	public AudioClip breakSound;

	void OnTriggerEnter(Collider other)
	{
		if (other.gameObject.tag == "ball") {
			AudioSource.PlayClipAtPoint (breakSound, Camera.main.transform.position);
			Destroy (other.gameObject);
		}
	}
}
