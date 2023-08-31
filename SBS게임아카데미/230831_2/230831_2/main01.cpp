#include "stdafx.h" 
// 프로젝트 우클릭 속성 - 구성 - c/c++ - 미리 컴파일된 헤더 - 만들기로 표시
// 이렇게 하면 stdafx.h를 모든 파일에 include 해줘야함



void main()
{
	//타이틀을 설정한다.
	CustomConsole.SetTitle("가위바위보");

	//글자색을 변경한다.
	CustomConsole.SetTextColor(LIGHTBLUE);

	//글자색의 BackGround색 변경
	CustomConsole.SetBkColor(GRAY);

	//커서를 없앤다.
	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	//윈도우 사이즈를 조정한다.
	CustomConsole.SetWindowSize(100, 30);
	//윈도우 전체 사이즈 조정한다.
	CustomConsole.SetScreenFufferSize(100, 30);

	int x, y = 0;

	x = 0;
	y = 0;
	while (true)
	{
		if (_kbhit())
		{
			char ch = _getch();
			if (ch == 'w')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				y--;
				//특수문자는 2글자 취급
				CustomConsole.GotoXY(x, y);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "■■■■■■" << endl;
			}
			else if (ch == 's')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				y++;
				//특수문자는 2글자취급
				CustomConsole.GotoXY(x, y);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "■■■■■■" << endl;
			}
			else if (ch == 'a')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				x -= 2;
				//특수문자는 2글자취급
				CustomConsole.GotoXY(x, y);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "■■■■■■" << endl;
			}
			else if (ch == 'd')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				x += 2;
				//특수문자는 2글자취급
				CustomConsole.GotoXY(x, y);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "■■■■■■" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "■■■■■■" << endl;
			}
		}
	}
}
// 나만의 캐릭터를 만들고
// 1. MainGame 클래스
// 2. 캐릭터 클래스
// 3. 캐릭터를 움직인다.
// 조건
// 1. UI가 꼭 존재해야한다.
// 2. 캐릭터의 활동범위가 UI범위를 침범하면 안된다.