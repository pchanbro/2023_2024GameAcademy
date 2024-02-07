#include <iostream>
#include <Windows.h>
#include <time.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()
using namespace std;

void RenderPlayer();

struct Unit
{
	int hp;
	int damage;
	float attackSpeed;
	int attackCheckTime;


	int x, y, width, height;
	int animationIndex;
	int animationCheckTime;
};

Unit _player;
int main()
{
	CustomConsole.SetCursor(tvision::CURSOR_OFF);
	// 애니메이션 출력
	_player.hp = 100;
	_player.damage = 1;

	_player.x = 0;
	_player.y = 0;
	_player.animationIndex = 0;
	_player.animationCheckTime = GetTickCount64();


	while (true)
	{
		if (GetTickCount64() - _player.animationCheckTime >= 200)
		{
			_player.animationIndex++;
			if (_player.animationIndex > 2)
			{
				_player.animationIndex = 0;
			}
			_player.animationCheckTime = GetTickCount64();
			RenderPlayer();
		}
	}

	return 0;
}


void RenderPlayer()
{
	int plusY = 0;
	CustomConsole.ClearArea(_player.x, _player.y, _player.x + 22, _player.y + 6);
	switch (_player.animationIndex)
	{
	case 0:
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("    _______		  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("---'   ____)____  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("          ______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("          _______)\n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("         _______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("---.__________)	  \n");
		break;

	case 1:
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("        _______		  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("    ---'   ____)____  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("              ______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("              _______)\n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("             _______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("    ---.__________)	  \n");
		break;
	case 2:
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("       _______		  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("   ---'   ____)____  \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("             ______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("             _______)\n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("            _______) \n");
		CustomConsole.GotoXY(_player.x, _player.y + plusY++); printf("   ---.__________)	  \n");
		break;
	default:
		break;
	}
}