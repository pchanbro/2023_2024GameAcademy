#include <iostream>		//input, output stream --> �Է�, ��¿� ���� ������ �ٷ�� ���
#include <conio.h>		//conio --> Ű�����Է� �ޱ����� ���
#include <time.h>		//time  --> �ð����õ� ���
#include <Windows.h>	//windows --> �������� ���õ� ���

using namespace std;

void showCharacter(int frame)
{
	system("cls");
	if (frame == 0)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "��" << endl;
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