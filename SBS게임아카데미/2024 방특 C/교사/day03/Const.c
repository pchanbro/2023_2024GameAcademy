// Const.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define PERSONS 10

int main()
{
	const double PI = 3.14;
	double radius;
	printf("반지름을 입력하세요 >>> ");
	scanf("%lf", &radius);

	printf("원의 넓이는 %lf\n", PI * radius * radius);

	printf("사람의 수 = %d\n", PERSONS);

	{ // 스코프 scope
		const int A = 10;
		printf("%d %d\n", A, PERSONS);
	}

	// printf("%d", A); -> 사용 불가능

	return 0;
}