#include <iostream>
#include <time.h>
#include <Windows.h>
//�ֿܼ����� Ű���� ���õ� ���
#include <conio.h> // console input output
using namespace std;

int _money;
int _betMoney;
int _betState;
int _card[52];
int _cardNum;

enum eCardShape {
	SPADE,
	DIAMOND,
	HART,
	CLOVER,
	END
};

void Gotoxy(int x, int y)
{

	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursor(bool isShow)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (isShow)
	{
		cursorInfo.bVisible = TRUE;
		cursorInfo.dwSize = 10;
	}
	else
	{
		cursorInfo.bVisible = FALSE;
		cursorInfo.dwSize = 10;
	}

	SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void GenerateCard()
{
	//ī�� ����
	for (int i = 0; i < 52; i++)
	{
		_card[i] = i + 1;
	}

	//ī�� ����
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = _card[num1];
		_card[num1] = _card[num2];
		_card[num2] = temp;
	}

	//������ ���� ī�� ����
	//4���� �����ְ� �������� 4���� ����
	_cardNum = 4;
}

//ī�� ���
void PrintCard(int cardNum)
{
	int shape = _card[cardNum] / 13;
	switch (shape)
	{
	case eCardShape::SPADE:
		cout << "��";
		break;
	case eCardShape::DIAMOND:
		cout << "��";
		break;
	case eCardShape::HART:
		cout << "��";
		break;
	case eCardShape::CLOVER:
		cout << "��";
		break;
	default:
		break;
	}

	int num = _card[cardNum] % 13 + 1;
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
	cout << " ";
}

//���� ��� ����
void Betting()
{
	//���� ��� : 1000
	//��A ��K ��3 ��2 ??
	//���� �ݾ��� �����ּ���. : 
	//���� ������ ����ּ��� ( 0: ����, 1: �ο�, 2: ����)
	cout << "���� ��� : " << _money << endl;
	PrintCard(_cardNum - 3);
	PrintCard(_cardNum - 2);
	PrintCard(_cardNum - 1);
	PrintCard(_cardNum);
	cout << "??" << endl;

	cout << "���� �ݾ��� �����ּ��� : ";
	cin >> _betMoney;
	while(_betMoney > _money)
	{
		cout << "�������� �ʰ��� �ݾ��� ������ �� �����ϴ�." << endl;
		cout << "�ٽ� ���� �ݾ��� �����ּ��� : " << endl;
		cin >> _betMoney;
	}
	_money -= _betMoney;

	cout << "���� ������ ����ּ��� ( 0 : ����, 1 : �ο�, 2 : ����) : ";
	cin >> _betState;

}

//���̷ο켼�� ���� ���
void IsHighLowSeven(int num)
{
	if (num > 7)
	{
		cout << "����" << endl;
	}
	else if (num < 7)
	{
		cout << "�ο�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
}

//��� ���
void ShowResult()
{
	//���� => ?? ���ڰ� 7���� ũ�� ���ñݾ� * 2
	//�ο� => ?? ���ڰ� 7���� ������ ���ñݾ� * 2
	//���� => ?? ���ڰ� 7�̸� ���ñݾ� * 10

	cout << "��� : ";
	PrintCard(_cardNum);

	int num = _card[_cardNum] % 13 + 1;

	IsHighLowSeven(num);

	//���̸� ���� ���
	if (num > 7 && _betState == 0)
	{
		cout << "���̸� ���߼̽��ϴ�. " << endl;
		_money += _betMoney * 2;
	}
	else if (num < 7 && _betState == 1)
	{
		cout << "�ο츦 ���߼̽��ϴ�. " << endl;
		_money += _betMoney * 2;
	}
	else if (num == 7 && _betState == 2)
	{
		cout << "������ ���߼̽��ϴ�!! " << endl;
		_money += _betMoney * 10;
	}
}

void main()
{
	//���̷ο켼��

	//���ӽ���
	//�÷��̾� �ʱ��ں� : 1000���
	//�������� 4���� ȭ�鿡 ��������
	//������ī��� ??
	srand(time(NULL));
	SetCursor(false);

	cout << "������ �����մϴ�." << endl;
	_money = 1000;
	_betMoney = 0;

	//ī�� ����
	GenerateCard();

	system("pause");

	//�ݺ�
	while (true)
	{
		system("cls");

		Betting();

		_cardNum++;

		ShowResult();

		//�����ݾ��� 0�� ���ϰų� ī�带 ������ ������ ���� ����
		if (_money < 0 || _cardNum == 51)
		{
			break;
		}

		system("pause");
	}


	//��4
	//�ο�! �÷��̾� �¸�! 
	//���� ��!

	//���� ��� : 1000
	//��K ��3 ��2 ��4 ??
	//���� �ݾ��� �����ּ���. : 
	//���� ������ ����ּ��� ( 0: ����, 1: �ο�, 2: ����)

	//�÷��̾� ��尡 0���̰ų�, 52���� �� ����������.. ���ӳ�.
}