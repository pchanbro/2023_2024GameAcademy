#include <iostream>

using namespace std;
int _myHand = 0; //전역변수는 using namespace 바로 밑에 쓰기
int _comHand = 0;

enum eRockScissorPaper {
	ROCK,
	SCISSOR,
	PAPER,
	END
};

void PrintRockScissorPaper(int hand)
{
	// 가위바위보를 출력해주는 내용
	// -> myHand의 값에 따라 가위, 바위 , 보를 출력해준다.
	cout << "함수실행 : PrintRockScissorPaper" << endl;

	cout << "hand : " << hand << endl;
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
	// 함수
	// 똑같은 내용의 코드를 간단하게 사용하기 위해 모듈화 하는것
	// PrintRockScissorPaper();
	// 
	// -------------------------
	// 함수 선언 공식
	// -------------------------
	// 자료형 함수명(매개변수)
	// {
	//		함수기능정의
	// }

	srand(time(NULL));

	// 함수 사용
	//PrintRockScissorPaper();
	
	cout << "내가 낼 것을 골라주세요 (0 : 가위, 1 : 바위, 2 : 보) " << endl;
	cin >> _myHand;

	cout << "내가 낸 것" << endl;
	PrintRockScissorPaper(_myHand);

	/* 위의 함수는 다음과 같은 과정을 실행시키는 거임 
	int hand = _myHand; 이 부분이 포인트 실제로 함수를 쓰면 이렇게 변수 하나를 생성해서 매개변수값을 그 변수에 넣어주고 사용함
	cout << "함수실행 : PrintRockScissorPaper" << endl;

	cout << "hand : " << hand << endl;
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
	*/

	cout << endl;

	_comHand = rand() % eRockScissorPaper::END;
	cout << "상대가 낸 것 : ";
	PrintRockScissorPaper(_comHand);
	cout << endl;
	

	//자료형 종류
	//float, int, char, bool, void

	//
}