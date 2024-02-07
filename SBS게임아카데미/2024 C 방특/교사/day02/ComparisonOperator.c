// ComparisonOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%d\n", 5 > 3); // 1
	printf("%d\n", 5 < 3); // 0
	printf("%d\n", 10 >= 10); // 1
	printf("%d\n", 15 <= 10); // 0

	bool a = 5 > 3;
	bool b = true;
	bool c = false;
	printf("%d %d %d\n", a, b, c); // 1 1 0

	printf("%d\n", 5 == 0); // 0
	printf("%d\n", 5 != 0); // 1

	printf("%d\n", 1 == 1.0); // 1
	printf("%d\n", 1 == 0.99999999999999999999999999999); // 1
	printf("%d\n", 1.0000000000000000000001 == 0.99999999999999999999999999999); // 1
	printf("%d\n", 'a' == 97); // 1
	printf("%d\n", 'a' == 96.9999999999999999999999999999); // 1

	printf("%d\n", 1.0000000000000000000001 > 0.99999999999999999999999999999); // 0

	return 0;
}