#include <iostream>
#include <time.h>
//��ũ��
#define MYVALUE_SCISSOR 0
#define MYVALUE_ROCK 1
#define MYVALUE_PAPER 2

using namespace std;

//enum
//�ڷ��� 
//�⺻ �ڷ���
//int bool char float

//����� ���� �ڷ���
//enum, class, struct

enum eRockScissorPaper {
	SCISSOR = 0,
	ROCK, 
	PAPER
};

int main()
{
	//�������� ����
	//�ڷ��� ������ = ��;
	eRockScissorPaper rsp = SCISSOR;

	int myVar2 = ROCK;
	eRockScissorPaper a = PAPER;

	//���������� �ϳ�����

	//�÷��̾� �μհ���
	//��ǻ�� �μհ���

	//���� ��Ȳ ���
	//�÷��̾� ���
	//��ǻ�� ���

	//�÷��̾� ���� �� ����
	//��ǻ�� ���� �� ����

	//�����ճ��� ���к�

	//�迭
	//�ڷ��� ������[�迭ũ��];
	int playerHand[2], computerHand[2];
	//int playerHand0; int playerHand[0];
	//int playerHand1; int playerHand[1];
	//playerHand[0] = 1;
	//playerHand[1] = 2;
	//cout << "playerHand[0] : " << playerHand[0] << endl;
	//cout << "playerHand[1] : " << playerHand[1] << endl;

	cout << "���ʼ��� ����ּ��� (0 : ����, 1: ����, 2: ��)" << endl;
	cin >> playerHand[0];
	cout << "�����ʼ��� ����ּ��� (0 : ����, 1: ����, 2: ��)" << endl;
	cin >> playerHand[1];

	computerHand[0] = rand() % 3;
	computerHand[1] = rand() % 3;

	cout << "�÷��̾ �� �� : ";
	if (playerHand[0] == SCISSOR)
	{
		cout << "����\t";
	}
	else if (playerHand[0] == ROCK)
	{
		cout << "����\t";
	}
	else if (playerHand[0] == PAPER)
	{
		cout << "��\t";
	}

	if (playerHand[1] == SCISSOR)
	{
		cout << "����\t";
	}
	else if (playerHand[1] == ROCK)
	{
		cout << "����\t";
	}
	else if (playerHand[1] == PAPER)
	{
		cout << "��\t";
	}
	cout << endl;

	cout << "��ǻ�Ͱ� �� �� : ";
	switch (computerHand[0])
	{
	case ROCK:
		cout << "����\t";
		break;
	case SCISSOR:
		cout << "����\t";
		break;
	case PAPER:
		cout << "��\t";
		break;
	default:
		break;
	}

	switch (computerHand[1])
	{
	case ROCK:
		cout << "����\t";
		break;
	case SCISSOR:
		cout << "����\t";
		break;
	case PAPER:
		cout << "��\t";
		break;
	default:
		break;
	}

	cout << endl;

	int finalHand[2];
	//finalHand[0] => �÷��̾� ������
	//finalHand[1] => ��ǻ�� ������
	cout << "���� ���� �������ּ��� (0 : ����, 1: ������)" << endl;
	int select;
	cin >> select;
	if (select == 0)
	{
		finalHand[0] = playerHand[0];
	}
	else if (select == 1)
	{
		finalHand[0] = playerHand[1];
	}
	else
	{
		cout << "�߸��Է��߽��ϴ�." << endl;
	}

	finalHand[1] = computerHand[rand() % 2];

	cout << "�÷��̾ ������ �� : " << endl;
	if (finalHand[0] == 0)
	{
		cout << "����" << endl;
	}
	else if (finalHand[0] == 1)
	{
		cout << "����" << endl;
	}
	else if (finalHand[0] == 2)
	{
		cout << "��" << endl;
	}

	cout << "��ǻ�Ͱ� ������ �� : " << endl;
	if (finalHand[1] == 0)
	{
		cout << "����" << endl;
	}
	else if (finalHand[1] == 1)
	{
		cout << "����" << endl;
	}
	else if (finalHand[1] == 2)
	{
		cout << "��" << endl;
	}

	if (finalHand[0] == finalHand[1])
	{
		cout << "���º��Դϴ�." << endl;
	}
	else if ((finalHand[0] == SCISSOR && finalHand[1] == PAPER) ||
		(finalHand[0] == ROCK && finalHand[1] == SCISSOR) ||
		(finalHand[0] == PAPER && finalHand[1] == ROCK)
		)
	{
		cout << "�¸��Ͽ����ϴ�." << endl;
	}
	else
	{
		cout << "�й��Ͽ����ϴ�." << endl;
	}



	return 0;
}

// 1. �����
// 2. �ζǹ�ȣ ������ (1~45�� ���� �迭�� �ְ� ���߿� 7���������� �̴°�)