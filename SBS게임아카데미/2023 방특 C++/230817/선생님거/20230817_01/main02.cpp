#include <iostream>
using namespace std;

void main()
{
	srand(time(NULL));
	// ���� 2. �����

	// ���� ������ ���Ѵ�. (0~2)
	// ���� ������ myHand��� �θ���.
	// ��ǻ�Ͱ� ������ comHand��� �θ���.
	// ��ǻ�ʹ� 0~2������ �������� ������.
	
	// ���� ������ ����Ѵ�. 
	//	   �̶�, myHand�� 0�̸� ����,
	//		myHand�� 1�̸� ����,
	//		myHand�� 2�� ��

	// ��밡 ������ ����Ѵ�. 
	//	   �̶�, comHand�� 0�̸� ����,
	//		comHand�� 1�̸� ����,
	//		comHand�� 2�� ��

	// myHand�� comHand�� ���ٸ� ���� ������ �ݺ��Ѵ�.

	// ���� ���� �̰������ ���� ������ isPlayerWinner��� �θ���.
	// ���� �̰�����, isPlayerWinner�� true�� �����Ѵ�.
	// ���� ������, isPlayerWinner�� false�� �����Ѵ�.

	// comHand�� myHand�� �ٸ��� �Ʒ������� �ݺ��Ѵ�.
	//		���� ������ ���Ѵ� (myHand)
	//		��밡 ������ ���Ѵ� (0~2 ����) (comHand)
	//		���� �̰�����, isPlayerWinner�� true�� �����Ѵ�.
	//		���� ������, isPlayerWinner�� false�� �����Ѵ�.

	// isPlayerWinner�� true��
	//		[���] �÷��̾� �¸�
	// �׷��� ������
	//		[���] ��ǻ�� �¸�

	//=============================================
	//		����� ����
	//=============================================

	int myHand = 0;
	int comHand = 0;

	do
	{
		// ���� ������ ���Ѵ�. (0~2)
		// ���� ������ myHand��� �θ���.
		cout << "���� ������ ����ּ��� (0: ����, 1:����, 2:��)" << endl;
		cin >> myHand;


		// ��ǻ�Ͱ� ������ comHand��� �θ���.
		// ��ǻ�ʹ� 0~2������ �������� ������.
		comHand = rand() % 3;

		// ���� ������ ����Ѵ�. 
		//	   �̶�, myHand�� 0�̸� ����,
		//		myHand�� 1�̸� ����,
		//		myHand�� 2�� ��

		cout << "���� ���� : ";
		if (myHand == 0)
		{
			cout << "����";
		}
		if (myHand == 1)
		{
			cout << "����";
		}
		if (myHand == 2)
		{
			cout << "��";
		}
		cout << endl;

		// ��밡 ������ ����Ѵ�. 
		//	   �̶�, comHand�� 0�̸� ����,
		//		comHand�� 1�̸� ����,
		//		comHand�� 2�� ��
		cout << "��밡 ���� : ";
		if (comHand == 0)
		{
			cout << "����";
		}
		if (comHand == 1)
		{
			cout << "����";
		}
		if (comHand == 2)
		{
			cout << "��";
		}
		cout << endl;
	} while (myHand == comHand);
	// myHand�� comHand�� ���ٸ� ���� ������ �ݺ��Ѵ�.


	// ���� ���� �̰������ ���� ������ isPlayerWinner��� �θ���.
	// ���� �̰�����, isPlayerWinner�� true�� �����Ѵ�.
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
	//		���� ������ ���Ѵ� (myHand)
	//		��밡 ������ ���Ѵ� (0~2 ����) (comHand)
	// 
	//		���� ������ ������ش�.
	//		��밡 ������ ������ش�.
	// 
	//		���� �̰�����, isPlayerWinner�� true�� �����Ѵ�.
	//		���� ������, isPlayerWinner�� false�� �����Ѵ�.
	while (comHand != myHand)
	{
		//���� ������ ���Ѵ� (myHand)
		cout << "���� ������ ����ּ��� (0:����, 1:����, 2:��)" << endl;
		cin >> myHand;
		//��밡 ������ ���Ѵ� (0~2 ����) (comHand)
		comHand = rand() % 3;

		//		���� ������ ������ش�.
		cout << "���� ���� : ";
		if (myHand == 0)
		{
			cout << "����";
		}
		else if (myHand == 1)
		{
			cout << "����";
		}
		else if (myHand == 2)
		{
			cout << "��";
		}
		cout << endl;

		//		��밡 ������ ������ش�.
		cout << "��밡 �� �� : ";
		if (comHand == 0)
		{
			cout << "����";
		}
		else if (comHand == 1)
		{
			cout << "����";
		}
		else if (comHand == 2)
		{
			cout << "��";
		}
		cout << endl;


		//		���� �̰�����, isPlayerWinner�� true�� �����Ѵ�.
		//		���� ������, isPlayerWinner�� false�� �����Ѵ�.
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
			cout << "[��������!]" << endl;
		}
		else
		{
			cout << "[��� ������!]" << endl;
		}
	}

	// isPlayerWinner�� true��
	//		[���] �÷��̾� �¸�
	// �׷��� ������
	//		[���] ��ǻ�� �¸�
	if (isPlayerWinner == true)
	{
		cout << "�÷��̾� �¸�" << endl;
	}
	else
	{
		cout << "��ǻ�� �¸�" << endl;
	}

}