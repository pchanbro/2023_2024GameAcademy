#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"

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
	//1. 구구단 (이중포문 사용해서)
	//2. 빙고 (5x5 vs Com)
	//3. 기존에 만든게임 CustomConsole 사용해서 꾸미기

	CustomConsole.SetCursor(tvision::CURSOR_OFF);
	CustomConsole.ClearScreen(GREEN);

	CustomConsole.SetBkColor(GREEN);
	CustomConsole.SetTextColor(BLACK);
	cout << "안녕하세요." << endl;
	

	CustomConsole.SetTitle("게임1");
	//CustomConsole.setFontSize(6);
	CustomConsole.SetWindowSize(210, 100);

	CustomConsole.GotoXY(10, 5);

	cout << "여기 좌표는 10, 5 입니다.";
	//ShowMyCharacter(7, 7);
	CustomConsole.ClearArea(7, 7, 18, 14);


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
		//키보드입력받기
		if (_kbhit())
		{
			//_getch => 어떤 문자를 입력하였는지
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