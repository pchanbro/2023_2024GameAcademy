#include <iostream>
#include <time.h>

using namespace std;

void printBingo(int Bingo[], int correctArr[], int correctIndex) //int size보통 배열 전달할 때는 사이즈와 같이 전달해주는게 좋음
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			isContain = false;
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

bool isWin(int bingo[], int correArr[], int correctIndex)
{
	//승리면 true 승리가 아니면 false
}

int main() 
{
	//선생님의 빙고
	//내꺼 5*5, 컴퓨터꺼 5*5 판을 만든다
	//각판에 1~25까지 숫자를 적는다
	//내꺼 컴퓨터꺼 모두
	//판을 섞는다.
	//컴퓨터와 내가 숫자를 번갈아가면서 호출한다.
	//호출한 숫자는 #으로 표기되게 바꾼다.

	//지금 이 파일은 미완성 완성 파일은 선생님이 한거 - 빙고.cpp파일을 봐라

	//이름 한번에 바꾸기 키는 어떤 변수를 클릭한 다음에 ctrl + r2번 누르면 이름 바꾸는 창이 뜸

	//2차원 배열
	//0 ~ 24
	srand(time(NULL));

	int myBingo[25];
	int computerBingo[25];
	int correctArr[25] = { 0, };
	int correctIndex = 0;

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
	printBingo(myBingo);

	cout << "컴퓨터 빙고판 : " << endl;
	printBingo(computerBingo);

	//0이면 내턴, 1이면 상대턴
	int turn = 0;
	int input = 0;
	while (true)
	{
		
	}


	return 0;
}