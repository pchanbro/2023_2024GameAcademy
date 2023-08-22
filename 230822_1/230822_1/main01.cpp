#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//타임어택
	srand(time(NULL));

	int myHand[2];
	int comHand[2];

	cout << "내 왼손을 선택하세요 (0: 가위, 1 : 바위, 2: 보) : " << endl;
	cin >> myHand[0];

	cout << "내 오른손을 선택하세요 (0: 가위, 1 : 바위, 2: 보) : " << endl;
	cin >> myHand[1];

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}
	cout << endl;

	cout << "내 손 : ";
	for (int i = 0; i < 2; i++)
	{
		switch (myHand[i])
		{
		case 0: 
			cout << "가위";
			break;
		case 1:
			cout << "바위";
			break; 
		case 2:
			cout << "보";
			break;
		default:
			break;
		}
		cout << "\t";
	}
	cout << endl;

	cout << "컴퓨터 손 : ";
	for (int i = 0; i < 2; i++)
	{
		switch (comHand[i])
		{
		case 0:
			cout << "가위";
			break;
		case 1:
			cout << "바위";
			break;
		case 2:
			cout << "보";
			break;
		default:
			break;
		}
		cout << "\t";
	}
	cout << endl;

	int myFinalHand = 0;
	int input;

	cout << "최종 손을 선택하세요 (0 : 왼손, 1 : 오른손) : ";
	cin >> input;

	if (input == 0)
	{
		myFinalHand = myHand[0];
	}
	else if (input == 1)
	{
		myFinalHand = myHand[1];
	}

	int comFinalHand = 0;
	int tempComHand = rand() % 2;

	if (tempComHand == 0)
	{
		comFinalHand = comHand[0];
	}
	else if (tempComHand == 1)
	{
		comFinalHand = comHand[1];
	}

	cout << "나의 최종 선택 : ";
	switch (myFinalHand)
	{
	case 0:
		cout << "가위";
		break;
	case 1:
		cout << "바위";
		break;
	case 2:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "컴퓨터의 최종 선택 : ";
	switch (comFinalHand)
	{
	case 0:
		cout << "가위";
		break;
	case 1:
		cout << "바위";
		break;
	case 2:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "최종 결과 : ";
	if (myFinalHand == comFinalHand)
	{
		cout << "무승부" << endl;
	}
	else if ((myFinalHand == 0 && comFinalHand == 1) || (myFinalHand == 1 && comFinalHand == 2) || (myFinalHand == 2 && comFinalHand == 0))
	{
		cout << "플레이어 패배" << endl;
	}
	else
	{
		cout << "플레이어 승리" << endl;
	}
	
}