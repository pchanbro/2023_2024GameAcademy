#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	// 숙제풀이 

	// 구구단
	// 1 ~ 9
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	// 추가숙제
	// 1 x 1 = 1	2 x 1 = 2	3 x 1 = 3
	// 1 x 2 = 2	2 x 2 = 4	3 x 2 = 6
	//. 
	// 4 x 1 = 4	5 x 1 = 5	6 x 1 = 6
	// 
	// 7 x 1 = 7	8 x 1 = 8	9 x 1 = 9

	// i => 1,2,3단 라인, 4,5,6단 라인, 7,8,9단 라인을 구분하기 위한 변수
	for (int i = 0; i < 3; i++)
	{
		// 각 단마다 9번 박복해서 찍기 위한 변수
		for (int j = 0; j < 9; j++)
		{
			// 한 줄에 3단씩 나오게 하기 위한 변수
			for (int k = 0; k < 3; k++)
			{
				int num1 = i * 3 + k + 1 ;
				int num2 = j + 1;
				int result = num1 * num2;
				cout << num1 << " x " << num2 << " = " << result << "\t";

			}
			cout << endl;
		}
		cout << endl;
	}

	// 1 ~ 1000까지의 숫자 중에서 2의 배수 3의 배수 더하기 6의 배수는 제외 

	// 뭐부터 뭐까지 - > for문 사용

	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if(i % 2 == 0 || i % 3 == 0)
		{
			if (i % 6 != 0)
			{
				sum += i;
			}
		}
	}

	cout << "sum : " << sum << endl;


	// 로또번호 생성기
	// 1 ~ 45개의 숫자를 생성하여 그 중 임의로 하나씩 7개를 고름 단, 중복불가

	// 1 ~ 45까지의 값을 가진 배열을 만든다. lotto[45] 라고 정의한다.
	// 배열을 섞는다.
	//  --> 프로그램에서 배열을 섞는 것
	//  --> 배열 두개를 뽑아서 값을 바꾼다. x 100000번 반복
	// 앞에부터 7개를 뽑는다.
	// --> lotto[0], lotto[1], lotto[2], lotto[3], lotto[4], lotto[5], lotto[6]

	int lotto[45] = { 0, };
	//배열 초기화
	//배열, for문
	//배열을 쓰면 99%는 for문을 사용한다.

	// 1. 생성하면서 초기화하는 방법 이걸 습관처럼 해줘야 한다.
	// int lotto[45] = { 0 , };
	// int lotto[45]{};
	// int lotto[45] = {};

	// 2. 생성 이후에 바로 다음코드로 초기화 해주는 방법
	// for문 사용
	for (int i = 0; i < 45; i++) 
	{
		lotto[i] = i + 1;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << endl;
	}

	// 배열을 섞는다.
	// 값을 2개를 swap
	int num1 = 0;
	int num2 = 0;
	int temp = 0;

	for (int i = 0; i < 100000; i++)
	{
		num1 = rand() % 45;
		num2 = rand() % 45;
		temp = lotto[num1];
		lotto[num1] = lotto[num2];
		lotto[num2] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << endl;
	}
}