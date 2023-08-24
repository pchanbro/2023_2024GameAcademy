#include <iostream>
#include <time.h>
using namespace std;

// 컴퓨터가 랜덤한 숫자를 뽑는다.
// 이 때 숫자가 겹치지 않도록 4자리를 뽑음
// 단 첫 숫자는 0 불가
void generateNum(int* randNum)
{
	srand(time(NULL));

	int num = 1;

	// 첫째 자리 수 설정
	randNum[0] = rand() % 9 + 1;

	// 두번째 이후 자릿 수 설정
	while(num < 4)
	{
		//2 
		randNum[num] = rand() % 10;
		// 만약 중복이 된다면 다시 설정되도록 한다.
		for (int i = 0; i < num; i++)
		{
			if (randNum[i] == randNum[num])
			{
				break;
			}
			else if (i == num - 1)
			{
				num++;
				break;
			}
		}
	}
}

void printNum(int* arr)
{
	for (int i = 0; i < 4 ; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

// input에 입력한 수를 배열에 넣어줌
void insertAnswer(int* playerAnswer, int input)
{
	playerAnswer[0] = input / 1000;
	playerAnswer[1] = input / 100 % 10;
	playerAnswer[2] = input / 10 % 10;
	playerAnswer[3] = input % 10;
}

// 정답이 예를 들어 2593 일 때 사용자가 2307을 입력하면 1strike 1ball
// 4strike가 되면 성공
// 결과적으로 4strike면 게임 종료
bool isStrike(int* playerAnswer, int* randNum)
{
	int strike = 0;
	int ball = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (playerAnswer[i] == randNum[j])
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
				break;
			}
		}
	}

	if (strike == 4)
	{
		cout << strike << "strike!!" << endl;
		return true;
	}

	cout << strike << "strike " << ball << "ball" << endl;
	return false;
}

void main()
{
	// 숙제1.
	// 숫자야구

	int randNum[4] = { 0, };

	printNum(randNum);
	
	generateNum(randNum);

	printNum(randNum);

	// 반복
	while (true)
	{
		int playerAnswer[4];
		int input;

		// 사용자가 겹치지 않는 4자리 숫자 입력
		cout << "정답을 입력하세요(첫 글자는 0 제외, 각 자리의 수는 서로 다름) : ";
		cin >> input;

		// 입력 받은 수를 배열에 저장
		insertAnswer(playerAnswer, input);

		// 스트라이크 여부 확인 4스트라이크 경우 게임 종료
		if (isStrike(playerAnswer, randNum))
		{
			break;
		}
	}

}