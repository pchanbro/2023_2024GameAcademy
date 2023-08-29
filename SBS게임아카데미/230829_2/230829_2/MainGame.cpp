#include "main.h"
#include "MainGame.h"
#include "CardUtil.h"

void MainGame::Init()
{
	srand(time(NULL));

	for (int i = 0; i < 52; i++)
	{
		_card[i] = i;
	}

	_playerBet = 0;
	// 0 => ����, 1 => �ο�, 2 => ����, 3=> ���þ���
	_betChoice = eBetChoice::BETCHIOICE_END;
	//�տ� 0,1,2,3�� ȭ�鿡 �����ְ� �����ϱ� ����,
	_currentCardIndex = 4;

	//ī�弯�� 
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = _card[num1];
		_card[num1] = _card[num2];
		_card[num2] = temp;
	}

	_playerGold = 10000;
}

void MainGame::Updata()
{
	system("cls");

	/*for (int i = 0; i < 52; i++)
	{
		PrintCard(_card[i]);
		cout << endl;
	}*/

	// ���̷ο켼��
	// �տ� 4�� ���
	//  _card[_currentCardIndex - 4]
	//  _card[_currentCardIndex - 3]
	//  _card[_currentCardIndex - 2]
	//  _card[_currentCardIndex - 1]
	// �ڿ� ?? ī�� ���

	//�÷��̾� �����Ͻðڽ��ϱ�? ���
	// 0 , 1 ����
	// ������ �Ѵٸ�
	// ���� Ÿ�� ���ϱ�
	// 0(����) 1(�ο�) 2(����)
	//_card[_currentCardIndex] �� ī�� ���ڰ�
	// 7�� ���� SEVEN�� �����ϸ�
	//		10�� ����
	// 7���� �۰� LOW�� �����ߴٸ�
	//		2�� ����
	// 7���� ũ�� HIGH�� �����ߴٸ�
	//		2�� ����
	// �׷��� �ʴٸ�
	//		�ƽ��׿� �Ф� ���

	for (int i = 4; i >= 1; i--) 
	{
		PrintCard(_card[_currentCardIndex - i]);
		cout << "\t";
	}
	cout << "??" << endl;

	//�÷��̾� �����Ͻðڽ��ϱ�? ���
	cout << "�÷��̾� �����Ͻðڽ��ϱ�? ( 0 : �����Ѵ�, 1 : ���þ��Ѵ�.) : " << endl;
	int input;
	cin >> input;
	if (input == 0)
	{
		// ���� Ÿ�� ���ϱ�
		// 0(����) 1(�ο�) 2(����)
		// ���� �ݾ� ����

		cout << "����Ÿ���� �����ּ���. (0 : ����, 1 : �ο�, 2 : ����) : " << endl;
		cin >> _betChoice;

		cout << "���� �ݾ��� �������ּ��� : " << endl;
		cin >> _playerBet;

		if (_playerGold < _playerBet)
		{
			_playerBet = _playerGold;
		}

		//�����Ѹ�ŭ �� ����
		_playerGold -= _playerBet;
	}
	else
	{
		_betChoice = eBetChoice::BETCHIOICE_NOBET;
	}

	//_card[_currentCardIndex] �� ī�� ���ڰ�
	// 7�� ���� SEVEN�� �����ϸ�
	//		10�� ����
	// 7���� �۰� LOW�� �����ߴٸ�
	//		2�� ����
	// 7���� ũ�� HIGH�� �����ߴٸ�
	//		2�� ����
	// �׷��� �ʴٸ�
	//		�ƽ��׿� �Ф� ���
	cout << "�̹� ī�� : ";
	PrintCard(_card[_currentCardIndex]);
	cout << endl;

	int cardNum = _card[_currentCardIndex] % 13 + 1;
	if (cardNum == 7 && _betChoice == eBetChoice::BETCHIOICE_SEVEN)
	{
		cout << "### �����մϴ�. ###" << endl;
		_playerGold += _playerBet * 10;
	}
	else if (cardNum > 7 && _betChoice == eBetChoice::BETCHIOICE_HIGH)
	{
		cout << "### �����մϴ�. ###" << endl;
		_playerGold += _playerBet * 10;
	}
	else if (cardNum < 7 && _betChoice == eBetChoice::BETCHIOICE_LOW)
	{
		cout << "�����մϴ�." << endl;
		_playerGold += _playerBet * 2;
	}
	else
	{
		cout << "�ƽ��׿� �Ф�" << endl;
	}
	_currentCardIndex++;

	system("pause");
}

void MainGame::Release()
{
	
}

bool MainGame::IsGameEnd()
{
	return _playerGold <= 0 || _currentCardIndex == 52;
}
