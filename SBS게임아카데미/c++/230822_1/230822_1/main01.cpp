#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//Ÿ�Ӿ���
	srand(time(NULL));

	int myHand[2];
	int comHand[2];

	cout << "�� �޼��� �����ϼ��� (0: ����, 1 : ����, 2: ��) : " << endl;
	cin >> myHand[0];

	cout << "�� �������� �����ϼ��� (0: ����, 1 : ����, 2: ��) : " << endl;
	cin >> myHand[1];

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}
	cout << endl;

	cout << "�� �� : ";
	for (int i = 0; i < 2; i++)
	{
		switch (myHand[i])
		{
		case 0: 
			cout << "����";
			break;
		case 1:
			cout << "����";
			break; 
		case 2:
			cout << "��";
			break;
		default:
			break;
		}
		cout << "\t";
	}
	cout << endl;

	cout << "��ǻ�� �� : ";
	for (int i = 0; i < 2; i++)
	{
		switch (comHand[i])
		{
		case 0:
			cout << "����";
			break;
		case 1:
			cout << "����";
			break;
		case 2:
			cout << "��";
			break;
		default:
			break;
		}
		cout << "\t";
	}
	cout << endl;

	int myFinalHand = 0;
	int input;

	cout << "���� ���� �����ϼ��� (0 : �޼�, 1 : ������) : ";
	cin >> input;

	if (input == 0)
	{
		myFinalHand = myHand[0];
	}
	else if (input == 1)
	{
		myFinalHand = myHand[1];
	}

	int comFinalHand = 0;
	int tempComHand = rand() % 2;

	if (tempComHand == 0)
	{
		comFinalHand = comHand[0];
	}
	else if (tempComHand == 1)
	{
		comFinalHand = comHand[1];
	}

	cout << "���� ���� ���� : ";
	switch (myFinalHand)
	{
	case 0:
		cout << "����";
		break;
	case 1:
		cout << "����";
		break;
	case 2:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "��ǻ���� ���� ���� : ";
	switch (comFinalHand)
	{
	case 0:
		cout << "����";
		break;
	case 1:
		cout << "����";
		break;
	case 2:
		cout << "��";
		break;
	default:
		break;
	}
	cout << endl;

	cout << "���� ��� : ";
	if (myFinalHand == comFinalHand)
	{
		cout << "���º�" << endl;
	}
	else if ((myFinalHand == 0 && comFinalHand == 1) || (myFinalHand == 1 && comFinalHand == 2) || (myFinalHand == 2 && comFinalHand == 0))
	{
		cout << "�÷��̾� �й�" << endl;
	}
	else
	{
		cout << "�÷��̾� �¸�" << endl;
	}
	
}