#include <iostream>
#include <time.h>
using namespace std;


void main()
{
	srand(time(NULL));

	//���������� �ϳ�����
	
	//�����ڵ�
	
	//���� ������ myHand[2]��� �θ���.
	//myHand[0]�� �޼��� ����
	//myHand[1]�� �������� ���� �̶�� �����Ѵ�.
	//[�Է�]�޼��� ������ ���Ѵ�.
	//[�Է�]�������� ������ ���Ѵ�.
	
	//��ǻ�Ͱ� ������ comHand[2]��� �θ���.
	//comHand[0]�� �޼��� ����
	//comHand[1]�� �������� �����̶�� �����Ѵ�.
	//comHand[0] �� 0~2���� �߿� ���������� ���Ѵ�.
	//comHand[1] �� 0~2���� �߿� ���������� ���Ѵ�.

	// ���� ���� �ΰ��� ����Ѵ�.
	// ������ ���� �ΰ��� ����Ѵ�.

	// ���� ���������� �� ���� ���Ѵ�. (0 : �޼�, 1 : ������)
	// ���� ���������� ������ myHandFinal�̶�� �����Ѵ�.
	// ���� �޼�(0)�� ������� 
	//		myHandFinal ���� myHand[0]�� �־��ش�.
	// ���� ������(1)�� �������
	//		myHandFinal ���� myHand[1]�� �־��ش�.

	// ��ǻ�Ͱ� ���������� �� ���� ���Ѵ� (0 ~ 1 ����)
	// ��ǻ���� �������� comHandFinal�̶�� ��������.
	// ��ǻ���� �������� �޼�(0)�̸�
	//		comHandFinal = comHand[0]�� �־��ش�.
	// ��ǻ���� �������� ������(1)�̸�
	//		comHandFinal = comHand[1]�� �־��ش�.

	// ���� �����հ�, ��ǻ���� �������� ����Ѵ�.
	// myHandFinal�� comHandFinal�� ���к񱳸� �Ѵ�.



	//���� ������ myHand[2]��� �θ���.
	//myHand[0]�� �޼��� ����
	//myHand[1]�� �������� ���� �̶�� �����Ѵ�.
	//[�Է�]�޼��� ������ ���Ѵ�.
	//[�Է�]�������� ������ ���Ѵ�.
	int myHand[2] = {};
	cout << "�޼��� ������ �Է����ּ��� (0: ����, 1: ����, 2: ��)" << endl;
	cin >> myHand[0];

	cout << "�������� ������ �Է����ּ��� (0: ����, 1: ����, 2: ��)" << endl;
	cin >> myHand[1];



	//��ǻ�Ͱ� ������ comHand[2]��� �θ���.
	//comHand[0]�� �޼��� ����
	//comHand[1]�� �������� �����̶�� �����Ѵ�.
	//comHand[0] �� 0~2���� �߿� ���������� ���Ѵ�.
	//comHand[1] �� 0~2���� �߿� ���������� ���Ѵ�.
	int comHand[2] = {};
	for (int i = 0; i < 2; i++)
	{
		comHand[i] = rand() % 3;
	}

	// ���� ���� �ΰ��� ����Ѵ�.
	cout << "���� ���� : ";
	for (int i = 0; i < 2; i++)
	{
		/*
		if (myHand[i] == 0)
		{
			cout << "����";
		}
		else if (myHand[i] == 1)
		{
			cout << "����";
		}
		else if (myHand[i] == 2)
		{
			cout << "��";
		}
		*/
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


	// ������ ���� �ΰ��� ����Ѵ�.
	cout << "������ �� �� : ";
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

	// ���� ���������� �� ���� ���Ѵ�. (0 : �޼�, 1 : ������)
	// ���� ���������� ������ myHandFinal�̶�� �����Ѵ�.
	// ���� �޼�(0)�� ������� 
	//		myHandFinal ���� myHand[0]�� �־��ش�.
	// ���� ������(1)�� �������
	//		myHandFinal ���� myHand[1]�� �־��ش�.
	int myHandFinal = 0;
	int input;
	cout << "���� �������� ����ּ��� (0: �޼�, 1: ������)" << endl;
	cin >> input;
	if (input == 0)
	{
		myHandFinal = myHand[0];
	}
	else if (input == 1)
	{
		myHandFinal = myHand[1];
	}


	// ��ǻ�Ͱ� ���������� �� ���� ���Ѵ� (0 ~ 1 ����)
	// ��ǻ���� �������� comHandFinal�̶�� ��������.
	// ��ǻ���� �������� �޼�(0)�̸�
	//		comHandFinal = comHand[0]�� �־��ش�.
	// ��ǻ���� �������� ������(1)�̸�
	//		comHandFinal = comHand[1]�� �־��ش�.
	int comHandFinal = 0;
	int tempComInput = rand() % 2;
	if (tempComInput == 0)
	{
		comHandFinal = comHand[0];
	}
	else if (tempComInput == 1)
	{
		comHandFinal = comHand[1];
	}

	// ���� �����հ�, ��ǻ���� �������� ����Ѵ�.
	cout << "���� ���� : ";
	switch (myHandFinal)
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

	cout << "��ǻ�� ���� : ";
	switch (comHandFinal)
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

	// myHandFinal�� comHandFinal�� ���к񱳸� �Ѵ�.
	if (myHandFinal == comHandFinal)
	{
		cout << "���º�!" << endl;
	}
	else if (
		(myHandFinal == 0 && comHandFinal == 1) ||
		(myHandFinal == 1 && comHandFinal == 2) ||
		(myHandFinal == 2 && comHandFinal == 0)
		)
	{
		cout << "�÷��̾� �й�!" << endl;
	}
	else
	{
		cout << "�÷��̾� �¸�!" << endl;
	}
}