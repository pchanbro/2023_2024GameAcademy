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

	//GetTickCount => ���Լ��� ȣ��Ǹ�
	// ���α׷��� ���۵ǰ��� ������� �󸶳� �ð��� �ɷȴ��� �˷��ش�
	// 1��°�� ���ڵ尡 ����ƴ�.
	long prevTick = GetTickCount64();
	long currentTick = GetTickCount64();
	while (false == mainGame->IsGameEnd())
	{
		long currentTick = GetTickCount64();
		mainGame->Update(currentTick - prevTick);
		prevTick = currentTick;
	}

	mainGame->Release();
	delete mainGame;
	mainGame = nullptr;
}