#include "stdafx.h"
#include "Character.h"

void Character::Init()
{
	_x = 10;
	_y = 2;
	_animationIndex = 0;
	_animationTime = 0;
}

void Character::Update(int deltaTime, char inputKey)
{
	//캐릭터 움직이는 코드
	switch (inputKey)
	{
	case 'w':
		Erase();
		_y--;
		if (_y <= 1)
		{
			_y = 1;
		}
		Render();
		break;
	case 'a':
		Erase();
		_x--;
		if (_x <= 1)
		{
			_x = 1;
		}
		Render();
		break;
	case 's':
		Erase();
		_y++;
		if (_y >= 5)
		{
			_y = 5;
		}
		Render();
		break;
	case 'd':
		Erase();
		_x++;
		if (_x >= 24)
		{
			_x = 24;
		}
		Render();
		break;
	default:
		break;
	}


	//캐릭터 애니메이션 코드
	//deltaTime이 쌓인값이 500이 넘으면 그떄 Index 변화
	_animationTime += deltaTime;
	if (500 < _animationTime)
	{
		//애니메이션 인덱스 변화! (0, 1, 2) 중에서만 변하도록!
		_animationTime = 0;
		_animationIndex++;
		_animationIndex %= 3;
		Erase();
		Render();
	}

}

void Character::Render()
{
	switch (_animationIndex)
	{
	case 0:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "★★";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "★★";
		break;
	case 1:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "☆★";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "★☆";
		break;
	case 2:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "☆★";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "☆☆";
		break;
	default:
		break;
	}
}

void Character::Erase()
{
	CustomConsole.ClearArea(_x * 2, _y, (_x + 2) * 2, _y + 1);
}

void Character::Release()
{
}


// 다마고치
//  - 기본모션
//  - 먹이를주면 먹이를 먹는모션
//  - 놀기를누르면 노는 모션

//실습내용
// 1. 기본 모션 애니메이션 
// 2. 몇초마다 x좌표를 좌로갔다가 우로갔다가 반복.


//스네이크게임
