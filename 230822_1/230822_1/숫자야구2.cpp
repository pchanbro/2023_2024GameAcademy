#include <iostream>
#include <time.h>
using namespace std;

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
		int curNum = num;
		// 만약 중복이 된다면 다시 설정되도록 한다.
		for (int i = 0; i < curNum; i++)
		{
			if (randNum[i] == randNum[num])
			{
				break;
			}
			else if (i == curNum - 1)
			{
				num++;
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

void main()
{
	// 숙제1.
	// 숫자야구

	// 이 때 숫자가 겹치지 않도록 4자리를 뽑음
	// 단 첫 숫자는 0 불가
	// 여기부터 무한 반복
	//		사용자가 겹치지 않는 4자리 숫자 입력
	//		정답이 예를 들어 2593 일 때 사용자가 2307을 입력하면 1strike 1ball
	// 4strike가 되면 성공
	// 결과적으로 4strike면 게임 종료

	int randNum[4] = { 0, };

	printNum(randNum);
	// 컴퓨터가 랜덤한 숫자를 뽑는다.
	generateNum(randNum);
	printNum(randNum);

}