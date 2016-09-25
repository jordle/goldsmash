using UnityEngine;
using System.Collections;

public class AudioManager : MonoBehaviour {

	public static AudioManager instance;
	private AudioSource audioSource;

	public AudioClip Music;
	public AudioClip BulletHittingDefenseSound;
	public AudioClip BulletHittingGoldSound;

	void Awake()
	{
		instance = this;
		audioSource = GetComponent<AudioSource>();

		PlayMusic();
		
	}


	void Update()
	{
	

	}

	public void PlayMusic()
	{
		audioSource.clip = Music;
		audioSource.Play();
	}

	public void StopMusic()
	{
		audioSource.Stop();
	}
}
