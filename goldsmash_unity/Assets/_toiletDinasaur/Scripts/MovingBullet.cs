using UnityEngine;
using System.Collections;
using System;

public class MovingBullet : MonoBehaviour
{
	private const string TAG_DEFENSE = "Defence";
	private const string TAG_GOLD = "Gold";

	[SerializeField]
	Rigidbody myRigidbody;

	[SerializeField]
	float mySpeed = -5;

	[SerializeField]
	float timeToDestroy = 5;

	// Use this for initialization
	void Start()
	{
		myRigidbody = GetComponent<Rigidbody>();
		//print(Vector3.forward * myVelocity);
		//myRigidbody.AddForce(Vector3.forward* myVelocity);
		Destroy(gameObject, timeToDestroy);
	}

	// Update is called once per frame
	void Update()
	{
		//float myZ = transform.position.z;
		//myZ += myVelocity * Time.deltaTime;
		//transform.position=new Vector3(transform.position.x, transform.position.y, myZ);
		transform.Translate(0, 0, mySpeed * Time.deltaTime);
	}


	public void OnTriggerEnter(Collider other)
	{
		//print(other.name);
		if (other.tag == TAG_DEFENSE)
		{
			print(TAG_DEFENSE);
			BulletHitDefense();
		}
		else if (other.tag == TAG_GOLD)
		{
			//print(TAG_DEFENSE);
			BulletHitGold();
		}
	}

	private void BulletHitGold()
	{
		AudioSource.PlayClipAtPoint(AudioManager.instance.BulletHittingGoldSound, transform.position);
		GameController.instance.LoseCoins();
		Destroy(gameObject, 0.1f);
	}

	private void BulletHitDefense()
	{

		//AudioScript.gameObject.GetComponent<AudioSource>().PlayOneShot(AudioClip  Sound);
		AudioSource.PlayClipAtPoint(AudioManager.instance.BulletHittingDefenseSound, transform.position);
		Destroy(gameObject, 0.1f);
	}
}
