#pragma once
class Character;
class MainGame
{
public:
	//포인터 => 주소값
	Character* _character;

	bool _isGameEnd;

	void Init();
	void Update();
	void Release();

	bool IsGameEnd();
};

