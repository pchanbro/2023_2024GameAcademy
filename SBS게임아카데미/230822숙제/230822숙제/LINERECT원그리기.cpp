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

enum eLine {
	horizontal,
	vertical
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

		cout << "�׸� ������ �������ּ���. (0 : ��, 1 : ����, 2 : �׸�, 3 : ��)" << endl;
		int drawType = 0;
		int selectLine = 0;
		int circleRadius = 0;
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
			
			// ���� �������� �������� ����
			cout << "���� ���θ� �����ϼ���( 0 : ����, 1 : ����) : ";
			cin >> selectLine;

			switch (selectLine)
			{
				//������ ��� �������� ������ y��ǥ�� ���� ����
			case horizontal:
				cout << "�������� x ��ǥ�� �Է����ּ���.";
				cin >> point1.x;
				cout << "�������� y ��ǥ�� �Է����ּ���.";
				cin >> point1.y;
				cout << "������ x ��ǥ�� �Է����ּ���.";
				cin >> point2.x;
				point2.y =  point1.y;

				for (int i = point1.x; i <= point2.x; i++) 
				{
					board[point1.y][i] = 'E';
				}
				break;

				//������ ��� �������� ������ x��ǥ�� ���� ����
			case vertical:
				cout << "�������� x ��ǥ�� �Է����ּ���.";
				cin >> point1.x;
				cout << "�������� y ��ǥ�� �Է����ּ���.";
				cin >> point1.y;
				cout << "������ y ��ǥ�� �Է����ּ���.";
				cin >> point2.y;
				point2.x = point1.x;

				for (int i = point1.y; i <= point2.y; i++)
				{
					board[i][point1.x] = 'I';
				}
				break;
			}
			break;
		case eDrawType::DRAWTYPE_RECT:
			Point point3;
			Point point4;

			//�簢���� ��� �������� ������ x,y��ǥ�� �Է¹���
			cout << "�������� x ��ǥ�� �Է����ּ���.";
			cin >> point3.x;
			cout << "�������� y ��ǥ�� �Է����ּ���.";
			cin >> point3.y;
			cout << "������ x ��ǥ�� �Է����ּ���.";
			cin >> point4.x;
			cout << "������ y ��ǥ�� �Է����ּ���.";
			cin >> point4.y;

			//x��ǥ�� ��������ָ� ������ �����
			for (int i = point3.x; i <= point4.x; i++)
			{
				board[point3.y][i] = 'E';
				board[point4.y][i] = 'E';
			}

			//y��ǥ�� ��������ָ� ������ �����
			for (int i = point3.y; i < point4.y; i++)
			{
				board[i][point3.x] = 'E';
				board[i][point4.x] = 'E';
			}
			
			break;
		case eDrawType::DRAWTYPE_CIRCLE:
			//���� ��� �߽����� �������� �Է¹���
			Point point5;
			cout << "�׸� x ��ǥ�� �Է����ּ���.";
			cin >> point5.x;
			cout << "�׸� y ��ǥ�� �Է����ּ���.";
			cin >> point5.y;
			cout << "������ ���̸� �Է��ϼ���.";
			cin >> circleRadius;

			// ���� �߽ɿ��� ������ ��ŭ x,y��ǥ�� ���� ������ ���� �߽ɿ� x,y��ǥ�� ������ ������ ���캸�� 
			// ���� ������ x���� + y���� = r���� ���� �ȿ� �� ��ǥ���� ��������ش�.
			for (int i = point5.x - circleRadius; i <= point5.x + circleRadius; i++)
			{
				for (int j = point5.y - circleRadius; j <= point5.y + circleRadius; j++)
				{
					if ((i - point5.x) * (i - point5.x) + (j - point5.y) * (j - point5.y) <= circleRadius * circleRadius)
					{
						board[j][i] = 'O';
					}
				}
			}
			
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