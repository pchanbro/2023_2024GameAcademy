#include <iostream>
#include <Windows.h>
using namespace std;

enum eDrawType {
	DRAWTYPE_POINT,
	DRAWTYPE_LINE,
	DRAWTYPE_RECT
};

struct Point
{
	int x;
	int y;
};

struct Line
{
	int lineType;	// 0 : ����, 1 : ����
	Point startPos;
	int length;
};

struct Rect
{
	Point LeftTop;
	Point RightBottom;
};


void main()
{
	//2�����迭
	int arr[25] = { 0, };

	int arr2[25][20] = { 0, };
	//�ʱ�ȭ
	//for���� ����� �迭�ʱ�ȭ
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

		cout << "�׸� ������ �������ּ���. (0: ��, 1: ����, 2: �׸�)" << endl;
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
			Line line;
			cout << "Line ������ ����ּ��� (0: ����, 1: ����)";
			cin >> line.lineType;
			cout << "�׸� x ��ǥ�� �Է����ּ���.";
			cin >> line.startPos.x;
			cout << "�׸� y ��ǥ�� �Է����ּ���.";
			cin >> line.startPos.y;
			cout << "���̸� �Է����ּ���.";
			cin >> line.length;

			for (int i = 0; i < line.length; i++)
			{
				if (line.lineType == 0)
				{
					board[line.startPos.y][line.startPos.x + i] = 'L';
				}
				else
				{
					board[line.startPos.y + i][line.startPos.x] = 'L';
				}
			}
			break;
		case eDrawType::DRAWTYPE_RECT:
		{
			//ù��, ����
			Rect rect;
			cout << "x1�� �Է����ּ���.";
			cin >> rect.LeftTop.x;
			cout << "y1�� �Է����ּ���.";
			cin >> rect.LeftTop.y;
			cout << "x2�� �Է����ּ���.";
			cin >> rect.RightBottom.x;
			cout << "y2�� �Է����ּ���.";
			cin >> rect.RightBottom.y;

			//�迭���Բ� ���� ������ �ƴҶ���
			// ������ ������
			int x1 = rect.LeftTop.x;
			int x2 = rect.RightBottom.x;
			int y1 = rect.LeftTop.y;
			int y2 = rect.RightBottom.y;
			for (int x = x1; x <= x2; x++)
			{
				for (int y = y1; y <= y2; y++)
				{
					board[y][x] = 'R';
				}
			}
		}
			break;
		default:
			break;
		}

		//�Է��� ���������� ��ٸ���.
		system("pause");

	}

	//���� 2.
	// Line �ϼ�
	//���� 3.
	// Rect �ϼ�
	//�߰�����
	// ���׸���
}