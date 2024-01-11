#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

enum eRockScissorPaper
{
	SCISSOR,
	ROCK,
	PAPER,
	END
};

class MainGame
{
public : 
	bool isEnd();
	void Init();
	void Update();
	void Release();

	bool IsGameEnd();
	int myHand;
	int comHand;
	void RockScissorPaper();
};

void MainGame::Init()
{

}

void MainGame::Update()
{
	if (_kbhit())
	{
		char ch = _getch();
		if (ch == 'q')
		{

		}
	}
}

void MainGame::Release()
{
	cout << "게임 끝났다." << endl;
}

bool MainGame::IsGameEnd()
{
	return isEnd;
}



//void MainGame::RockScissorPaper()
//{
//	cout << "가위바위보를 시작합니다. " << endl;
//	cout << "가위바위보를 선택하세요(0 : 가위 ,1 : 바위, 2 : 보) : ";
//	cin >> myHand;
//
//	comHand = rand() % 3;
//
//	cout << "내가 낸 것 : ";
//	switch (myHand)
//	{
//	case SCISSOR:
//		cout << "가위";
//		break;
//	case ROCK:
//		cout << "바위";
//		break;
//	case PAPER:
//		cout << "보";
//		break;
//	}
//	cout << endl;
//
//	cout << "컴퓨터가 낸 것 : ";
//	switch (comHand)
//	{
//	case SCISSOR:
//		cout << "가위";
//		break;
//	case ROCK:
//		cout << "바위";
//		break;
//	case PAPER:
//		cout << "보";
//		break;
//	}
//	cout << endl;
//
//}
void main()
{
	srand(time(NULL));
	/*MainGame* rockScissorPaper = nullptr;
	rockScissorPaper = new MainGame;*/

	MainGame* mainGame = new MainGame();
	//포인터는 ->로 함수, 멤버변수를 호출해야한다.
	//포인터가 아닌 경우.
	mainGame->Init();
	while (false == mainGame->IsGameEnd())
	{
		mainGame->Update();
	}
	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}