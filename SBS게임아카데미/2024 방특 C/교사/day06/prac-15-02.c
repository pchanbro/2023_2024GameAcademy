// prac-15-02.c
/*
237페이지 2번
1) 두 개의 정수를 매개변수로 받아 두 정수 사이에 있는 모든 정수의 합을 구하여 반환하는 함수를 정의
2) main 함수에서 호출하여 출력

함수이름: rangeSum
매개변수: 정수 2개
반환값: 정수 1개

함수 원형, 함수 내용 따로 작성
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int rangeSum(int, int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int value = rangeSum(a, b);
	printf("%d와 %d 사이의 정수의 총합은 : %d\n", a, b, value);
	return 0;
}

int rangeSum(int a, int b) {
	// int sum = 0;
	// for (int i = a + 1; i < b; i++)
	//	sum += i;
	// return sum;
	int sumB = (b - 1) * b / 2;
	int sumA = a * (a + 1) / 2;
	return sumB - sumA;
}