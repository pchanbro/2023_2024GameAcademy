#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

enum eDrawType {
	DRAWTYPE_POINT,
	DRAWTYPE_LINE,
	DRAWTYPE_RECT,
	DRAWTYPE_CIRCLE
};

struct Point
{
	int x;
	int y;
};

void main()
{
	// 2���� �迭
	int arr[25] = { 0, };

	int arr2[25][25] = { 0, };

	//�ʱ�ȭ
	//for���� ����� �迭 �ʱ�ȭ
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			arr2[i][j] = 0;
		}
	}

	char board[25][25] = {};
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			board[i][j] = ' ';
		}
	}
	

	while (true)
	{
		//��µ� ������ ��� �����ش�.
		system("cls");
		for (int i = 0; i < 25; i++)
		{
			for (int j = 0; j < 25; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		cout << "�׸� ������ �������ּ���. (0 : ��, 1 : ����, 2 : �׸�)" << endl;
		int drawType = 0;
		cin >> drawType;

		//(0: ��, 1: ����, 2: �׸�) -> enum���� �ٲ��ش�.
		switch (drawType)
		{
		case eDrawType::DRAWTYPE_POINT:
			Point point;
			cout << "�׸� x ��ǥ�� �Է����ּ���.";
			cin >> point.x;
			cout << "�׸� y ��ǥ�� �Է����ּ���.";
			cin >> point.y;
			board[point.y][point.x] = 'p';
			break;
		case eDrawType::DRAWTYPE_LINE:
			Point point1;
			Point point2;
			cout << "�������� x ��ǥ�� �Է����ּ���.";
			cin >> point1.x;
			cout << "�������� y ��ǥ�� �Է����ּ���.";
			cin >> point1.y;
			cout << "������ x ��ǥ�� �Է����ּ���.";
			cin >> point2.x;
			cout << "������ y ��ǥ�� �Է����ּ���.";
			cin >> point2.y;
			board[point.y][point.x] = '-';
			break;
		case eDrawType::DRAWTYPE_RECT:
			Point point;
			cout << "�׸� x ��ǥ�� �Է����ּ���.";
			cin >> point.x;
			cout << "�׸� y ��ǥ�� �Է����ּ���.";
			cin >> point.y;
			board[point.y][point.x] = '��';
			break;
		case eDrawType::DRAWTYPE_CIRCLE:
			Point point;
			cout << "�׸� x ��ǥ�� �Է����ּ���.";
			cin >> point.x;
			cout << "�׸� y ��ǥ�� �Է����ּ���.";
			cin >> point.y;
			board[point.y][point.x] = 'p';
			break;
		default:
			break;
		}

		//�Է��� ���� �� ���� ��ٸ���.
		system("pause");

	}

	// ���� 2. 
	// LINE �ϼ�
	// ���� 3.
	// RECT �ϼ�
	// �߰����� 
	// ���׸���
}