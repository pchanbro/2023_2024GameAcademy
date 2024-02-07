/*
* 한 개의 정수를 매개변수로 입력받아, 입력받은 수와 그 수보다 200 더 큰 정수 사이에 7의 배수가 몇 개나 존재하는지 구하고 그결과를 반환하는 함수
* 함수이름 : sevens
* 매개변수 : 정수 1개
* 반환값 : 정수 1개
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sevens(int);

int main()
{
	int input;
	printf("정수를 입력하세요 >>> ");
	scanf("%d", &input);
	int num = sevens(input);

	printf("%d와 %d사이의 7의 배수의 개수 : %d", input, input+200, num);
	return 0;
}

int sevens(int a)
{
	int count = 0;
	for (int i = a+1; i < a + 200; i++)
	{
		if (i % 7 == 0)
			count++;
	}
	return count;
}