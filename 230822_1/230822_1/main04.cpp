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
	ErrPlayerNoCrystal, // -17000�� ��
};

void main()
{
	// enum << ���������� ������ ���� �� ���ذ� ����
	// ��������� �ڷ�������
	// enum, struct, class

	// ������ �ڷ���
	// �������� �̸��� �ٿ��ش�.

	int myHand = 0;

	// enum ����
	// enum eRockScissorPaper { ROCK, SCISSOR, PAPER, END }; �������� �������� ���� �� �ִ�.
	// ���� �뵵�� ���� ����
	// �����μ��� ����� �� ���� ����
	// enum�� switch���� ���� ���� ���ȴ�.

	myHand = eRockScissorPaper::ROCK; 
	myHand = ROCK; //eRockScissorPaper�� ���� ����
	


	//�ϴ� ���������� �����.
	int myHand = 0;
	int comHand = rand() % eRockScissorPaper::END; //�̷������� �������� ���� 

	cout << "�� �ڵ带 �̾��ּ���. ( 0 : ����, 1 : ����, 2 : ��)" << endl;
	cin >> myHand;

	cout << "���� �� �� : " << endl;
	switch (myHand)
	{
	case ROCK:
		cout << "����";
		break;
	case SCISSOR:
		cout << "����";
		break;
	case PAPER:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "��ǻ�Ͱ��� �� �� : " << endl;
	switch (comHand)
	{
	case ROCK:
		cout << "����";
		break;
	case SCISSOR:
		cout << "����";
		break;
	case PAPER:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;

	if (comHand == myHand)
	{
		cout << "���" << endl;
	}
	else if ((comHand == ROCK && myHand == SCISSOR) || (comHand == SCISSOR && myHand == PAPER) || (comHand == PAPER && myHand == ROCK))
	{
		cout << "�й�" << endl;
	}
	else
	{
		cout << "�¸�" << endl;
	}
}