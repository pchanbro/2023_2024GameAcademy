#include "stdafx.h"


void main()
{
	//Ÿ��Ʋ�� �����Ѵ�.
	CustomConsole.SetTitle("����������");

	//���ڻ��� �����Ѵ�.
	CustomConsole.SetTextColor(LIGHTGREEN);

	//���ڻ��� BackGround���� �����Ѵ�.
	CustomConsole.SetBkColor(GRAY);

	//Ŀ���� ���ش�.
	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	//������ ����� �����Ѵ�.
	CustomConsole.SetWindowSize(100, 30);
	//������ ��ü ����� �����Ѵ�.
	CustomConsole.SetScreenFufferSize(100, 30);

	int x, y = 0;

	CustomConsole.GotoXY(0, 13);
	cout << "���� ��� : 1000";

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
				//Ư�����ڴ� 2�������
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
// 1.MainGame Ŭ����
// 2.ĳ���� Ŭ����
// 3.ĳ���͸� �����δ�.
// ����
// 1. UI�� �� �����ؾ��Ѵ�.
// 2. ĳ������ Ȱ�������� UI������ ħ���ϸ� �ȵȴ�.


//------------------------------
//		���� ���� �� ����!!
//------------------------------
// 

//����������							
//									[?? ������]

    //�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�
	//�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�
	//�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�
	//�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�
	//�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�
	//�� �ڵ� �׸�			  //��ǻ�� �ڵ� �׸�


//���� ������ ����ּ���				 
//����	����
//		����		
//		��

/*
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
*/

/*
	_______
---'   ____)____
		  ______)
	   __________)
	  (____)
---.__(___)
*/


/*
	_______
---'   ____)____
		  ______)
		  _______)
		 _______)
---.__________)
*/

