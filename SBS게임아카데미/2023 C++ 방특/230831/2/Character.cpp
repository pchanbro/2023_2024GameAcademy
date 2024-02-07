#include "stdafx.h"
#include "Character.h"

void Character::Init()
{
	_x = 10;
	_y = 2;
}

void Character::Update(char inputKey)
{
	CustomConsole.ClearArea(_x * 2, _y, (_x + 1) * 2, _y);
	switch (inputKey)
	{
	case 'w':
		_y--;
		if (_y <= 1)
		{
			_y = 1;
		}

		break;
	case 'a':
		_x--;
		if (_x <= 1)
		{
			_x = 1;
		}
		break;
	case 's':
		_y++;
		if (_y >= 5)
		{
			_y = 5;
		}
		break;
	case 'd':
		_x++;
		if (_x >= 24)
		{
			_x = 24;
		}
		break;
	default:
		break;
	}
	Render();
}

void Character::Render()
{
	CustomConsole.GotoXY(_x * 2, _y); cout << "¡Ú";
}

void Character::Release()
{
}
