#include <iostream>
#include <Windows.h>
#define COMPLIED_CONSOLE
#include "TConsole.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()

using namespace std;
struct Unit
{
	int renderCheckTime;
	int renderIndex;
	int x, y, width, height;
};

void PrintString(int x, int y, const char str[])
{
	CustomConsole.GotoXY(x, y); 
	cout << str;
}

void RenderCharacter(Unit unit)
{
	int x = unit.x;
	int y = unit.y;
	int width = unit.width;
	int height = unit.height;
	
	CustomConsole.ClearArea(x, y, x + width, y + height);
	switch (unit.renderIndex)
	{
	case 0:
		PrintString(x, y++, "                ====@");
		PrintString(x, y++, "               =     @");
		PrintString(x, y++, "              =      @");
		PrintString(x, y++, "             =       @");
		PrintString(x, y++, "            =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "     =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
	case 1:
		PrintString(x, y++, "             ====@");
		PrintString(x, y++, "             =     @");
		PrintString(x, y++, "             =      @");
		PrintString(x, y++, "             =       @");
		PrintString(x, y++, "            =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "     =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
	case 2:
		PrintString(x, y++, "     ====@");
		PrintString(x, y++, "      =     @");
		PrintString(x, y++, "       =      @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "     =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
		break;
	default:
		break;
	}
}

int main() {
	CustomConsole.SetCursor(tvision::CURSOR_OFF);
	Unit myUnit = { 0, 0, 0, 0, 22, 22 };
	myUnit.renderCheckTime = GetTickCount64();
	while (true)
	{
		//1초에 2번 변경
		if (GetTickCount64() - myUnit.renderCheckTime >= 500)
		{
			myUnit.renderCheckTime = GetTickCount64();
			++myUnit.renderIndex %= 3;
			RenderCharacter(myUnit);
		}
	}
}