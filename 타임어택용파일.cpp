#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));

	int myHand[2];
	int comHand[2];

	cout << "���� ���� ���� �����ϼ���(0 : ����, 1 : ����, 2: ��) : " << endl;
	cin >> myHand[0];

	cout << "���� ������ ���� �����ϼ���(0 : ����, 1 : ����, 2: ��) : " << endl;
	cin >> myHand[1];

	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	cout << "���� �� �� : ";
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
		}
		cout << "\t";
	}
	cout << endl;

	cout << "��ǻ�Ͱ� �� �� : ";
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
		}
		cout << "\t";
	}
	cout << endl;

	int myFinalHand;
	int comFinalHand;
	int choice;

	cout << "���� ���� �����ϼ���( 0 : �޼�, 1 : ������) : ";
	cin >> choice;

	if (choice == 0)
	{
		myFinalHand = myHand[0];
	}
	else if (choice == 1)
	{
		myFinalHand = myHand[1];
	}

	comFinalHand = comHand[rand() % 2];

	cout << "���� ���� �� : ";
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
	}
	cout << endl;

	cout << "��ǻ���� ���� �� : ";
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
	}
	cout << endl;

	cout << "��� : ";
	if (myFinalHand == comFinalHand)
	{
		cout << "���º�" << endl;
	}
	else if ((myFinalHand == 0 && comFinalHand == 1) || (myFinalHand == 1 && comFinalHand == 2) || (myFinalHand == 2 && comFinalHand == 0))
	{
		cout << "�й�" << endl;
	}
	else
	{
		cout << "�¸�" << endl;
	}
}