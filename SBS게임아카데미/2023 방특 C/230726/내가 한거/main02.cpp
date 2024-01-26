#include <iostream>
#include <time.h>
#define SCISSOR 0
#define ROCK 1
#define PAPER 2

using namespace std;

int _myHand = 0;
int _computerHand = 0;

enum ePlayerData {
	Player = 0,
	Computer,
	None
};

ePlayerData _winner = None;

void playRockScissorPaper();
void playGameLoop();

int main()
{
	//선생님 묵찌빠 

	//playRockScissorPaper()
	//반복
	//	내 것을 낸다.
	//	상대 것을 낸다.
	//	비기지 않았다면 반복 탈출

	//playGameLoop()
	//반복
	//	내 것을 낸다.
	//	상대 것을 낸다.
	//	만약 비겼다면,
	//		이전 경기에 승리한 사람이 승리한다.
	//	비기지 않았다면,
	//		지금 경기를 이긴 사람을 저장한다.
	
	//개발할 때
	// 기획자가 처음부터 먼저 모든걸 계획할 수는 없다.
	// 하다가 생각나는 요소를 추가하는 것 또한 중요하다.

	srand(time(NULL));
	playRockScissorPaper();
	playGameLoop();

	return 0;
}

void printHand(int hand)
{
	//switch문 쓸 때 default값까지 채워주는게 좋다.
	switch (hand)
	{
	case SCISSOR:
		cout << "가위";
		break;
	case ROCK:
		cout << "바위";
		break;
	case PAPER:
		cout << "보";
		break;
	default:
		cout << "잘못된 입력입니다. " << endl;
	}
}

void playRockScissorPaper()
{
	//반복
	//	내 것을 낸다.
	//	상대 것을 낸다.
	//	비기지 않았다면 반복 탈출

	cout << "playRockScissorPaper()" << endl;

	//do - while 문
	//무조건 1번 실행하고
	//while 조건이 참이면 반복한다.
	do
	{
		cout << " 내 핸드를 입력해주세요 ( 0 : 가위. 1 : 바위, 2 : 보)" << endl;
		cin >> _myHand;
		_computerHand = rand() % 3;

		cout << "내 핸드 : ";
		printHand(_myHand);
		cout << endl;

		cout << "컴퓨터 핸드 : ";
		printHand(_computerHand);
		cout << endl;

	} while (_myHand == _computerHand);

	if (_computerHand == ROCK && _myHand == PAPER ||
		_computerHand == SCISSOR && _myHand == ROCK ||
		_computerHand == PAPER && _myHand == SCISSOR)
	{
		_winner = Player;
	}
	else
	{
		_winner = Computer;
	}

	cout << "playRockScissorPaper() 종료" << endl;
	

}

void playGameLoop()
{
	//반복
	//	내 것을 낸다.
	//  상대 것을 낸다.
	//  만약 비겼다면,
	//		이전 경기에 승리한사람이 승리한다.
	//	비기지 않았다면,
	//		지금 경기를 이긴 사람을 저장한다.

	cout << "playGameLoop() 시작" << endl;
	do
	{
		cout << "내 핸드를 입력해주세요 (0: 가위, 1: 바위, 2: 보)" << endl;
		cin >> _myHand;
		_computerHand = rand() % 3;

		cout << "내 핸드 : ";
		printHand(_myHand);
		cout << endl;

		cout << "컴퓨터 핸드 : ";
		printHand(_computerHand);
		cout << endl;

		if (_computerHand == ROCK && _myHand == PAPER ||
			_computerHand == SCISSOR && _myHand == ROCK ||
			_computerHand == PAPER && _myHand == SCISSOR)
		{
			_winner = Player;
		}
		else if (
			_myHand == ROCK && _computerHand == PAPER ||
			_myHand == SCISSOR && _computerHand == ROCK ||
			_myHand == PAPER && _computerHand == SCISSOR
			)
		{
			_winner = Computer;
		}

	} while (_myHand != _computerHand);

	if (_winner == Player)
	{
		cout << "플레이어 승리" << endl;
	}
	else if (_winner == Computer)
	{
		cout << "컴퓨터 승리" << endl;
	}
	else
	{
		cout << "ERROR : 뭔가 이상함 " << endl;
	}


	cout << "playGameLoop() 종료" << endl;
}