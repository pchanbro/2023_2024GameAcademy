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
	int lineType;	// 0 : 가로, 1 : 세로
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
	//2차원배열
	int arr[25] = { 0, };

	int arr2[25][20] = { 0, };
	//초기화
	//for문을 사용한 배열초기화
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
		//출력된 내용을 모두 지워준다.
		system("cls");
		for (int i = 0; i < 25; i++)
		{
			for (int j = 0; j < 25; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		cout << "그릴 유형을 선택해주세요. (0: 점, 1: 라인, 2: 네모)" << endl;
		int drawType = 0;
		cin >> drawType;

		//(0: 점, 1: 라인, 2: 네모) -> enum으로 바꿔준다.
		switch (drawType)
		{
		case eDrawType::DRAWTYPE_POINT:
			Point point;
			cout << "그릴 x 좌표를 입력해주세요.";
			cin >> point.x;
			cout << "그릴 y 좌표를 입력해주세요.";
			cin >> point.y;
			board[point.y][point.x] = 'p';
			break;
		case eDrawType::DRAWTYPE_LINE:
			Line line;
			cout << "Line 유형을 골라주세요 (0: 가로, 1: 세로)";
			cin >> line.lineType;
			cout << "그릴 x 좌표를 입력해주세요.";
			cin >> line.startPos.x;
			cout << "그릴 y 좌표를 입력해주세요.";
			cin >> line.startPos.y;
			cout << "길이를 입력해주세요.";
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
			//첫점, 끝점
			Rect rect;
			cout << "x1을 입력해주세요.";
			cin >> rect.LeftTop.x;
			cout << "y1을 입력해주세요.";
			cin >> rect.LeftTop.y;
			cout << "x2을 입력해주세요.";
			cin >> rect.RightBottom.x;
			cout << "y2을 입력해주세요.";
			cin >> rect.RightBottom.y;

			//배열과함께 쓰는 포문이 아닐때는
			// 어디부터 어디까지
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

		//입력을 받을때까지 기다린다.
		system("pause");

	}

	//숙제 2.
	// Line 완성
	//숙제 3.
	// Rect 완성
	//추가숙제
	// 원그리기
}