#include "stdafx.h"
#include "MainGame.h"

void main()
{
	//2. 실습
	// 나만의 캐릭터를 만들고
	// 1.MainGame 클래스
	// 2.캐릭터 클래스
	// 3.캐릭터를 움직인다.
	// 조건
	// 1. UI가 꼭 존재해야한다.
	// 2. 캐릭터의 활동범위가 UI범위를 침범하면 안된다.
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