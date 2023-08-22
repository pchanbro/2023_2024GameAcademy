#include <iostream>
#include <time.h>
using namespace std;

void generateNum(int* lottoNum)
{
	for (int i = 0; i < 45; i++)
	{
		lottoNum[i] = i + 1;
	}
}

void main()
{
	// 3. 로또번호 생성기 
	// 1 ~ 45 숫자가 있을 때, 7개의 랜덤 볼을 출력한다.(이때 숫자가 겹치면 안된다.)

	// 번호를 생성한다.(배열 사용)
	// 반복
	//		생성된 번호 중 1개를 선택하여 다른 배열에 추가한다.
	//		만약 선택된 번호 가 이미 배열에 들어가 있다면 다시 선택한다.
	srand(time(NULL));
	int lottoNum[45] = { 0, };
	int choosedNum[7] = { 0, };

	// 번호를 생성한다.(배열 사용)
	generateNum(lottoNum);

	// 반복
	for (int i = 0; i < 7; i++)
	{
		// 생성된 번호 중 1개를 선택하여 다른 배열에 추가한다.
		choosedNum[i] = lottoNum[rand() % 45];
		for (int j = 0; j < i; j++)
		{
			// 만약 선택된 번호 가 이미 배열에 들어가 있다면 다시 선택한다.
			if (choosedNum[i] == choosedNum[j])
			{
				choosedNum[i] = lottoNum[rand() % 45];
				j = -1;
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "번째 숫자 : " << choosedNum[i] << endl;
	}
}