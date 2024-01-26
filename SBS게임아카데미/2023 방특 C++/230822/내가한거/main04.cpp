#include <iostream>
#include <time.h>
using namespace std;

enum eRockScissorPaper
{
	ROCK,
	SCISSOR,
	PAPER,
	END
};

enum eErrorCode
{
	ErrPlayerNoGold = -17001,
	ErrPlayerNoCrystal, // -17000이 됨
};

void main()
{
	// enum << 가위바위보 예제로 보면 좀 이해가 쉬운
	// 사용자정의 자료형종류
	// enum, struct, class

	// 열거형 자료형
	// 정수형에 이름을 붙여준다.

	int myHand = 0;

	// enum 사용법
	// enum eRockScissorPaper { ROCK, SCISSOR, PAPER, END }; 가독성이 좋아지게 만들 수 있다.
	// 값의 용도로 많이 쓰임
	// 변수로서는 사용이 잘 되지 않음
	// enum은 switch문과 같이 자주 사용된다.

	myHand = eRockScissorPaper::ROCK; 
	myHand = ROCK; //eRockScissorPaper은 생략 가능
	


	//일단 가위바위보 만들기.
	int myHand = 0;
	int comHand = rand() % eRockScissorPaper::END; //이런식으로 가독성이 좋게 

	cout << "내 핸드를 뽑아주세요. ( 0 : 가위, 1 : 바위, 2 : 보)" << endl;
	cin >> myHand;

	cout << "내가 낸 것 : " << endl;
	switch (myHand)
	{
	case ROCK:
		cout << "바위";
		break;
	case SCISSOR:
		cout << "가위";
		break;
	case PAPER:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "컴퓨터가가 낸 것 : " << endl;
	switch (comHand)
	{
	case ROCK:
		cout << "바위";
		break;
	case SCISSOR:
		cout << "가위";
		break;
	case PAPER:
		cout << "보";
		break;
	default:
		break;
	}
	cout << endl;

	if (comHand == myHand)
	{
		cout << "비김" << endl;
	}
	else if ((comHand == ROCK && myHand == SCISSOR) || (comHand == SCISSOR && myHand == PAPER) || (comHand == PAPER && myHand == ROCK))
	{
		cout << "패배" << endl;
	}
	else
	{
		cout << "승리" << endl;
	}
}