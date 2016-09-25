using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

public class GameController : MonoBehaviour
{

	[SerializeField]
	private float Vibration_Freq = 50f;
	//[Range(0,1)]
	[SerializeField]
	private float Vibration_Amp = 1;

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

	[SerializeField]
	private ParticleSystem coinspray;


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

	[SerializeField]
	private float TimeToStopVibration = .5f;
	private float ActualTimeToStopVibrationL = .5f;
	private float ActualTimeToStopVibrationR = .5f;
	private bool IsVibratingL;
	private bool IsVibratingR;
	//private OVRInput.Controller TouchToVibrate;

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
		IsVibratingL = false;
		IsVibratingR = false;


		ActualTimeToStopVibrationL = TimeToStopVibration;
		ActualTimeToStopVibrationR = TimeToStopVibration;
	}


	public void Vibrate(OVRInput.Controller TouchCont)
	{
		if (TouchCont == OVRInput.Controller.LTouch)
		{
			IsVibratingL = true;
		}
		else
			IsVibratingR = true;
		OVRInput.SetControllerVibration(Vibration_Freq, Vibration_Amp, TouchCont);

	}

	// Update is called once per frame
	void Update()
	{

		if (IsVibratingL)
		{
			if (ActualTimeToStopVibrationL > 0)
			{
				ActualTimeToStopVibrationL -= Time.deltaTime;
			}else
			{
				IsVibratingL = false;
				ActualTimeToStopVibrationL = TimeToStopVibration;
				OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.LTouch);
			}
		}

		if (IsVibratingR)
		{
			if (ActualTimeToStopVibrationR > 0)
			{
				ActualTimeToStopVibrationR -= Time.deltaTime;
			}
			else
			{
				IsVibratingR = false;
				ActualTimeToStopVibrationR = TimeToStopVibration;
				OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.RTouch);
			}
		}


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



	private void SetCanvasText()
	{
		txtCoins.text = string.Concat("Coins: ", myCoins);
		txtTime.text = string.Concat("Time: ", Mathf.RoundToInt(timeToFinish));
		txtMessage.text = actualMessage;
	}


	public void LoseCoins()
	{
		myCoins -= UnityEngine.Random.Range(MinCoinsToLoose, MaxCoinsToLoose);
		if (myCoins < 0)
			myCoins = 0;

	coinspray.Play();

	}
}
