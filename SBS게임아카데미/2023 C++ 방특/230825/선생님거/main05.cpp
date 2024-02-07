#include <iostream>
//Console 관련된 헤더
#include <Windows.h>

//콘솔에서의 키보드 관련된 헤더
#include <conio.h> // console input output
using namespace std;

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

void main()
{
	SetCursor(false);
	int y = 1;
	int currentArrow = 0;
	while (true)
	{
		y = 1;
		//ㅂ 한자 3 ㅂ 한자 ─
		Gotoxy(5, y++);
		cout << "┌───────────────────────────────────────";
		Gotoxy(5, y++);
		cout << "│  ";
		if (currentArrow == 0)
		{
			cout << "▷▶ 하이";
		}
		else
		{
			cout << "     하이";
		}
		Gotoxy(5, y++);
		cout << "│  ";
		if (currentArrow == 1)
		{
			cout << "▷▶ 로우";
		}
		else
		{
			cout << "     로우";
		}
		Gotoxy(5, y++);
		cout << "│  ";
		if (currentArrow == 2)
		{
			cout << "▷▶ 세븐";
		}
		else
		{
			cout << "     세븐";
		}
		Gotoxy(5, y++);
		cout << "└───────────────────────────────────────";


		//_kbhit() => 키보드 입력받을 때 들어오는 함수.
		if (_kbhit())
		{
			system("cls");
			//_getch() =>  어떤키가 눌렸는지 알려주는 함수.
			char ch = _getch();
			switch (ch)
			{
				//w키를 눌렀을때.
			case 'w':
				currentArrow--;
				if (currentArrow < 0)
				{
					currentArrow = 0;
				}
				break;
				//s키를 눌렀을때.
			case 's':
				currentArrow++;

				if (currentArrow > 2)
				{
					currentArrow = 2;
				}
				break;

			case 'k':
				if (currentArrow == 0)
				{
					Gotoxy(0, 10);
					cout << "하이를 골랐습니다.";
				}
				else if (currentArrow == 1)
				{
					Gotoxy(0, 10);
					cout << "로우를 골랐습니다.";
				}
				else if (currentArrow == 2)
				{
					Gotoxy(0, 10);
					cout << "세븐을 골랐습니다.";
				}
				break;
			default:
				break;
			}
		}
		
	}

}

//숙제
//1. 빙고 타임어택 20분
//2. 하이로우세븐 
// 추가숙제 : 하이로우세븐 꾸밀수있는만큼 
