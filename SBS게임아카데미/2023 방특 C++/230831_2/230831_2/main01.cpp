#include "stdafx.h" 
// ������Ʈ ��Ŭ�� �Ӽ� - ���� - c/c++ - �̸� �����ϵ� ��� - ������ ǥ��
// �̷��� �ϸ� stdafx.h�� ��� ���Ͽ� include �������



void main()
{
	//Ÿ��Ʋ�� �����Ѵ�.
	CustomConsole.SetTitle("����������");

	//���ڻ��� �����Ѵ�.
	CustomConsole.SetTextColor(LIGHTBLUE);

	//���ڻ��� BackGround�� ����
	CustomConsole.SetBkColor(GRAY);

	//Ŀ���� ���ش�.
	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	//������ ����� �����Ѵ�.
	CustomConsole.SetWindowSize(100, 30);
	//������ ��ü ������ �����Ѵ�.
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
				//Ư�����ڴ� 2���� ���
				CustomConsole.GotoXY(x, y);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "�������" << endl;
			}
			else if (ch == 's')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				y++;
				//Ư�����ڴ� 2�������
				CustomConsole.GotoXY(x, y);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "�������" << endl;
			}
			else if (ch == 'a')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				x -= 2;
				//Ư�����ڴ� 2�������
				CustomConsole.GotoXY(x, y);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "�������" << endl;
			}
			else if (ch == 'd')
			{
				CustomConsole.ClearArea(x, y, x + 12, y + 2);
				x += 2;
				//Ư�����ڴ� 2�������
				CustomConsole.GotoXY(x, y);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 1);
				cout << "�������" << endl;
				CustomConsole.GotoXY(x, y + 2);
				cout << "�������" << endl;
			}
		}
	}
}
// ������ ĳ���͸� �����
// 1. MainGame Ŭ����
// 2. ĳ���� Ŭ����
// 3. ĳ���͸� �����δ�.
// ����
// 1. UI�� �� �����ؾ��Ѵ�.
// 2. ĳ������ Ȱ�������� UI������ ħ���ϸ� �ȵȴ�.