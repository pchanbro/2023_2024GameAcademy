#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _myBoard[5][5] = {}; //굳이 2차원 배열을 쓰지 말고 int _myBoard[25]로 하는게 더 깔끔하다.
int _comBoard[5][5] = {};
int _input;
int _comNum;
bool myWin;
bool comWin;


//빙고 보드 생성  수를 넣어주고 섞어준다
void generateBingoBoard(int board[][5])
{
	// 각 자리에 맞는 수 생성
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			board[i][j] = i * 5 + j + 1;
		}
	}

	// 판 섞기
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 5;
		int num2 = rand() % 5;
		int num3 = rand() % 5;
		int num4 = rand() % 5;
		int temp;
		temp = board[num1][num2];
		board[num1][num2] = board[num3][num4];
		board[num3][num4] = temp;
	}
}

// 보드 출력
void printBingoBoard(int board[][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// int배열을 사용하기 때문에 #으로 바꾼 경우 char로 변환하여 출력한다.
			if (board[i][j] == '#')
			{
				cout << (char)board[i][j] << "\t";
			}
			else
			{
				cout << board[i][j] << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;
}

// 숫자를 선택하면 나와 컴퓨터의 보드에서 선택된 숫자를 #으로 변경한다.
// 변경이 됐다면 true 변경이 안되면 false 반환
bool changeBoard(int _input, int myBoard[][5], int comBoard[][5])
{
	bool isChange = false;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (myBoard[i][j] == _input)
			{
				myBoard[i][j] = '#';
				isChange = true;
			}

			if (comBoard[i][j] == _input)
			{
				comBoard[i][j] = '#';
			}
		}
		cout << endl;
	}

	return isChange;
}

// 승리했는지 여부 파악
bool isWin(int board[][5])
{
	int bingoNum;
	// 가로 빙고 
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (board[i][0] == board[i][j])
			{
				bingoNum++;
			}
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// 세로 빙고
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (board[0][i] == board[j][i])
			{
				bingoNum++;
			}
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// 대각선(\) 빙고
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		if (board[0][0] == board[i][i])
		{
			bingoNum++;
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// 대각선(/) 빙고
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		if (board[0][4] == board[i][4-i])
		{
			bingoNum++;
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	return false;
}

void main()
{
	// 빙고게임 만들기

	// 5x5로 이루어진 나의 판
	// 5x5로 이루어진 컴퓨터 판
	// 각 빙고판 안에는 1~25까지의 숫자가 드렁있음.

	//내턴 -> 상대턴 -> 내턴 -> 상대턴 반복

	// 각자 턴일 때 , 부른 숫자는 숫자로 표기안되고  #으로 표기됨.

	// 빙고가 완성되면 해당 플레이어 승리


	srand(time(NULL));

	// 나의 판 생성 ( 1 ~ 25 번호 생성하고 섞어준다)
	// 컴퓨터 판 생성

	// 반복
	//		내 입력 
	//		입력된 수를 #으로 변경
	//		컴퓨터의 임의의 수 입력
	//		입력된 수를 #으로 변경
	//		만일 컴퓨터나 내 입력이 이미 바뀐 수인 경우 다시 입력
	//		나와 컴퓨터의 빙고 여부 확인
	//		어느 한쪽이 빙고가 완성되면 게임 종료


	// 나의 판 생성 ( 1 ~ 25 번호 생성하고 섞어준다)
	// 컴퓨터 판 생성
	generateBingoBoard(_myBoard);
	generateBingoBoard(_comBoard);



	while (true)
	{
		system("cls");

		// 나와 컴퓨터 판 현 상황 출력
		printBingoBoard(_myBoard);
		printBingoBoard(_comBoard);

		// 내 입력
		cout << "나의 턴, 빙고판에 남아있는 수를 입력하세요. : ";
		cin >> _input;
		// 입력된 수를 #으로 변경
		while (!changeBoard(_input, _myBoard, _comBoard))
		{
			cout << "남아있는 수 중에 입력해주세요, 다시 입력하세요 : ";
			cin >> _input;
		}

		// 나와 컴퓨터의 빙고 여부 확인
		myWin = isWin(_myBoard);
		comWin = isWin(_comBoard);

		// 내가 빙고라면 승리
		if (myWin)
		{
			cout << "승리 " << endl;
			break;
		}
		// 그렇지 않고 컴퓨터 빙고라면 패배
		else if (comWin)
		{
			cout << "패배" << endl;
			break;
		}

		// 나와 컴퓨터 판 현 상황 출력
		printBingoBoard(_myBoard);
		printBingoBoard(_comBoard);


		cout << "컴퓨터의 차례, 진행을 원하시면 아무키를 눌러주세요." << endl;
		system("pause");

		// 컴퓨터의 임의의 수 입력
		_comNum = rand() % 25 + 1;

		while (!changeBoard(_comNum, _myBoard, _comBoard))
		{
			_comNum = rand() % 25 + 1;
		}

		// 나와 컴퓨터의 빙고 여부 확인
		myWin = isWin(_myBoard);
		comWin = isWin(_comBoard);

		// 컴퓨터의 빙고라면 패배
		if (comWin)
		{
			cout << "패배 " << endl;
			break;
		}
		// 그렇지 않고 내 빙고라면 승리
		else if (myWin)
		{
			cout << "컴퓨터의 입력으로 승리" << endl;
			break;
		}

	}
	
}