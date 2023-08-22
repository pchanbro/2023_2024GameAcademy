#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));

	int myHand[2];
	int comHand[2];

	cout << "나의 왼쪽 손을 선택하세요(0 : 가위, 1 : 바위, 2: 보) : " << endl;
	cin >> myHand[0];

	cout << "나의 오른쪽 손을 선택하세요(0 : 가위, 1 : 바위, 2: 보) : " << endl;
	cin >> myHand[1];

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	cout << "내가 낸 것 : ";
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
		}
		cout << "\t";
	}
	cout << endl;

	cout << "컴퓨터가 낸 것 : ";
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
		}
		cout << "\t";
	}
	cout << endl;

	int myFinalHand;
	int comFinalHand;
	int choice;

	cout << "최종 손을 선택하세요( 0 : 왼손, 1 : 오른손) : ";
	cin >> choice;

	if (choice == 0)
	{
		myFinalHand = myHand[0];
	}
	else if (choice == 1)
	{
		myFinalHand = myHand[1];
	}

	comFinalHand = comHand[rand() % 2];

	cout << "나의 최종 손 : ";
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
	}
	cout << endl;

	cout << "컴퓨터의 최종 손 : ";
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
	}
	cout << endl;

	cout << "결과 : ";
	if (myFinalHand == comFinalHand)
	{
		cout << "무승부" << endl;
	}
	else if ((myFinalHand == 0 && comFinalHand == 1) || (myFinalHand == 1 && comFinalHand == 2) || (myFinalHand == 2 && comFinalHand == 0))
	{
		cout << "패배" << endl;
	}
	else
	{
		cout << "승리" << endl;
	}
}