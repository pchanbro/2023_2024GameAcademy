#pragma once
class Character;
class MainGame
{
public:
	//������ => �ּҰ�
	Character* _character;

	bool _isGameEnd;

	void Init();
	void Update(int deltaTime);
	void Release();

	bool IsGameEnd();
};

