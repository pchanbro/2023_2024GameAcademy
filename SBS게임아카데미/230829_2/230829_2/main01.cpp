#include "main.h"
#include "MainGame.h"

void main()
{
	MainGame mainGame;
	mainGame.Init();

	while (!mainGame.IsGameEnd())
	{
		mainGame.Updata();
	}

	mainGame.Release();
}