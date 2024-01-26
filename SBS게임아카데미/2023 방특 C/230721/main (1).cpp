#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"
#include "main.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()
using namespace std;

DWORD oriColor = GREEN;

void setPixelColor(DWORD color)
{
	CustomConsole.SetBkColor(color);
	cout << "ㅤ";
}
void ShowMyCharacter(int x, int y)
{
	CustomConsole.GotoXY(x, y);
	setPixelColor(oriColor);	setPixelColor(WHITE);		setPixelColor(oriColor);	setPixelColor(oriColor);	setPixelColor(oriColor);	setPixelColor(WHITE);		setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 1);
	setPixelColor(oriColor);	setPixelColor(RED);			setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(RED);			setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 2);
	setPixelColor(oriColor);	setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(LIGHTRED);	setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 3);
	setPixelColor(oriColor);	setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 4);
	setPixelColor(oriColor);	setPixelColor(LIGHTRED);	setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(LIGHTRED);	setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 5);
	setPixelColor(oriColor);	setPixelColor(LIGHTRED);	setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(LIGHTRED);	setPixelColor(oriColor);
	CustomConsole.GotoXY(x, y + 6);
	setPixelColor(oriColor);	setPixelColor(LIGHTRED);	setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(BLACK);		setPixelColor(LIGHTRED);	setPixelColor(oriColor);

	CustomConsole.SetBkColor(oriColor);
}

int main()
{
	//1. 구구단 (이중포문 사용)
	//2. 빙고 (5x5 vs Com) 내 칸과 컴퓨터의 빙고 칸을 보여주면서 내가 자리를 고르고 컴퓨터는 랜덤으로 고르도록 하기 누가 먼저 빙고하나
	//3. 기존에 만든 게임 CustomConsole 사용해서 꾸미기

	CustomConsole.SetCursor(tvision::CURSOR_OFF); //콘솔창에서 떴다 안떴다 하는 밑줄 없애줌
	CustomConsole.ClearScreen(GREEN); //콘솔창 배경색 변경
	cout << "안녕하세요." << endl; //근데 글을 출력하면 그 말의 배 경은 다시 검정이 됨

	

	CustomConsole.SetBkColor(GREEN); //글씨 배경색 변경
	CustomConsole.SetTextColor(BLACK); //글씨 색 변경
	cout << "안녕하세요." << endl;

	CustomConsole.SetTitle("실행창 제목 변경");
	//CustomConsole.setFontSize(6);
	CustomConsole.SetWindowSize(210, 210);

	CustomConsole.GotoXY(10, 5);
	cout << "여기 좌표는 10,5 입니다.";
	//ShowMyCharacter(7, 7);
	//CustomConsole.ClearArea(7, 7, 18, 14);

	CustomConsole.GotoXY(2, 5);
	cout << "가위";
	CustomConsole.GotoXY(2, 6);
	cout << "바위";
	CustomConsole.GotoXY(2, 7);
	cout << "보";

	int index = 0;
	CustomConsole.GotoXY(0, 5 + index);
	cout << "▶";
	
	while (true)
	{
		//키보드 입력받기 _kbhit()
		if (_kbhit())
		{
			// _getch() ->어떤 문자를 입력하였는지.
			char input = _getch();
			switch (input)
			{
			case 'w':
				CustomConsole.ClearArea(0, 5 + index, 1, 5 + index);
				index--;
				if (index < 0)
				{
					index = 0;
				}
				break;
			case 's':
				CustomConsole.ClearArea(0, 5 + index, 1, 5 + index);
				index++;
				if (index > 2)
				{
					index = 2;
				}
				break;
			default:
				break;
			}

			CustomConsole.GotoXY(0, 5 + index);
			cout << "▶";
		}
	}

	return 0;
}