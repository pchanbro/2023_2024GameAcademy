#include <iostream>
#include <time.h>
using namespace std;


void main()
{
	srand(time(NULL));

	//가위바위보 하나빼기
	
	//수도코드
	
	//내가 낼것을 myHand[2]라고 부른다.
	//myHand[0]은 왼손이 낼것
	//myHand[1]은 오른손이 낼것 이라고 정의한다.
	//[입력]왼손이 낼것을 정한다.
	//[입력]오른손이 낼것을 정한다.
	
	//컴퓨터가 낼것을 comHand[2]라고 부른다.
	//comHand[0]은 왼손이 낼것
	//comHand[1]은 오른손이 낼것이라고 정의한다.
	//comHand[0] 은 0~2사이 중에 랜덤값으로 정한다.
	//comHand[1] 은 0~2사이 중에 랜덤값으로 정한다.

	// 내가 낸것 두개를 출력한다.
	// 상대방이 낸것 두개를 출력한다.

	// 나의 최종적으로 고를 손을 정한다. (0 : 왼손, 1 : 오른손)
	// 나의 최종적으로 고른손을 myHandFinal이라고 정의한다.
	// 내가 왼손(0)을 골랐으면 
	//		myHandFinal 값은 myHand[0]을 넣어준다.
	// 내가 오른손(1)을 골랐으면
	//		myHandFinal 값은 myHand[1]을 넣어준다.

	// 컴퓨터가 최종적으로 고를 손을 정한다 (0 ~ 1 랜덤)
	// 컴퓨터의 최종손은 comHandFinal이라고 정의힌다.
	// 컴퓨터의 최종손이 왼손(0)이면
	//		comHandFinal = comHand[0]을 넣어준다.
	// 컴퓨터의 최종손이 오른손(1)이면
	//		comHandFinal = comHand[1]을 넣어준다.

	// 나의 최종손과, 컴퓨터의 최종손을 출력한다.
	// myHandFinal과 comHandFinal의 승패비교를 한다.



	//내가 낼것을 myHand[2]라고 부른다.
	//myHand[0]은 왼손이 낼것
	//myHand[1]은 오른손이 낼것 이라고 정의한다.
	//[입력]왼손이 낼것을 정한다.
	//[입력]오른손이 낼것을 정한다.
	int myHand[2] = {};
	cout << "왼손이 낼것을 입력해주세요 (0: 가위, 1: 바위, 2: 보)" << endl;
	cin >> myHand[0];

	cout << "오른손이 낼것을 입력해주세요 (0: 가위, 1: 바위, 2: 보)" << endl;
	cin >> myHand[1];



	//컴퓨터가 낼것을 comHand[2]라고 부른다.
	//comHand[0]은 왼손이 낼것
	//comHand[1]은 오른손이 낼것이라고 정의한다.
	//comHand[0] 은 0~2사이 중에 랜덤값으로 정한다.
	//comHand[1] 은 0~2사이 중에 랜덤값으로 정한다.
	int comHand[2] = {};
	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	// 내가 낸것 두개를 출력한다.
	cout << "내가 낸것 : ";
	for (int i = 0; i < 2; i++)
	{
		/*
		if (myHand[i] == 0)
		{
			cout << "가위";
		}
		else if (myHand[i] == 1)
		{
			cout << "바위";
		}
		else if (myHand[i] == 2)
		{
			cout << "보";
		}
		*/
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


	// 상대방이 낸것 두개를 출력한다.
	cout << "상대방이 낸 것 : ";
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

	// 나의 최종적으로 고를 손을 정한다. (0 : 왼손, 1 : 오른손)
	// 나의 최종적으로 고른손을 myHandFinal이라고 정의한다.
	// 내가 왼손(0)을 골랐으면 
	//		myHandFinal 값은 myHand[0]을 넣어준다.
	// 내가 오른손(1)을 골랐으면
	//		myHandFinal 값은 myHand[1]을 넣어준다.
	int myHandFinal = 0;
	int input;
	cout << "나의 최종손을 골라주세요 (0: 왼손, 1: 오른손)" << endl;
	cin >> input;
	if (input == 0)
	{
		myHandFinal = myHand[0];
	}
	else if (input == 1)
	{
		myHandFinal = myHand[1];
	}


	// 컴퓨터가 최종적으로 고를 손을 정한다 (0 ~ 1 랜덤)
	// 컴퓨터의 최종손은 comHandFinal이라고 정의힌다.
	// 컴퓨터의 최종손이 왼손(0)이면
	//		comHandFinal = comHand[0]을 넣어준다.
	// 컴퓨터의 최종손이 오른손(1)이면
	//		comHandFinal = comHand[1]을 넣어준다.
	int comHandFinal = 0;
	int tempComInput = rand() % 2;
	if (tempComInput == 0)
	{
		comHandFinal = comHand[0];
	}
	else if (tempComInput == 1)
	{
		comHandFinal = comHand[1];
	}

	// 나의 최종손과, 컴퓨터의 최종손을 출력한다.
	cout << "나의 최종 : ";
	switch (myHandFinal)
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

	cout << "컴퓨터 최종 : ";
	switch (comHandFinal)
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

	// myHandFinal과 comHandFinal의 승패비교를 한다.
	if (myHandFinal == comHandFinal)
	{
		cout << "무승부!" << endl;
	}
	else if (
		(myHandFinal == 0 && comHandFinal == 1) ||
		(myHandFinal == 1 && comHandFinal == 2) ||
		(myHandFinal == 2 && comHandFinal == 0)
		)
	{
		cout << "플레이어 패배!" << endl;
	}
	else
	{
		cout << "플레이어 승리!" << endl;
	}
}