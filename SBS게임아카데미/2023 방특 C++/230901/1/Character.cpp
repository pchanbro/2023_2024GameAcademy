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
	//ĳ���� �����̴� �ڵ�
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
	switch (_animationIndex)
	{
	case 0:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "�ڡ�";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "�ڡ�";
		break;
	case 1:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "�١�";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "�ڡ�";
		break;
	case 2:
		CustomConsole.GotoXY(_x * 2, _y);		cout << "�١�";
		CustomConsole.GotoXY(_x * 2, _y + 1);	cout << "�١�";
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


// �ٸ���ġ
//  - �⺻���
//  - ���̸��ָ� ���̸� �Դ¸��
//  - ��⸦������ ��� ���

//�ǽ�����
// 1. �⺻ ��� �ִϸ��̼� 
// 2. ���ʸ��� x��ǥ�� �·ΰ��ٰ� ��ΰ��ٰ� �ݺ�.


//������ũ����
