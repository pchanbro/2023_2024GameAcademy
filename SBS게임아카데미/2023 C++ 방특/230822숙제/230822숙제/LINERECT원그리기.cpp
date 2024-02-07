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

		cout << "그릴 유형을 선택해주세요. (0 : 점, 1 : 라인, 2 : 네모, 3 : 원)" << endl;
		int drawType = 0;
		int selectLine = 0;
		int circleRadius = 0;
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
			
			// 선이 가로인지 세로인지 선택
			cout << "가로 세로를 선택하세요( 0 : 가로, 1 : 세로) : ";
			cin >> selectLine;

			switch (selectLine)
			{
				//가로인 경우 시작점과 끝점의 y좌표는 같게 설정
			case horizontal:
				cout << "시작점의 x 좌표를 입력해주세요.";
				cin >> point1.x;
				cout << "시작점의 y 좌표를 입력해주세요.";
				cin >> point1.y;
				cout << "끝점의 x 좌표를 입력해주세요.";
				cin >> point2.x;
				point2.y =  point1.y;

				for (int i = point1.x; i <= point2.x; i++) 
				{
					board[point1.y][i] = 'E';
				}
				break;

				//세로인 경우 시작점과 끝점의 x좌표는 같게 설정
			case vertical:
				cout << "시작점의 x 좌표를 입력해주세요.";
				cin >> point1.x;
				cout << "시작점의 y 좌표를 입력해주세요.";
				cin >> point1.y;
				cout << "끝점의 y 좌표를 입력해주세요.";
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

			//사각형의 경우 시작점과 끝점의 x,y좌표를 입력받음
			cout << "시작점의 x 좌표를 입력해주세요.";
			cin >> point3.x;
			cout << "시작점의 y 좌표를 입력해주세요.";
			cin >> point3.y;
			cout << "끝점의 x 좌표를 입력해주세요.";
			cin >> point4.x;
			cout << "끝점의 y 좌표를 입력해주세요.";
			cin >> point4.y;

			//x좌표를 변경시켜주며 가로줄 만들기
			for (int i = point3.x; i <= point4.x; i++)
			{
				board[point3.y][i] = 'E';
				board[point4.y][i] = 'E';
			}

			//y좌표를 변경시켜주며 세로줄 만들기
			for (int i = point3.y; i < point4.y; i++)
			{
				board[i][point3.x] = 'E';
				board[i][point4.x] = 'E';
			}
			
			break;
		case eDrawType::DRAWTYPE_CIRCLE:
			//원의 경우 중심점과 반지름을 입력받음
			Point point5;
			cout << "그릴 x 좌표를 입력해주세요.";
			cin >> point5.x;
			cout << "그릴 y 좌표를 입력해주세요.";
			cin >> point5.y;
			cout << "반지름 길이를 입력하세요.";
			cin >> circleRadius;

			// 원의 중심에서 반지름 만큼 x,y좌표를 빼준 곳부터 원에 중심에 x,y좌표를 더해준 곳까지 살펴보며 
			// 원의 공식인 x제곱 + y제곱 = r제곱 범위 안에 들어간 좌표들을 변경시켜준다.
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