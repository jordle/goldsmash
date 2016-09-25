using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class GameController : MonoBehaviour
{

	private const int TIME_TO_START = 10;
	private const int TIME_TO_FINISH = 45;
	[SerializeField]
	public Text txtTime;
	[SerializeField]
	public Text txtCoins;
	[SerializeField]
	public Text txtMessage;

	public GameObject Enemies;

	[SerializeField]
	float timeToStart = TIME_TO_START;
	[SerializeField]
	float timeToFinish = TIME_TO_FINISH;

	[SerializeField]
	int myCoins = 763;

	[SerializeField]
	private int MinCoinsToLoose;
	[SerializeField]
	private int MaxCoinsToLoose;



	enum GameStatus
	{
		Starting,
		Playing,
		WaitingToStart
	}

	GameStatus myGameStatus;
	private string actualMessage;

	static public GameController instance;

	[SerializeField]
	private bool isDebug=false;

	public void Awake()
	{
		if (!instance)
			instance = this;
	}

	// Use this for initialization
	void Start()
	{
		SetCanvasText();
		myGameStatus = GameStatus.WaitingToStart;
		Enemies.SetActive(false);
	}

	private void SetCanvasText()
	{
		txtCoins.text = string.Concat("Coins: ", myCoins);
		txtTime.text = string.Concat("Time: ", Mathf.RoundToInt(timeToFinish));
		txtMessage.text = actualMessage;
	}

	// Update is called once per frame
	void Update()
	{
		if (myGameStatus == GameStatus.Starting)
		{
			timeToStart -= Time.deltaTime;
			actualMessage = string.Concat(Mathf.RoundToInt(timeToStart));

			if (timeToStart <= 0)
			{
				myGameStatus = GameStatus.Playing;
				Enemies.SetActive(true);
				timeToStart = TIME_TO_START;
				timeToFinish = TIME_TO_FINISH;
				actualMessage = "";
			}
		}
		else if (myGameStatus == GameStatus.Playing)
		{
			timeToFinish -= Time.deltaTime;
			if (timeToFinish <= 0)
			{
				myGameStatus = GameStatus.WaitingToStart;
				Enemies.SetActive(false);
				timeToStart = TIME_TO_START;
				timeToFinish = TIME_TO_FINISH;
				actualMessage = "Game Over";
			}
		}
		else if (myGameStatus == GameStatus.WaitingToStart)
		{
			//print("waiting");
			actualMessage = "Press any button to start";
			if (OVRInput.GetDown(OVRInput.Button.Any) ||isDebug)
			{
				//print("starting");
				myGameStatus = GameStatus.Starting;
				Enemies.SetActive(false);
				timeToStart = TIME_TO_START;
				timeToFinish = TIME_TO_FINISH;
				actualMessage = "";

			}
		}
		SetCanvasText();

	}

	public void LoseCoins()
	{
		myCoins -= UnityEngine.Random.Range(MinCoinsToLoose, MaxCoinsToLoose);
		if (myCoins < 0)
			myCoins = 0;
	}
}
