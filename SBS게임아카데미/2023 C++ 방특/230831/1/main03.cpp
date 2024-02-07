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
	cout << "���� �����ߴ�." << endl;
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
	cout << "���� ������." << endl;
}

bool MainGame::IsGameEnd()
{
	return isEnd;
}

void main()
{
	MainGame* mainGame = new MainGame();
	//�����ʹ� -> �� �Լ�, ��������� ȣ���ؾ��Ѵ�.
	//�����Ͱ� �ƴѰ�� .
	mainGame->Init();
	while (false == mainGame->IsGameEnd())
	{
		mainGame->Update();
	}
	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}

// ���������� �ϳ����� MainGame ��������
// Init
// Update
// Release
// IsGameEnd
// �Լ��� �����ؾ��Ѵ�.