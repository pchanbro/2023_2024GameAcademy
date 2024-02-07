#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

void printBingo(int bingo[], int correctArr[], int correctIndex)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bool isContain = false;
			for (int k = 0; k < correctIndex; k++)
			{
				if (bingo[i * 5 + j] == correctArr[k])
				{
					isContain = true;
					break;
				}
			}

			if (isContain == true)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << bingo[i * 5 + j] << "\t";
			}
		}
		cout << endl;
	}
}

bool isContain(int arr[], int arrSize, int value)
{
	bool isContain = false;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == value)
		{
			isContain = true;
			break;
		}
	}

	return isContain;
}

// bingo판이 correctArr이 값에 의해 승리가 되었는지 판정해주는 함수
bool isWin(int bingo[], int correctArr[], int correctSize)
{
	//승리면
	//true
	
	//승리가 아니면
	//false

	//가로줄판정
	//세로줄판정
	//대각선 2개

	
	//가로줄 판정

	//가로줄5줄을 검사하면서
	//정답배열에 있는 요소가 5개라면
	//가로줄 판정 정답
	//5줄검사
	for (int i = 0; i < 5; i++)
	{
		int answer = 0;
		//각 요소 5개검사
		for (int j = 0; j < 5; j++)
		{
			//i -> 0 ~ 4 : 5
			//j -> 0 ~ 4 : 5
			//0 ~ 24 : 25
			//i : 0, j : 0 --> i : 0, j : 4
			//i : 1, j : 0 --> i : 1, j : 4 
			//i : 2, j : 0 --> i : 2, j : 4 
			//i : 3, j : 0 --> i : 3, j : 4 
			//i : 4, j : 0 --> i : 4, j : 4 
			//별찍기
			if (isContain(correctArr, correctSize, bingo[i * 5 + j]))
			{
				answer++;
			}

			if (answer == 5)
			{
				return true;
			}
		}
	}

	//세로줄판정
	//5열 검사
	for (int i = 0; i < 5; i++)
	{
		int answer = 0;
		//각 요소 5행 검사
		for (int j = 0; j < 5; j++)
		{
			//i -> 0 ~ 4 : 5
			//j -> 0 ~ 4 : 5
			//0 ~ 24 : 25
			//i : 0, j : 0 --> i : 0, j : 4
			//i : 1, j : 0 --> i : 1, j : 4 
			//i : 2, j : 0 --> i : 2, j : 4 
			//i : 3, j : 0 --> i : 3, j : 4 
			//i : 4, j : 0 --> i : 4, j : 4 
			//별찍기
			if (isContain(correctArr, correctSize, bingo[j * 5 + i]))
			{
				answer++;
			}

			if (answer == 5)
			{
				return true;
			}
		}
	}

	// / 이모양 대각선
	// 0  1  2  3  4
	// 5  6  7  8  9
	//10 11 12 13 14
	//15 16 17 18 19
	//20 21 22 23 24
	bool a[5];
	a[0] = isContain(correctArr, correctSize, bingo[4]);
	a[1] = isContain(correctArr, correctSize, bingo[8]);
	a[2] = isContain(correctArr, correctSize, bingo[12]);
	a[3] = isContain(correctArr, correctSize, bingo[16]);
	a[4] = isContain(correctArr, correctSize, bingo[20]);
	if (a[0] && a[1] && a[2] && a[3] && a[4])
	{
		return true;
	}


	// \ 이모양 대각선
	// 0  1  2  3  4
	// 5  6  7  8  9
	//10 11 12 13 14
	//15 16 17 18 19
	//20 21 22 23 24
	bool b[5];
	b[0] = isContain(correctArr, correctSize, bingo[0]);
	b[1] = isContain(correctArr, correctSize, bingo[6]);
	b[2] = isContain(correctArr, correctSize, bingo[12]);
	b[3] = isContain(correctArr, correctSize, bingo[18]);
	b[4] = isContain(correctArr, correctSize, bingo[24]);
	if (b[0] && b[1] && b[2] && b[3] && b[4])
	{
		return true;
	}


	return false;
}

int main()
{
	//빙고
	//내꺼 5*5, 컴퓨터꺼 5*5 판을 만든다
	//각판에 1~25까지 숫자를 적는다
	//	내꺼 컴퓨터꺼 모두
	//판을 섞는다.
	//컴퓨터와 내가 숫자를 번갈아가면서 호출한다
	//호출한 숫자는 #으로 표기되게 바꾼다.

	//2차원배열
	//0~24
	srand(time(NULL));
	int correctArr[25] = { 0, };
	int correctIndex = 0;

	int myBingo[25];
	//2차원배열 예시
	//myBingo[0][0]
	//myBingo[0][1]
	//myBingo[0][2]
	//myBingo[0][3]
	//myBingo[0][4]
	//myBingo[1][0]
	//myBingo[1][1]
	//myBingo[1][2]
	//myBingo[1][3]
	//myBingo[1][4]
	//myBingo[2][0]
	//myBingo[2][1]
	//myBingo[2][2]
	//myBingo[2][3]
	//myBingo[2][4]
	//myBingo[3][0]
	//myBingo[3][1]
	//myBingo[3][2]
	//myBingo[3][3]
	//myBingo[3][4]
	//myBingo[4][0]
	//myBingo[4][1]
	//myBingo[4][2]
	//myBingo[4][3]
	//myBingo[4][4]
	int computerBingo[25];
	
	for (int i = 0; i < 25; i++)
	{
		myBingo[i] = i + 1;
		computerBingo[i] = i + 1;
	}

	//출력
	cout << "내 빙고판 : " << endl;
	printBingo(myBingo, correctArr, correctIndex);

	cout << "컴퓨터 빙고판 : " << endl;
	printBingo(computerBingo, correctArr, correctIndex);


	cout << endl;
	cout << "판을 섞는다." << endl;
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = myBingo[num1];
		myBingo[num1] = myBingo[num2];
		myBingo[num2] = temp;
	}
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = computerBingo[num1];
		computerBingo[num1] = computerBingo[num2];
		computerBingo[num2] = temp;
	}

	cout << "내 빙고판 : " << endl;
	printBingo(myBingo, correctArr, correctIndex);

	cout << "컴퓨터 빙고판 : " << endl;
	printBingo(computerBingo, correctArr, correctIndex);

	// 0이면 내턴, 1이면 상대턴
	int turn = 0;
	int input = 0;
	while (true)
	{
		system("cls");

		cout << "내 빙고판 : " << endl;
		printBingo(myBingo, correctArr, correctIndex);

		cout << "컴퓨터 빙고판 : " << endl;
		printBingo(computerBingo, correctArr, correctIndex);


		cout << "숫자를 번갈아 가면서 입력해주세요." << endl;
		if (turn == 0)
		{
			cin >> input;
		}
		else if (turn == 1)
		{
			input = rand() % 25;
		}

		cout << input << "번호가 호출되었습니다." << endl;

		//호출한 숫자는 #으로 표기되게 바꾼다.
		correctArr[correctIndex] = input;
		correctIndex++;



		//빙고가 완료되면
		bool myWin = isWin(myBingo, correctArr, correctIndex);
		bool computerWin = isWin(myBingo, correctArr, correctIndex);
		//게임종료
		if (myWin)
		{
			cout << "플레이어 승리입니다" << endl;
			return 0;
		}
		else if (computerWin)
		{
			cout << "컴퓨터 승리입니다" << endl;
			return 0;
		}

		

		turn++;
		if (2 < turn)
		{
			turn = 0;
		}
	}


	return 0;
}