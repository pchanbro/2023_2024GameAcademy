#include <iostream>
//Console 관련된 헤더
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
	cout << "안녕하세요 " << endl;

	int y = 1;
	int currentArrow = 0;

	while (true)
	{
		
		y = 1;
		system("cls");
		//ㅂ 한자 3 ㅂ 한자 -
		Gotoxy(5, y++);
		cout << "┌───────────────────────────────────┐";
		Gotoxy(5, y++);
		cout << "│  " << "▷ ▶ " << "     하이";
		Gotoxy(5, y++);
		cout << "│       로우            ";
		Gotoxy(5, y++);
		cout << "│       세븐                            ";
		Gotoxy(5, y++);
		cout << "└───────────────────────────────────┘";


		// _kbhit() => 키보드 입력받을 때 들어오는 함수.
		if (_kbhit())
		{
			cout << "키보드 입력받음";
			// _getch() => 어떤키가 눌렸는지 알려주는 함수.
			char ch = _getch();
			switch (ch)
			{
			case 'w':
				currentArrow--;
				break;
			}
		}

		//setCursor는 도스창에 깜빡거리는거 없애주는 거임

		system("pause");
	}
}