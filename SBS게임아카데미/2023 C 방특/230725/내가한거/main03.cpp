#include <iostream>		//input, output, stream --> �Է�, ��¿� ���� ������ �ٷ�� ���
#include <conio.h>		//conio --> Ű���� �Է� �ޱ����� ���
#include <time.h>		//time -- > �ð����õ� ���
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
	int lastFrame = GetTickCount();//windows.h�� �����ؾ� ��� ����
	while (true)
	{
		//cout << "���������� ��´�." << endl;
		//if (_kbhit())
		//{
		//	char ch = _getch();
		//	cout << GetTickCount() << endl; //��ǻ�Ͱ� ������ �󸶳� ������ ����ũ�� ������ ������
		//}
		
		if (1000 <= GetTickCount() - lastFrame)
		{
			lastFrame = GetTickCount();
			cout << "1�ʰ� �귶���ϴ�." << endl;
		}
	}
	return 0;
}

//230725 ���� 
//1. �����
//2. �ζǹ�ȣ ������ (1~45�� ���� �迭�� �ְ� �� �߿� 7���� �������� �̴� ��)