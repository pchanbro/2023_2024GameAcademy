#include "stdafx.h"
#include "MainGame.h"

void main()
{
	//2. �ǽ�
	// ������ ĳ���͸� �����
	// 1.MainGame Ŭ����
	// 2.ĳ���� Ŭ����
	// 3.ĳ���͸� �����δ�.
	// ����
	// 1. UI�� �� �����ؾ��Ѵ�.
	// 2. ĳ������ Ȱ�������� UI������ ħ���ϸ� �ȵȴ�.
	MainGame* mainGame = new MainGame();
	mainGame->Init();

	while (false == mainGame->IsGameEnd())
	{
		mainGame->Update();
	}

	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}