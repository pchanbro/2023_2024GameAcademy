#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()
using namespace std;



int main()
{
	CustomConsole.SetCursor(tvision::CursorMode::CURSOR_OFF);

	CustomConsole.setFontSize(6);
	CustomConsole.SetWindowSize(210, 105);
	CustomConsole.ClearScreen(GREEN);

	CustomConsole.SetTitle("æ»≥Á«œººø‰22");
	CustomConsole.SetCursor(tvision::CURSOR_OFF);
	int x = 7;

	while (true)
	{
		if (_kbhit())
		{
			char input = _getch();
			switch (input)
			{
			case 'w':
				x++;
				CustomConsole.ClearArea(x, 3, x + 7, 3 + 7);
				break;
			default:				
				break;
			}
		}
	}

	return 0;
}
