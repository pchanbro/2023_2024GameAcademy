// 비트 연산
#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("9 & 5 = %d\n", 9 & 5);
	printf("9 | 5 = %d\n", 9 | 5);
	printf("9 ^ 5 = %d\n", 9 ^ 5);
	printf("~5 = %d\n", ~5);

	long long a = 90000000000;
	long long b = 20000000000;
	printf("9 & 5 = %lld\n", a & b);
	printf("9 | 5 = %lld\n", a | b);
	printf("9 ^ 5 = %lld\n", a ^ b);
	printf("~5 = %lld\n", ~b);

	printf("9 >> 2 = %d\n", 9 >> 2);
	printf("-10 >> 2 = %d\n", -10 >> 2);
	printf("9 << 2 = %d\n", 9 << 2);
	printf("-10 << 2 = %d\n", -10 << 2);

	printf("a >> 2 = %llf\n", a >> 2);
	printf("a >> 2 = %llf\n", a << 2);

	return 0;
}