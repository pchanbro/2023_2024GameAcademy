#include <iostream>
//Console ���õ� ���
#include <windows.h>

//
#include <conio.h>
using namespace std;

void Gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void main()
{
	Gotoxy(10, 3);
	cout << "�ȳ��ϼ��� " << endl;

	int y = 1;
	int currentArrow = 0;

	while (true)
	{
		
		y = 1;
		system("cls");
		//�� ���� 3 �� ���� -
		Gotoxy(5, y++);
		cout << "��������������������������������������������������������������������������";
		Gotoxy(5, y++);
		cout << "��  " << "�� �� " << "     ����";
		Gotoxy(5, y++);
		cout << "��       �ο�            ";
		Gotoxy(5, y++);
		cout << "��       ����                            ";
		Gotoxy(5, y++);
		cout << "��������������������������������������������������������������������������";


		// _kbhit() => Ű���� �Է¹��� �� ������ �Լ�.
		if (_kbhit())
		{
			cout << "Ű���� �Է¹���";
			// _getch() => �Ű�� ���ȴ��� �˷��ִ� �Լ�.
			char ch = _getch();
			switch (ch)
			{
			case 'w':
				currentArrow--;
				break;
			}
		}

		//setCursor�� ����â�� �����Ÿ��°� �����ִ� ����

		system("pause");
	}
}