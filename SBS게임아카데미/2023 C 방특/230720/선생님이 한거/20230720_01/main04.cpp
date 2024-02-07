#include <iostream>
#include <time.h>

using namespace std;

void printRCP(int hand)
{
	switch (hand)
	{
	case 0:
		cout << "가위" << endl;
		break;
	case 1:
		cout << "바위" << endl;
		break;
	case 2:
		cout << "보" << endl;
		break;
	default:
		break;
	}
}


int main()
{
	//가위바위보 하나빼기

	//플레이어 두손고르기
	//컴퓨터 두손고르기

	//현재 상황 출력
	//플레이어 출력
	//컴퓨터 출력

	//플레이어 최종 손 선택
	//컴퓨터 최종 손 선택

	//최종손끼리 승패비교

	//배열
	//자료형 변수명[배열크기];
	int playerHand[2], computerHand[2];
	//int playerHand0; int playerHand[0];
	//int playerHand1; int playerHand[1];
	//playerHand[0] = 1;
	//playerHand[1] = 2;
	//cout << "playerHand[0] : " << playerHand[0] << endl;
	//cout << "playerHand[1] : " << playerHand[1] << endl;

	cout << "왼쪽손을 골라주세요 (0 : 가위, 1: 바위, 2: 보)" << endl;
	cin >> playerHand[0];
	cout << "오른쪽손을 골라주세요 (0 : 가위, 1: 바위, 2: 보)" << endl;
	cin >> playerHand[1];

	computerHand[0] = rand() % 3;
	computerHand[1] = rand() % 3;

	cout << "플레이어가 고른 것 : ";
	printRCP(playerHand[0]);
	printRCP(playerHand[1]);
	
	cout << endl;

	cout << "컴퓨터가 고른 것 : ";
	printRCP(computerHand[0]);
	printRCP(computerHand[1]);
	cout << endl;

	int finalHand[2];
	//finalHand[0] => 플레이어 최종값
	//finalHand[1] => 컴퓨터 최종값
	cout << "최종 손을 선택해주세요 (0 : 왼쪽, 1: 오른쪽)" << endl;
	int select;
	cin >> select;
	if (select == 0)
	{
		finalHand[0] = playerHand[0];
	}
	else if (select == 1)
	{
		finalHand[0] = playerHand[1];
	}
	else
	{
		cout << "잘못입력했습니다." << endl;
	}

	finalHand[1] = computerHand[rand() % 2];

	cout << "플레이어가 선택한 것 : " << endl;
	printRCP(finalHand[0]);
	
	cout << "컴퓨터가 선택한 것 : " << endl;
	printRCP(finalHand[1]);

	if (finalHand[0] == finalHand[1])
	{
		cout << "무승부입니다." << endl;
	}
	else if ((finalHand[0] == 0 && finalHand[1] == 2) ||
		(finalHand[0] == 1 && finalHand[1] == 0) ||
		(finalHand[0] == 2 && finalHand[1] == 1)
		)
	{
		cout << "승리하였습니다." << endl;
	}
	else
	{
		cout << "패배하였습니다." << endl;
	}



	return 0;
}