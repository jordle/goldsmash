using UnityEngine;
using System.Collections;
using System;

public class Shooting : MonoBehaviour {

	[SerializeField]
	GameObject bullet;

	[SerializeField]
	GameObject bulletParent;

	float timeToShoot;
	float TimeToWait;

	// Use this for initialization
	void Start () {
		timeToShoot = 0;
		TimeToWait = UnityEngine.Random.Range(1, 4);
	}
	
	// Update is called once per frame
	void Update () {
		if (timeToShoot > TimeToWait)
		{
			timeToShoot = 0;
			TimeToWait = UnityEngine.Random.Range(1, 4);
			ShootBullet();
		}else
		{
			timeToShoot += Time.deltaTime;
		}
	}

	private void ShootBullet()
	{
		//print(transform.name + "shoot");
		GameObject go = Instantiate(bullet, bulletParent.transform) as GameObject;
		go.transform.position = bulletParent.transform.position;
		go.transform.rotation = bulletParent.transform.rotation;

	}
}
