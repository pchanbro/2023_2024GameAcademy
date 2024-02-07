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
	//������ ����� 

	//playRockScissorPaper()
	//�ݺ�
	//	�� ���� ����.
	//	��� ���� ����.
	//	����� �ʾҴٸ� �ݺ� Ż��

	//playGameLoop()
	//�ݺ�
	//	�� ���� ����.
	//	��� ���� ����.
	//	���� ���ٸ�,
	//		���� ��⿡ �¸��� ����� �¸��Ѵ�.
	//	����� �ʾҴٸ�,
	//		���� ��⸦ �̱� ����� �����Ѵ�.
	
	//������ ��
	// ��ȹ�ڰ� ó������ ���� ���� ��ȹ�� ���� ����.
	// �ϴٰ� �������� ��Ҹ� �߰��ϴ� �� ���� �߿��ϴ�.

	srand(time(NULL));
	playRockScissorPaper();
	playGameLoop();

	return 0;
}

void printHand(int hand)
{
	//switch�� �� �� default������ ä���ִ°� ����.
	switch (hand)
	{
	case SCISSOR:
		cout << "����";
		break;
	case ROCK:
		cout << "����";
		break;
	case PAPER:
		cout << "��";
		break;
	default:
		cout << "�߸��� �Է��Դϴ�. " << endl;
	}
}

void playRockScissorPaper()
{
	//�ݺ�
	//	�� ���� ����.
	//	��� ���� ����.
	//	����� �ʾҴٸ� �ݺ� Ż��

	cout << "playRockScissorPaper()" << endl;

	//do - while ��
	//������ 1�� �����ϰ�
	//while ������ ���̸� �ݺ��Ѵ�.
	do
	{
		cout << " �� �ڵ带 �Է����ּ��� ( 0 : ����. 1 : ����, 2 : ��)" << endl;
		cin >> _myHand;
		_computerHand = rand() % 3;

		cout << "�� �ڵ� : ";
		printHand(_myHand);
		cout << endl;

		cout << "��ǻ�� �ڵ� : ";
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

	cout << "playRockScissorPaper() ����" << endl;
	

}

void playGameLoop()
{
	//�ݺ�
	//	�� ���� ����.
	//  ��� ���� ����.
	//  ���� ���ٸ�,
	//		���� ��⿡ �¸��ѻ���� �¸��Ѵ�.
	//	����� �ʾҴٸ�,
	//		���� ��⸦ �̱� ����� �����Ѵ�.

	cout << "playGameLoop() ����" << endl;
	do
	{
		cout << "�� �ڵ带 �Է����ּ��� (0: ����, 1: ����, 2: ��)" << endl;
		cin >> _myHand;
		_computerHand = rand() % 3;

		cout << "�� �ڵ� : ";
		printHand(_myHand);
		cout << endl;

		cout << "��ǻ�� �ڵ� : ";
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
		cout << "�÷��̾� �¸�" << endl;
	}
	else if (_winner == Computer)
	{
		cout << "��ǻ�� �¸�" << endl;
	}
	else
	{
		cout << "ERROR : ���� �̻��� " << endl;
	}


	cout << "playGameLoop() ����" << endl;
}