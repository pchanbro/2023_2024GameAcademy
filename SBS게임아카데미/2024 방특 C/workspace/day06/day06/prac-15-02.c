// 두 개의 정수를 매개변수로 받아 두 정수 사이에 있는 모든 정수의 합을 구하여 반환하는 함수를 정의
// main 함수에서 호출하여 출력
// 함수 원형, 내용 따로 작성
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rangeSum(int, int);

int main()
{
	int a, b;
	printf("두 개의 정수를 입력하세요 >>> ");
	scanf("%d %d", &a, &b);

	int value = rangeSum(a, b);
	printf("%d와 %d 사이의 정수 총합 : %d", a, b, value);

	return 0;
}

int rangeSum(int a, int b)
{
	int sum = 0;
	for (int i = a + 1; i < b; i++)
	{
		sum += i;
	}
	return sum;
}