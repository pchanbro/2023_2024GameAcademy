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
	// 2차원 배열
	int arr[25] = { 0, };

	int arr2[25][25] = { 0, };

	//초기화
	//for문을 사용한 배열 초기화
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

		cout << "그릴 유형을 선택해주세요. (0 : 점, 1 : 라인, 2 : 네모)" << endl;
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
			Point point1;
			Point point2;
			cout << "시작점의 x 좌표를 입력해주세요.";
			cin >> point1.x;
			cout << "시작점의 y 좌표를 입력해주세요.";
			cin >> point1.y;
			cout << "끝점의 x 좌표를 입력해주세요.";
			cin >> point2.x;
			cout << "끝점의 y 좌표를 입력해주세요.";
			cin >> point2.y;
			board[point.y][point.x] = '-';
			break;
		case eDrawType::DRAWTYPE_RECT:
			Point point;
			cout << "그릴 x 좌표를 입력해주세요.";
			cin >> point.x;
			cout << "그릴 y 좌표를 입력해주세요.";
			cin >> point.y;
			board[point.y][point.x] = 'ㅁ';
			break;
		case eDrawType::DRAWTYPE_CIRCLE:
			Point point;
			cout << "그릴 x 좌표를 입력해주세요.";
			cin >> point.x;
			cout << "그릴 y 좌표를 입력해주세요.";
			cin >> point.y;
			board[point.y][point.x] = 'p';
			break;
		default:
			break;
		}

		//입력을 받을 때 까지 기다린다.
		system("pause");

	}

	// 숙제 2. 
	// LINE 완성
	// 숙제 3.
	// RECT 완성
	// 추가숙제 
	// 원그리기
}