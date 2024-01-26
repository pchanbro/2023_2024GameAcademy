#include <iostream>
#include <conio.h>
using namespace std;

class MainGame
{
public:
	bool isEnd;

	void Init();
	void Update();
	void Release();

	bool IsGameEnd();
};

void MainGame::Init()
{
	isEnd = false;
	cout << "게임 시작했다." << endl;
}

void MainGame::Update()
{
	//system("cls");

	if (_kbhit())
	{
		char ch = _getch();
		if (ch == 'q')
		{
			isEnd = true;
		}
	}

	//system("pause");
}

void MainGame::Release()
{
	cout << "게임 끝났다." << endl;
}

bool MainGame::IsGameEnd()
{
	return isEnd;
}

void main()
{
	MainGame* mainGame = new MainGame();
	//포인터는 -> 로 함수, 멤버변수를 호출해야한다.
	//포인터가 아닌경우 .
	mainGame->Init();
	while (false == mainGame->IsGameEnd())
	{
		mainGame->Update();
	}
	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}

// 가위바위보 하나빼기 MainGame 버전으로
// Init
// Update
// Release
// IsGameEnd
// 함수를 포함해야한다.