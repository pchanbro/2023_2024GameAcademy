#include <iostream>
#include <time.h>

using namespace std;

void printRCP(int hand)
{
	switch (hand)
	{
	case 0:
		cout << "����" << endl;
		break;
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "��" << endl;
		break;
	default:
		break;
	}
}


int main()
{
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
	printRCP(playerHand[0]);
	printRCP(playerHand[1]);
	
	cout << endl;

	cout << "��ǻ�Ͱ� �� �� : ";
	printRCP(computerHand[0]);
	printRCP(computerHand[1]);
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
	printRCP(finalHand[0]);
	
	cout << "��ǻ�Ͱ� ������ �� : " << endl;
	printRCP(finalHand[1]);

	if (finalHand[0] == finalHand[1])
	{
		cout << "���º��Դϴ�." << endl;
	}
	else if ((finalHand[0] == 0 && finalHand[1] == 2) ||
		(finalHand[0] == 1 && finalHand[1] == 0) ||
		(finalHand[0] == 2 && finalHand[1] == 1)
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