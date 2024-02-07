#include <iostream>
#include <time.h>
using namespace std;

int _myHand = 0;
int _comHand = 0;

enum eRockScissorPaper {
	SCISSOR,
	ROCK,
	PAPER,
	END
};

void PrintRockScissorPaper(int hand)
{
	// ������������ ������ִ� ����
	// -> myHand�� ���� ���� "����", "����", "��"�� ������ش�.
	switch (hand)
	{
	case eRockScissorPaper::SCISSOR:
		cout << "����" << endl;
		break;
	case eRockScissorPaper::ROCK:
		cout << "����" << endl;
		break;
	case eRockScissorPaper::PAPER:
		cout << "��" << endl;
		break;
	default:
		break;
	}
}

void main()
{
	srand(time(NULL));
	// �Լ� 1.
	// �Ȱ��� ������ �ڵ带 ���ȭ �ϴ� ��
	// PrintRockScissorPaper();
	// 
	//------------------------- 
	// ! �Լ� ���� ���� !
	//-------------------------
	// �ڷ��� �Լ���(�ŰԺ���)
	// {
	//	  �Լ��������
	// }
	//
	// �ڷ��� ����
	// float, int, char, bool, void

	// �Լ� ���

	cout << "���� ������ ����ּ��� (0:����, 1:����, 2:��)" << endl;
	cin >> _myHand;

	cout << "���� ���� : ";
	PrintRockScissorPaper(_myHand);
	/*
	//(int hand)
{
	int hand = _myHand;
	// ������������ ������ִ� ����
	// -> myHand�� ���� ���� "����", "����", "��"�� ������ش�.
	switch (hand)
	{
	case eRockScissorPaper::SCISSOR:
		cout << "����" << endl;
		break;
	case eRockScissorPaper::ROCK:
		cout << "����" << endl;
		break;
	case eRockScissorPaper::PAPER:
		cout << "��" << endl;
		break;
	default:
		break;
	}
}
	*/
	cout << endl;

	_comHand = rand() % eRockScissorPaper::END;
	cout << "��밡 ���� : ";
	PrintRockScissorPaper(_comHand);
	cout << endl;



}