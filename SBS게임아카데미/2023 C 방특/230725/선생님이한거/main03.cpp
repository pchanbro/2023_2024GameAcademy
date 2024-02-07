#include <iostream>		//input, output stream --> 입력, 출력에 관한 내용을 다루는 헤더
#include <conio.h>		//conio --> 키보드입력 받기위한 헤더
#include <time.h>		//time  --> 시간관련된 헤더
#include <Windows.h>	//windows --> 윈도우기능 관련된 헤더

using namespace std;

void showCharacter(int frame)
{
	system("cls");
	if (frame == 0)
	{
		cout << "★" << endl;
	}
	else
	{
		cout << "☆" << endl;
	}
}

int main()
{
	int lastFrame = GetTickCount64();
	int renderFrame = 0;
	while (true)
	{
		if (1000 <= GetTickCount64() - lastFrame)
		{
			lastFrame = GetTickCount64();
			renderFrame++;
			renderFrame %= 2;
			showCharacter(renderFrame);
		}
	}
}