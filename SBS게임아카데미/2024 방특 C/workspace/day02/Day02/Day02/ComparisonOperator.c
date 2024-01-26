#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>
#include <stdbool.h> // 논리형을 위해 추가해야함

int main()
{
	printf("%d\n", 5 > 3); // 1
	printf("%d\n", 5 < 3); // 0
	printf("%d\n", 19 >= 10); // 1
	printf("%d\n", 15 <= 10); // 0

	bool a = 5 > 3;
	bool b = true;
	bool c = false;
	printf("%d %d %d\n", a, b, c); // 1 1 0 

	printf("%d\n", 5 == 0); // 0
	printf("%d\n", 5 != 0); // 1

	printf("%d\n", 1 == 1.0); // 1
	printf("%d\n", 1 == 0.9999999999999999999999); // 1 소수점 17자리까지는 오차
	printf("%d\n", 1.000000000000000000000001 == 0.99999999999999999999999999); // 1
	printf("%d\n", 'a' == 97); //1
	printf("%d\n", 'a' == 96.99999999999999999999999999999999999999999); //1

	printf("%d\n", 1.0000000000000000000000000001 > 0.99999999999999999999999999999); // 0

	return 0;

}