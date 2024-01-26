#pragma once
//#include "MainGame.h"
class Character
{
public:
	int _x, _y;

	void Init();
	void Update(char inputKey);
	void Render();
	void Release();
};

