#include <iostream>
#include <time.h>
using namespace std;

int _myHand = 0;
int _comHand = 0;

enum eRockScissorPaper {
	SCISSOR,
	ROCK,
	PAPER,
	END
};

void PrintRockScissorPaper(int hand)
{
	// 가위바위보를 출력해주는 내용
	// -> myHand의 값에 따라서 "가위", "바위", "보"를 출력해준다.
	switch (hand)
	{
	case eRockScissorPaper::SCISSOR:
		cout << "가위" << endl;
		break;
	case eRockScissorPaper::ROCK:
		cout << "바위" << endl;
		break;
	case eRockScissorPaper::PAPER:
		cout << "보" << endl;
		break;
	default:
		break;
	}
}

void main()
{
	srand(time(NULL));
	// 함수 1.
	// 똑같은 내용의 코드를 모듈화 하는 것
	// PrintRockScissorPaper();
	// 
	//------------------------- 
	// ! 함수 선언 공식 !
	//-------------------------
	// 자료형 함수명(매게변수)
	// {
	//	  함수기능정의
	// }
	//
	// 자료형 종류
	// float, int, char, bool, void

	// 함수 사용

	cout << "내가 낼것을 골라주세요 (0:가위, 1:바위, 2:보)" << endl;
	cin >> _myHand;

	cout << "내가 낸것 : ";
	PrintRockScissorPaper(_myHand);
	/*
	//(int hand)
{
	int hand = _myHand;
	// 가위바위보를 출력해주는 내용
	// -> myHand의 값에 따라서 "가위", "바위", "보"를 출력해준다.
	switch (hand)
	{
	case eRockScissorPaper::SCISSOR:
		cout << "가위" << endl;
		break;
	case eRockScissorPaper::ROCK:
		cout << "바위" << endl;
		break;
	case eRockScissorPaper::PAPER:
		cout << "보" << endl;
		break;
	default:
		break;
	}
}
	*/
	cout << endl;

	_comHand = rand() % eRockScissorPaper::END;
	cout << "상대가 낸것 : ";
	PrintRockScissorPaper(_comHand);
	cout << endl;



}