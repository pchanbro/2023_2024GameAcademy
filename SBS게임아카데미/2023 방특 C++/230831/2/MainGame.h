#pragma once
class Character;
class MainGame
{
public:
	//������ => �ּҰ�
	Character* _character;

	bool _isGameEnd;

	void Init();
	void Update();
	void Release();

	bool IsGameEnd();
};

