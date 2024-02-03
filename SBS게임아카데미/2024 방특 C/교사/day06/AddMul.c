// AddMul.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, mul = 1;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		int sum = 0;
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
		mul *= sum;
		mul %= 14579;
	}
	printf("%d", mul);

	return 0;
}