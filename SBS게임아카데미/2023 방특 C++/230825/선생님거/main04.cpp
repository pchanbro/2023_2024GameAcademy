#include <iostream>
#include <time.h>
using namespace std;
enum eCardShape {
	SPACE,
	DIAMOND,
	HEART,
	CLOVER,
	END
};

void PrintCard(int card)
{
	//ī�� �׸���
	/*switch (card)
	{
	case 0:
		cout << "��A";
		break;
	case 1:
		cout << "��2";
		break;
	case 2:
		cout << "��3";
		break;
	default:
		break;
	}*/

	int shape = card / 13;
	//0~12 => ��A ~ ��K ==> 0
	//13~25 => ��A ~ ��K ==> 1
	//26~38 => ��A ~ ��K ==> 2
	//39~51 => ��A ~ ��K ==> 3

	switch (shape)
	{
	case eCardShape::SPACE:
		cout << "��";
		break;
	case eCardShape::DIAMOND:
		cout << "��";
		break;
	case eCardShape::HEART:
		cout << "��";
		break;
	case eCardShape::CLOVER:
		cout << "��";
		break;
	default:
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
	//��A ~ ��K (52������ ������ Ʈ����ī��)

	//ī�并ġ
	int cardArr[52] = {};

	//ī�并ġ �ʱ�ȭ
	for (int i = 0; i < 52; i++)
	{
		//���
		//0~12 => ��A ~ ��K
		//13~25 => ��A ~ ��K
		//26~38 => ��A ~ ��K
		//39~51 => ��A ~ ��K
		cardArr[i] = i;

		//����������
		//hand => 0 
		//�����ٷ� �θ���
	}

	//ī�弯��
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = cardArr[num1];
		cardArr[num1] = cardArr[num2];
		cardArr[num2] = temp;
	}

	//ī�� ��ġ �׸���
	for (int i = 0; i < 52; i++)
	{
		PrintCard(cardArr[i]);
		cout << endl;
	}

	//���� ¤�� ī�� : ��7
	//��밡 ¤�� ī�� : ��3
	//���� �¸�!
	int playerCard = cardArr[0];
	int comCard = cardArr[1];

	cout << "���� ¤�� ī�� : ";
	PrintCard(playerCard);
	cout << endl;

	cout << "��밡 ¤�� ī�� : ";
	PrintCard(comCard);
	cout << endl;

	int playerCardNumber = playerCard % 13 + 1;
	int comCardNumber = comCard % 13 + 1;
	if (playerCardNumber < comCardNumber)
	{
		cout << "�й�" << endl;
	}
	else if (comCardNumber < playerCardNumber)
	{
		cout << "�¸�" << endl;
	}
	else
	{
		cout << "���º�" << endl;
	}
}

//���̷ο켼��
//���ӽ���
//�÷��̾� �ʱ��ں� : 1000���
//�������� 4���� ȭ�鿡 ��������
//������ī��� ??

//���� ��� : 1000
//��A ��K ��3 ��2 ??
//���� �ݾ��� �����ּ���. : 
//���� ������ ����ּ��� ( 0: ����, 1: �ο�, 2: ����)
//���� => ?? ���ڰ� 7���� ũ�� ���ñݾ� * 2
//�ο� => ?? ���ڰ� 7���� ������ ���ñݾ� * 2
//���� => ?? ���ڰ� 7�̸� ���ñݾ� * 10

//��4
//�ο�! �÷��̾� �¸�! 
//���� ��!

//���� ��� : 1000
//��K ��3 ��2 ��4 ??
//���� �ݾ��� �����ּ���. : 
//���� ������ ����ּ��� ( 0: ����, 1: �ο�, 2: ����)

//�÷��̾� ��尡 0���̰ų�, 52���� �� ����������.. ���ӳ�.