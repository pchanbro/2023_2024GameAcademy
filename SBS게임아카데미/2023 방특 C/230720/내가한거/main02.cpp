#include <iostream>

using namespace std;

int main()
{
	//�迭
	//Ʈ����ī��
	int card[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	//00 ~ 12 ��A ~ ��K
	//13 ~ 25 ��A ~ ��K
	//26 ~ 38 ��A ~ ��K
	//39 ~ 52 ��A ~ ��K

	for (int i = 0; i < 52; i++)
	{
		//switch��
		//switch(��)
		//{
		//   case  ����:
		//       break;
		//{
		//  ���� ����� �������� ã�Ƽ� �ش� ������ �����Ѵ�.
		//  case�� break�� ���� �̷��� �Ѵ�.
		switch (card[i] / 13)
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

		int num = card[i] % 13 + 1;
		switch (num)
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
			cout << num;
			break;
		}

		cout << endl;

		/*
		if (card[i] / 13 == 0)
		{
			cout << "��";
		}
		else if (card[i] / 13 == 1)
		{
			cout << "��";
		}
		else if (card[i] / 13 == 2)
		{
			cout << "��";
		}
		else if (card[i] / 13 == 3)
		{
			cout << "��";
		}
		cout << card[i] % 13 + 1;
		cout << " ";

		if (card[i] % 13 == 12)
		{
			cout << endl;
		}
		*/

		int a = 3;
		int b = 1;
		//swap ����
		int a = 3;
		int b = 1;
		int temp = a;
		a = b;
		b = temp;

		//shuffle
		//Swap�� ������ 10000��
		srand(time(NULL));
		for (int i = 0; i < 100000; i++)
		{
			int num1 = rand() % 52;
			int num2 = rand() % 52;
			int cardTemp = card[num1];
			card[num1] = card[num2];
			card[num1] = cardTemp;
		}
	}
	
	cout << "ī�� ���� �Ϸ�" << endl;

	//���� 
	//���̷ο켼��
	//1. �÷��̾ 1000�� ��� ����.
	//2. ���� 100���� �������� ������ ����
	//3. ī�� 52���� �����ϰ�
	//4. ������ �����ߴٸ�, ī�� ���徿 ������ �� ���� 7��������, 7�̻�����, 7�̶� �������� ����
	//5. ���ÿ� �����ϸ� ���ñ��� 2�� ȹ��, 7������ ���߸� 10�� ȹ��
	//6. ī�� 52���� �� ������ ���� ���� (�ƴϸ� �������� 0������)

	//����
	//1. �����ϸ� ���� ����
	//2. �÷��̾ ī��1���� ����.
	//3. ������ ī��1���� ����.
	//4. �÷��̾ Go, Stop ���ϸ�,
	//5. Go�� ������, ī�带 ���� ������
	//6. ī�� ������ ���� 21�� ������ �й�
	//7. Stop�� ��ġ��
	//8. ������ ī�� 21�������� ī�带 ��� �ް�,
	//9. �÷��̾��� ī�� ���ں��� ������ ī����ڰ� ������ �÷��̾� �й�
	//10. ������ ī����� ���� �÷��̾� ī����ں��� ������ �÷��̾� �¸�

	return 0;
}