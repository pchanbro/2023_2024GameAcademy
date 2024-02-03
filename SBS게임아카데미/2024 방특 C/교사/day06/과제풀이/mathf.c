// mathf.c
/*
1. f(x, y) = 5x - 7.1y 를 계산하는 함수를 만들어주세요. (mathf.c)

<예시>
x, y 입력 >>> 5 2
f(x, y)의 결과는 10.800000 입니다.
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

double f(double, double);

int main()
{
	int x, y;
	printf("x, y 입력 >>> ");
	scanf("%d %d", &x, &y);

	printf("f(x,y)의 결과는 %f 입니다.", f(x, y));
	return 0;
}

double f(double x, double y) {
	return 5 * x - 7.1 * y;
}