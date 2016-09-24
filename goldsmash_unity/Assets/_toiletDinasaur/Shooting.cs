using UnityEngine;
using System.Collections;
using System;

public class Shooting : MonoBehaviour {

	[SerializeField]
	GameObject bullet;

	[SerializeField]
	GameObject bulletParent;

	float timeToShoot;

	// Use this for initialization
	void Start () {
		timeToShoot = 0;
	}
	
	// Update is called once per frame
	void Update () {
		if (timeToShoot > 3.0)
		{
			timeToShoot = 0;
			ShootBullet();
		}else
		{
			timeToShoot += Time.deltaTime;
		}
	}

	private void ShootBullet()
	{
		print(transform.name + "shoot");
		GameObject go = Instantiate(bullet, bulletParent.transform) as GameObject;
		go.transform.position = bulletParent.transform.position;
		go.transform.rotation = bulletParent.transform.rotation;

	}
}
