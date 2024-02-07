// BitwiseOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("9 & 5 = %d\n", 9 & 5);
	printf("9 | 5 = %d\n", 9 | 5);
	printf("9 ^ 5 = %d\n", 9 ^ 5);
	printf("~5 = %d\n", ~5);

	long long a = 90000000000;
	long long b = 20000000000;
	printf("a & b = %lld\n", a & b);
	printf("a | b = %lld\n", a | b);
	printf("a ^ b = %lld\n", a ^ b);
	printf("~b = %lld\n", ~b);

	printf("9 >> 2 = %d\n", 9 >> 2);
	printf("-10 >> 2 = %d\n", -10 >> 2);
	printf("9 << 2 = %d\n", 9 << 2);
	printf("-10 << 2 = %d\n", -10 << 2);


	printf("a >> 2 = %lld\n", a >> 2);
	printf("a << 2 = %lld\n", a << 2);

	return 0;
}