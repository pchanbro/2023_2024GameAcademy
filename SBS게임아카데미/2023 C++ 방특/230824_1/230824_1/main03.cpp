#include <iostream>

using namespace std;
int _myHand = 0; //���������� using namespace �ٷ� �ؿ� ����
int _comHand = 0;

enum eRockScissorPaper {
	ROCK,
	SCISSOR,
	PAPER,
	END
};

void PrintRockScissorPaper(int hand)
{
	// ������������ ������ִ� ����
	// -> myHand�� ���� ���� ����, ���� , ���� ������ش�.
	cout << "�Լ����� : PrintRockScissorPaper" << endl;

	cout << "hand : " << hand << endl;
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
	// �Լ�
	// �Ȱ��� ������ �ڵ带 �����ϰ� ����ϱ� ���� ���ȭ �ϴ°�
	// PrintRockScissorPaper();
	// 
	// -------------------------
	// �Լ� ���� ����
	// -------------------------
	// �ڷ��� �Լ���(�Ű�����)
	// {
	//		�Լ��������
	// }

	srand(time(NULL));

	// �Լ� ���
	//PrintRockScissorPaper();
	
	cout << "���� �� ���� ����ּ��� (0 : ����, 1 : ����, 2 : ��) " << endl;
	cin >> _myHand;

	cout << "���� �� ��" << endl;
	PrintRockScissorPaper(_myHand);

	/* ���� �Լ��� ������ ���� ������ �����Ű�� ���� 
	int hand = _myHand; �� �κ��� ����Ʈ ������ �Լ��� ���� �̷��� ���� �ϳ��� �����ؼ� �Ű��������� �� ������ �־��ְ� �����
	cout << "�Լ����� : PrintRockScissorPaper" << endl;

	cout << "hand : " << hand << endl;
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
	*/

	cout << endl;

	_comHand = rand() % eRockScissorPaper::END;
	cout << "��밡 �� �� : ";
	PrintRockScissorPaper(_comHand);
	cout << endl;
	

	//�ڷ��� ����
	//float, int, char, bool, void

	//
}