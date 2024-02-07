#include <iostream>
#include <time.h>
using namespace std;

enum eCardShape {
	SPADE,
	DIA,
	HART,
	CLOVER,
	END
};

void Suffle(int cardArr[])
{
	for (int i = 0; i < 100000; i++)
	{
		int temp;
		int num1 = rand() % 52;
		int num2 = rand() % 52;

		temp = cardArr[num1];
		cardArr[num1] = cardArr[num2];
		cardArr[num2] = temp;
	}
}

void PrintCard(int card)
{
	int shape = card / 13;
	switch (shape)
	{
	case eCardShape::SPADE : 
		cout << "��";
		break;
	case eCardShape::DIA:
		cout << "��";
		break;
	case eCardShape::HART:
		cout << "��";
		break;
	case eCardShape::CLOVER:
		cout << "��";
		break;
	}

	int num = card % 13 + 1;
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
}

void main()
{
	srand(time(NULL));
	//ī�并ġ
	int cardArr[52] = {};

	//ī�并ġ �ʱ�ȭ

	for (int i = 0; i < 52; i++)
	{
		// 0 ~ 12 = > ��A ~ ��K
		// 13 ~ 25 = > ��A ~ ��K
		// 26 ~ 38 = > ��A ~ ��K
		// 39 ~ 51 = > ��A ~ ��K
		cardArr[i] = i;

	}

	//ī�弯��
	Suffle(cardArr);

	//ī�� ��ġ �׸���
	for (int i = 0; i < 52; i++)
	{
		PrintCard(cardArr[i]);
		cout << endl;
	}

	int playerCard = cardArr[0];
	int comCard = cardArr[1];

	cout << "���� ���� ī�� : ";
	PrintCard(playerCard);
	cout << endl;

	cout << "��ǻ�Ͱ� ���� ī�� : ";
	PrintCard(comCard);
	cout << endl;


	int playerCardNumber = playerCard % 13 + 1;
	int comCardNumber = comCard % 13 + 1;
	if (playerCardNumber  < comCardNumber) //if �� �ȿ� ���� �־��ָ� �����ϴ� �� ���� ����ϰ� �����ؼ� �־�����
	{
		cout << "�й� " << endl;
	}
	else if (playerCardNumber > comCardNumber)
	{
		cout << "�¸� " << endl;
	}
	else
	{
		cout << "���º�" << endl;
	}

}

//���� 1 ���� Ÿ�Ӿ��� 20��

//2. ���̷ο켼�� (���� ���� �ٹ� �� ���� ��ŭ �ٹ̱�)

//���̷ο켼�� (������ ���� ���̵��� ������)
// ���ӽ���
// �÷��̾� �ʱ��ں� : 1000���
// �������� 4���� ȭ�鿡 ��������
// ������ ī��� ??

// ��A ��K ��3 ��2 ??
// ���� �ݾ��� �����ּ���. :
// ���� ������ ����ּ��� ( 0 : ����, 1 : �ο�, 2 : ����)
// ���� => ?? ���ڰ� 7���� ũ�� ���ñݾ� * 2
// �ο� => ?? ���ڰ� 7���� ������ ���ñݾ� * 2
// ���� => ?? ���ڰ� 7�̸� ���ñݾ� * 10

//��4
// �ο� ! �÷��̾� �¸�!
// ���� ��!

//���� ��� 1000
//��K ��3 ��2 ��4 ??
// ���� �ݾ��� �����ּ���. :
// ���� ������ ����ּ��� ( 0 : ����, 1 : �ο�, 2 : ����)

//�÷��̾� ��尡 0���̰ų�, 52���� �� ����������(ó���� �������� 4���� �̹� �����Ǿ��ٰ� ���� ��).. ���� ��