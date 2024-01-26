#include "stdafx.h"
#include "Character.h"

void Character::Init()
{
	_x = 0;
	_y = 0;
	_animationIndex = 0;
	_animationTime = 0;
}

void Character::Update(int deltaTime, char inputKey)
{
	//ĳ���� �ִϸ��̼� �ڵ�
	//deltaTime�� ���ΰ��� 500�� ������ �׋� Index ��ȭ
	_animationTime += deltaTime;
	if (500 < _animationTime)
	{
		//�ִϸ��̼� �ε��� ��ȭ! (0, 1, 2) �߿����� ���ϵ���!
		_animationTime = 0;
		_animationIndex++;
		_animationIndex %= 3;
		Erase();
		Render();
	}

}

void Character::Render()
{
}

void Character::Erase()
{
}

void Character::Release()
{
}
