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

	//GetTickCount => 이함수가 호출되면
	// 프로그램이 시작되고나서 현재까지 얼마나 시간이 걸렸는지 알려준다
	// 1초째에 이코드가 실행됐다.
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