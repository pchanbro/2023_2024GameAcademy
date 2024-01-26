#include <iostream>
#include <time.h>
//매크로
#define MYVALUE_SCISSOR 0
#define MYVALUE_ROCK 1
#define MYVALUE_PAPER 2

using namespace std;

//enum
//자료형 
//기본 자료형
//int bool char float

//사용자 정의 자료형
//enum, class, struct

enum eRockScissorPaper {
	SCISSOR = 0,
	ROCK, 
	PAPER
};

int main()
{
	//변수선언 공식
	//자료형 변수명 = 값;
	eRockScissorPaper rsp = SCISSOR;

	int myVar2 = ROCK;
	eRockScissorPaper a = PAPER;

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
	if (playerHand[0] == SCISSOR)
	{
		cout << "가위\t";
	}
	else if (playerHand[0] == ROCK)
	{
		cout << "바위\t";
	}
	else if (playerHand[0] == PAPER)
	{
		cout << "보\t";
	}

	if (playerHand[1] == SCISSOR)
	{
		cout << "가위\t";
	}
	else if (playerHand[1] == ROCK)
	{
		cout << "바위\t";
	}
	else if (playerHand[1] == PAPER)
	{
		cout << "보\t";
	}
	cout << endl;

	cout << "컴퓨터가 고른 것 : ";
	switch (computerHand[0])
	{
	case ROCK:
		cout << "바위\t";
		break;
	case SCISSOR:
		cout << "가위\t";
		break;
	case PAPER:
		cout << "보\t";
		break;
	default:
		break;
	}

	switch (computerHand[1])
	{
	case ROCK:
		cout << "바위\t";
		break;
	case SCISSOR:
		cout << "가위\t";
		break;
	case PAPER:
		cout << "보\t";
		break;
	default:
		break;
	}

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
	if (finalHand[0] == 0)
	{
		cout << "가위" << endl;
	}
	else if (finalHand[0] == 1)
	{
		cout << "바위" << endl;
	}
	else if (finalHand[0] == 2)
	{
		cout << "보" << endl;
	}

	cout << "컴퓨터가 선택한 것 : " << endl;
	if (finalHand[1] == 0)
	{
		cout << "가위" << endl;
	}
	else if (finalHand[1] == 1)
	{
		cout << "바위" << endl;
	}
	else if (finalHand[1] == 2)
	{
		cout << "보" << endl;
	}

	if (finalHand[0] == finalHand[1])
	{
		cout << "무승부입니다." << endl;
	}
	else if ((finalHand[0] == SCISSOR && finalHand[1] == PAPER) ||
		(finalHand[0] == ROCK && finalHand[1] == SCISSOR) ||
		(finalHand[0] == PAPER && finalHand[1] == ROCK)
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

// 1. 묵찌빠
// 2. 로또번호 생성기 (1~45개 숫자 배열이 있고 그중에 7개랜덤으로 뽑는거)