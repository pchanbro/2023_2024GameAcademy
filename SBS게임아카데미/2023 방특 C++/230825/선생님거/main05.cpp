#include <iostream>
//Console ���õ� ���
#include <Windows.h>

//�ֿܼ����� Ű���� ���õ� ���
#include <conio.h> // console input output
using namespace std;

void Gotoxy(int x, int y)
{
	
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursor(bool isShow)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (isShow)
	{
		cursorInfo.bVisible = TRUE;
		cursorInfo.dwSize = 10;
	}
	else
	{
		cursorInfo.bVisible = FALSE;
		cursorInfo.dwSize = 10;
	}

	SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void main()
{
	SetCursor(false);
	int y = 1;
	int currentArrow = 0;
	while (true)
	{
		y = 1;
		//�� ���� 3 �� ���� ��
		Gotoxy(5, y++);
		cout << "��������������������������������������������������������������������������������";
		Gotoxy(5, y++);
		cout << "��  ";
		if (currentArrow == 0)
		{
			cout << "���� ����";
		}
		else
		{
			cout << "     ����";
		}
		Gotoxy(5, y++);
		cout << "��  ";
		if (currentArrow == 1)
		{
			cout << "���� �ο�";
		}
		else
		{
			cout << "     �ο�";
		}
		Gotoxy(5, y++);
		cout << "��  ";
		if (currentArrow == 2)
		{
			cout << "���� ����";
		}
		else
		{
			cout << "     ����";
		}
		Gotoxy(5, y++);
		cout << "��������������������������������������������������������������������������������";


		//_kbhit() => Ű���� �Է¹��� �� ������ �Լ�.
		if (_kbhit())
		{
			system("cls");
			//_getch() =>  �Ű�� ���ȴ��� �˷��ִ� �Լ�.
			char ch = _getch();
			switch (ch)
			{
				//wŰ�� ��������.
			case 'w':
				currentArrow--;
				if (currentArrow < 0)
				{
					currentArrow = 0;
				}
				break;
				//sŰ�� ��������.
			case 's':
				currentArrow++;

				if (currentArrow > 2)
				{
					currentArrow = 2;
				}
				break;

			case 'k':
				if (currentArrow == 0)
				{
					Gotoxy(0, 10);
					cout << "���̸� ������ϴ�.";
				}
				else if (currentArrow == 1)
				{
					Gotoxy(0, 10);
					cout << "�ο츦 ������ϴ�.";
				}
				else if (currentArrow == 2)
				{
					Gotoxy(0, 10);
					cout << "������ ������ϴ�.";
				}
				break;
			default:
				break;
			}
		}
		
	}

}

//����
//1. ���� Ÿ�Ӿ��� 20��
//2. ���̷ο켼�� 
// �߰����� : ���̷ο켼�� �ٹм��ִ¸�ŭ 
