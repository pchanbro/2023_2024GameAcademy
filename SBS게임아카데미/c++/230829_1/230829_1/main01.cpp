#include <iostream>
#include <time.h>
#include <Windows.h>
#define _BINGOSIZE 5
#define _BOARDSIZE (_BINGOSIZE * _BINGOSIZE)
using namespace std;

int _myBoard[_BOARDSIZE];
int _comBoard[_BOARDSIZE];

void InitBoard(int board[])
{
	for (int i = 0; i < _BOARDSIZE; i++)
	{
		board[i] = i + 1;
	}

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;

		int temp = board[num1];
		board[num1] = board[num2];
		board[num2] = temp;
	}
}

void MarkBoard(int input)
{
	for (int i = 0; i < _BOARDSIZE; i++)
	{
		if (_myBoard[i] == input)
		{
			_myBoard[i] = -1;
		}
	}

	for (int i = 0; i < _BOARDSIZE; i++)
	{
		if (_comBoard[i] == input)
		{
			_comBoard[i] = -1;
		}
	}
}

void printBoard(int board[])
{
	for (int i = 0; i < _BOARDSIZE; i++)
	{
		if (i % _BINGOSIZE == _BINGOSIZE - 1)
		{
			if (board[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << board[i] << endl;
			}
		}
		else
		{
			if (board[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << board[i] << "\t";
			}
		}
		
	}
}

bool IsBingo(int board[])
{
	for (int i = 0; i < _BINGOSIZE; i++)
	{
		int temp = 0;
		int startPoint = i * _BINGOSIZE;
		for (int j = 0; j < _BINGOSIZE; j++)
		{
			int checkPoint = startPoint + j;
			if (board[checkPoint] == -1)
			{
				temp++;
			}
		}

		if (temp == 5)
		{
			return true;
		}
	}

	for (int i = 0; i < _BINGOSIZE; i++)
	{
		int temp = 0;
		int startPoint = i;
		for (int j = 0; j < _BINGOSIZE; j++)
		{
			int checkPoint = startPoint + j * _BINGOSIZE + j;
			if (board[checkPoint] == -1)
			{
				temp++;
			}
		}

		if (temp == 5)
		{
			return true;
		}
	}

	int temp = 0;
	for (int i = 0; i < _BINGOSIZE; i++)
	{
		int checkPoint = i * _BINGOSIZE + i;
		
		if (board[checkPoint] == -1)
		{
			temp++;
		}

		if (temp == 5)
		{
			return true;
		}
	}
	

	temp = 0;
	for (int i = 0; i < _BINGOSIZE; i++)
	{
		int checkPoint = i * _BINGOSIZE + _BINGOSIZE - 1 - i;
		if (board[checkPoint] == -1)
		{
			temp++;
		}

		if (temp == 5)
		{
			break;
		}
	}

	return false;
}

void main()
{
	srand(time(NULL));

	InitBoard(_myBoard);
	InitBoard(_comBoard);

	system("pause");

	while (true)
	{
		system("cls");

		cout << "내 보드 " << endl;
		printBoard(_myBoard);

		cout << "컴퓨터 보드 " << endl;
		printBoard(_comBoard);

		int input;
		cout << "수를 입력해주세요 : ";
		cin >> input;

		MarkBoard(input);

		system("cls");

		if (IsBingo(_myBoard))
		{
			cout << "승리" << endl;
			break;
		}
		if (IsBingo(_comBoard))
		{
			cout << "패배" << endl;
			break;
		}

		int comInput = rand() % 25 + 1;
		MarkBoard(comInput);

		if (IsBingo(_comBoard))
		{
			cout << "패배" << endl;
			break;
		}
		if (IsBingo(_myBoard))
		{
			cout << "승리" << endl;
			break;
		}

		cout << "내 보드 " << endl;
		printBoard(_myBoard);

		cout << "컴퓨터 보드 " << endl;
		printBoard(_comBoard);

		system("pause");

	}
}