#include <iostream>
#define BINGO_SIZE 5
#define BOARD_SIZE (BINGO_SIZE * BINGO_SIZE)
using namespace std;
int _myBoard[BOARD_SIZE] = {};
int _comBoard[BOARD_SIZE] = {};


//함수 선언 공식
//자료형 함수명(매게변수) 
//{
//}

void MarkBoard(int input)
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		//input과 같은 값이 있으면 
		if (input == _myBoard[i])
		{
			_myBoard[i] = -1;
		}
	}

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		//input과 같은 값이 있으면 
		if (input == _comBoard[i])
		{
			_comBoard[i] = -1;
		}
	}
}

void PrintBoard(int board[])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (i % BINGO_SIZE == BINGO_SIZE - 1)
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

//
void InitializeBoard(int board[])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		board[i] = i + 1;
	}

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % BOARD_SIZE;
		int num2 = rand() % BOARD_SIZE;

		int temp = board[num1];
		board[num1] = board[num2];
		board[num2] = temp;
	}
}


bool IsCompleteBoard(int board[])
{
	//내꺼 빙고 줄이 완성되면 true
	//완성 안되었으면 false

	//1. 가로줄 체크
	//2. 세로줄 체크
	//3. 대각선 체크 /
	//4. 대각선 체크 \


	//1. 가로줄 체크
	//BINGO 사이즈만큼, 세로줄을 돌면서
	//해당 줄의 값이 모두 -1이면
	//	==> 
	// 1. temp 라는 변수를 선언하고 0으로 초기화한다.
	// 2. 해당 줄을 모두 순회하면서 값이 -1이면 temp를 하나 증가시킨다.
	// 3. 해당 줄을 순회한 이후에 temp의 값이 BINGO_SIZE와 같다면, 해당 줄의 값이 모두 -1이다.
	// 
	//  TRUE
	//하나라도 -1이 아니면 통과

	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkStartIndex = i * BINGO_SIZE;
		int temp = 0;

		//해당 줄을 순회한다.
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			int checkIndex = checkStartIndex + j;
			if (board[checkIndex] == -1)
			{
				temp++;
			}
		}

		//순회한 이후에
		if (temp == BINGO_SIZE)
		{
			return true;
		}
	}

	//2. 세로줄체크
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkStartIndex = i;
		int temp = 0;

		//해당 줄을 순회한다.
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			int checkIndex = checkStartIndex + BINGO_SIZE * j;
			if (board[checkIndex] == -1)
			{
				temp++;
			}
		}

		//순회한 이후에
		if (temp == BINGO_SIZE)
		{
			return true;
		}
	}

	//3. 대각선 체크 \ 
	int temp = 0;
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkIndex = i * BINGO_SIZE + i;
		if (board[checkIndex] == -1)
		{
			temp++;
		}
	}
	if (temp == BINGO_SIZE)
	{
		return true;
	}

	//3. 대각선 체크 /
	temp = 0;
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkIndex = (BINGO_SIZE - 1 - i) + BINGO_SIZE * i;
		if (board[checkIndex] == -1)
		{
			temp++;
		}
	}
	if (temp == BINGO_SIZE)
	{
		return true;
	}


	return false;
}

//빙고 완료
void main()
{
	// 빙고게임 만들기

	// 5x5로 이루어진 나의 판
	// 5x5로 이루어진 컴퓨터 판
	// 각 빙고판안에는 1~25까지의 숫자가 들어있음.

	// 내턴 -> 상대턴 -> 내턴 -> 상대턴 반복

	// 각자 턴일때, 숫자를 하나 부른다.
	// 부른 숫자는 숫자로 표기안되고 #으로 표기됨.

	//출력예시
	//나 : 
	// 7 6 15 20 #
	// 1 5 3  7  2
	// ...
	// ...
	// ...

	//상대 : 
	// 1 5 3  7  2
	// 7 6 15 20 #
	// ...
	// ...
	// ...

	// 빙고가 완성되면 해당 플레이어 승리.



	// 수도코드
	// 1. 나의 판을 초기화한다.
	// 나의 판을 myBoard라고 부른다.
	// 나의 판을 1~25까지의 숫자로 초기화한다.
	// 나의 판을 섞는다.

	// 2.
	// 컴퓨터의 판을 comBaord라고 부른다.
	// 컴퓨터의 판을 1~25의 숫자로 초기화한다.
	// 컴퓨터의 판을 섞는다.

	// 3. myBoard를 출력한다.
	// 4. comBoard를 출력한다.

	// 5. 아래 내용을 반복한다.
	// 숫자를 하나 입력받는다.
	// 입력받은 이 숫자를 input이라고 부른다
	// myBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
	// comBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.

	// 6.  숫자를 하나 랜덤으로 뽑아온다.
	// 입력받은 이 숫자를 input이라고 부른다
	// myBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
	// comBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.

	//1번 
	InitializeBoard(_myBoard);
	//2번
	InitializeBoard(_comBoard);

	while (true)
	{
		system("cls");
		// 3. myBoard를 출력한다.
		cout << "내 보드 : " << endl;
		PrintBoard(_myBoard);

		cout << "컴퓨터 보드 : " << endl;
		PrintBoard(_comBoard);

		int input;
		cout << "지울 숫자를 입력해주세요. : ";
		cin >> input;
		MarkBoard(input);
		int comInput = rand() % 25 + 1; // 1~25까지중에 랜덤한 숫자
		cout << "컴퓨터가 뽑은 숫자 : " << comInput << endl;
		MarkBoard(comInput);
		

		//내꺼 빙고 줄이 완성되면,
		//	승리
		//상대꺼 빙고 줄이 완성되면,
		//	패배
		if (true == IsCompleteBoard(_myBoard))
		{
			cout << "승리" << endl;
			return;
		}

		if (true == IsCompleteBoard(_comBoard))
		{
			cout << "패배" << endl;
			return;
		}


		system("pause");
	}



}

// 숙제: 빙고 타임어택