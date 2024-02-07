#include <iostream>
#include <time.h>
using namespace std;

void printCard(int cardNum)
{
	switch (cardNum / 13)
	{
	case 0:
		cout << "��";
		break;
	case 1:
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	default:
		break;
	}

	switch (cardNum % 13 + 1)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << cardNum % 13 + 1;
		break;
	}
}

int main()
{
	//���̷ο켼��
	
	//ī�带 ���´�.
	//�÷��̾� ��� �ʱ�ȭ (10000��)
	//������ �����մϴ�. �������
	//������ ����ɶ����� �ݺ�
	//	�������� ����
	//	����Ÿ�� ����
	//	ī�����
	//	���ð�������� ��ó��
	//	ī���ε��� ����
	//	ī�尡 ���������̰ų�, �÷��̾� ��尡 ������ ���� ����.

	int card[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	//ī�带 ���´�.
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = card[num1];
		card[num1] = card[num2];
		card[num2] = temp;
	}
	int playerGold = 10000;
	int cardIndex = -1;
	cout << "������ �����մϴ�." << endl;
	while (true)
	{
		cardIndex++;
		if (52 <= cardIndex || playerGold <= 0)
		{
			break;
		}
		//	�������� ����
		//	����Ÿ�� ����
		//	ī�����
		//	���ð�������� ��ó��
		//	ī���ε��� ����
		//	ī�尡 ���������̰ų�, �÷��̾� ��尡 ������ ���� ����.
		cout << "���� �÷��̾� ��� : " << playerGold << endl;

		int betInput;
		cout << "������ �Ͻðڽ��ϱ�? (0: ��, 1: �ƴϿ�)" << endl;
		cin >> betInput;
		playerGold -= 1000;

		if (betInput == 0)
		{
			//��������
			int betType;
			cout << "���� Ÿ���� ����ּ���. (0 : ����, 1 : �ο�, 2 : ����)" << endl;
			cin >> betType;

			printCard(card[cardIndex]);

			int cardNum = card[cardIndex] % 13 + 1;	//ī�� ������ ����1~13
			if (betType == 0 && 7 < cardNum)
			{
				cout << "�¸�" << endl;
				playerGold += 2000;
			}
			else if (betType == 1 && cardNum < 7)
			{
				cout << "�¸�" << endl;
				playerGold += 2000;
			}
			else if (betType == 2 && cardNum == 7)
			{
				cout << "7 �¸�" << endl;
				playerGold += 10000;
			}
			else
			{
				cout << "�й�" << endl;
			}
		}
		else
		{
			continue;
		}


	}



	return 0;
}