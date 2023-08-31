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
	cout << "���� ������." << endl;
}

bool MainGame::IsGameEnd()
{
	return isEnd;
}



//void MainGame::RockScissorPaper()
//{
//	cout << "������������ �����մϴ�. " << endl;
//	cout << "������������ �����ϼ���(0 : ���� ,1 : ����, 2 : ��) : ";
//	cin >> myHand;
//
//	comHand = rand() % 3;
//
//	cout << "���� �� �� : ";
//	switch (myHand)
//	{
//	case SCISSOR:
//		cout << "����";
//		break;
//	case ROCK:
//		cout << "����";
//		break;
//	case PAPER:
//		cout << "��";
//		break;
//	}
//	cout << endl;
//
//	cout << "��ǻ�Ͱ� �� �� : ";
//	switch (comHand)
//	{
//	case SCISSOR:
//		cout << "����";
//		break;
//	case ROCK:
//		cout << "����";
//		break;
//	case PAPER:
//		cout << "��";
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
	//�����ʹ� ->�� �Լ�, ��������� ȣ���ؾ��Ѵ�.
	//�����Ͱ� �ƴ� ���.
	mainGame->Init();
	while (false == mainGame->IsGameEnd())
	{
		mainGame->Update();
	}
	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}