#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// ������ ���� 2. �����
	
	// ���� �� ���� ���Ѵ�. (0~2)
	// ���� �� ���� myHand��� �θ���.
	// ��ǻ�Ͱ� �� ���� comHand��� �θ���.
	// ��ǻ�ʹ� 0 ~ 2 ������ �������� ������.
	
	// ���� �� ���� ����Ѵ�.
	//		�� ��, myHand�� 0�̸� ����,
	//		myHand�� 1�̸� ����,
	//		myHand�� 2�� ��

	// ��밡 �� ���� ����Ѵ�.
	//		�� ��, comHand�� 0�̸� ����,
	//		comHand�� 1�̸� ����,
	//		comHandrk 2�� ��

	// myHand�� comHand�� ���ٸ� ���� ������ �ݺ��Ѵ�.

	// ���� ���� �̰������ ���� ������ isPlayerWinner��� �θ���.
	// ���� �̰�����, isPlayerWinner�� treu�� �����Ѵ�.
	// ���� ������, isPlayerWinner�� false�� �����Ѵ�.

	// comHand�� myHand�� �ٸ��� �Ʒ������� �ݺ��Ѵ�.
	//		���� �� ���� ���Ѵ�. (myHand)
	//		��밡 �� ���� ���Ѵ�. (0 ~ 2 ����) (comHand)
	//		���� �̰�����, isPlayerWinner�� treu�� �����Ѵ�.
	//		���� ������, isPlayerWinner�� false�� �����Ѵ�.

	//isPlayerWinner�� true�� 
	//		[���] �÷��̾� �¸�
	// �׷��� �����
	//		[���] ��ǻ�� �¸�


	//=========================================================
	//		�ڵ� �ۼ� ����
	//=========================================================

	srand(time(NULL));

	int myHand = 0;
	int comHand = 0;

	do
	{
		// ���� �� ���� ���Ѵ�. (0~2)
		// ���� �� ���� myHand��� �θ���.
		cout << "���� �� ���� ����ּ��� (0 : ����, 1 : ����, 2 : ��)" << endl;
		cin >> myHand;
	
		// ��ǻ�Ͱ� �� ���� comHand��� �θ���.
		// ��ǻ�ʹ� 0 ~ 2 ������ �������� ������.
		comHand = rand() % 3;

		// ���� �� ���� ����Ѵ�.
		//		�� ��, myHand�� 0�̸� ����,
		//		myHand�� 1�̸� ����,
		//		myHand�� 2�� ��
	
		cout << "���� �� �� : ";
		if (myHand == 0)
		{
			cout << "����" << endl;
		}
		else if (myHand == 1)
		{
			cout << "����" << endl;
		}
		else if (myHand == 2)
		{
			cout << "��" << endl;
		}

		// ��밡 �� ���� ����Ѵ�.
		//		�� ��, comHand�� 0�̸� ����,
		//		comHand�� 1�̸� ����,
		//		comHandrk 2�� ��

		cout << "������ �� �� : ";
		if (comHand == 0)
		{
			cout << "����" << endl;
		}
		else if (comHand == 1)
		{
			cout << "����" << endl;
		}
		else if (comHand == 2)
		{
			cout << "��" << endl;
		}
		cout << endl;
	} while (myHand == comHand);

	// myHand�� comHand�� ���ٸ� ���� ������ �ݺ��Ѵ�.

	// ���� ���� �̰������ ���� ������ isPlayerWinner��� �θ���.
	// ���� �̰�����, isPlayerWinner�� treu�� �����Ѵ�.
	// ���� ������, isPlayerWinner�� false�� �����Ѵ�.
	bool isPlayerWinner = false;

	if (myHand == 0 && comHand == 1)
	{
		isPlayerWinner = false;
	}
	else if (myHand == 1 && comHand == 2)
	{
		isPlayerWinner = false;
	}
	else if (myHand == 2 && comHand == 0)
	{
		isPlayerWinner = false;
	}
	else
	{
		isPlayerWinner = true;
	}

	// comHand�� myHand�� �ٸ��� �Ʒ������� �ݺ��Ѵ�.
	//		���� �� ���� ���Ѵ�. (myHand)
	//		��밡 �� ���� ���Ѵ�. (0 ~ 2 ����) (comHand)
	// 
	//		���� �� ���� ������ش�.
	//		��밡 �� ���� ������ش�.
	// 
	//		���� �̰�����, isPlayerWinner�� treu�� �����Ѵ�.
	//		���� ������, isPlayerWinner�� false�� �����Ѵ�.
	while (comHand != myHand)
	{
		//���� �� ���� ���Ѵ�. 
		cout << "���� �� ���� ���Ѵ�. ( 0 : ����, 1 : ����, 2 : �� ) :";
		cin >> myHand;

		//��밡 �� ���� ���Ѵ�. (0 ~ 2 ����) (comHand)
		comHand = rand() % 3;

		//		���� �� ���� ������ش�.
		cout << "���� �� �� : ";
		if (myHand == 0)
		{
			cout << "����" << endl;
		}
		else if (myHand == 1)
		{
			cout << "����" << endl;
		}
		else if (myHand == 2)
		{
			cout << "��" << endl;
		}

		//		��밡 �� ���� ������ش�.
		cout << "��ǻ�Ͱ� �� �� : ";
		if (comHand == 0)
		{
			cout << "����" << endl;
		}
		else if (comHand == 1)
		{
			cout << "����" << endl;
		}
		else if (comHand == 2)
		{
			cout << "��" << endl;
		}

		//���� �̰�����, isPlayerWinner�� treu�� �����Ѵ�.
		//���� ������, isPlayerWinner�� false�� �����Ѵ�.
		if (myHand == 0 && comHand == 1)
		{
			isPlayerWinner = false;
		}
		else if (myHand == 1 && comHand == 2)
		{
			isPlayerWinner = false;
		}
		else if (myHand == 2 && comHand == 0)
		{
			isPlayerWinner = false;
		}
		else
		{
			isPlayerWinner = true;
		}

		if (isPlayerWinner == true)
		{
			cout << "[��������]" << endl;
		}
		else if (isPlayerWinner == false)
		{
			cout << "[��������]" << endl;
		}

	}
	//isPlayerWinner�� true�� 
	//		[���] �÷��̾� �¸�
	// �׷��� �����
	//		[���] ��ǻ�� �¸�
}