using UnityEngine;
using System.Collections;
using System;

public class Shooting : MonoBehaviour {
	private const string ANIMATOR_TRIGGER_SHOOT = "Shoot";
	private const float TIME_TO_WAIT_ANIMATION = 1.0f;
	[SerializeField]
	GameObject bullet;

	[SerializeField]
	GameObject bulletParent;


	[SerializeField]
	private Animator animator;

	float timeToShoot;
	float TimeToWait;

	// Use this for initialization
	void Start () {
		timeToShoot = 0;
		TimeToWait = UnityEngine.Random.Range(1.5f, 4f);
	}
	
	// Update is called once per frame
	void Update () {
		if (timeToShoot > TimeToWait)
		{
			timeToShoot = 0;
			TimeToWait = UnityEngine.Random.Range(1, 4);
			StartCoroutine(ShootBullet());
		}else
		{
			timeToShoot += Time.deltaTime;
		}
	}

	IEnumerator ShootBullet()
	{
		//print(transform.name + "shoot");
		animator.SetTrigger(ANIMATOR_TRIGGER_SHOOT);
		yield return new WaitForSecondsRealtime(TIME_TO_WAIT_ANIMATION);
		GameObject go = Instantiate(bullet, bulletParent.transform) as GameObject;
		go.transform.position = bulletParent.transform.position;
		go.transform.rotation = bulletParent.transform.rotation;

	}
}
