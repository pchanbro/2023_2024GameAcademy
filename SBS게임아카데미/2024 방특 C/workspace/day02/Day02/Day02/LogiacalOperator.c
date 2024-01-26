#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("%d\n", true && false); //1
	printf("%d\n", false || true); //1
	printf("%d\n", !false); //1

	printf("%d\n", (5 > 3) && (3 <= 1) || !(1 == 1)); // 0
	printf("%d\n", true && false || !true);
	printf("%d\n", false);
	
	int a = 10;
	int b = 11;

	printf("%d\n", (a++ >= b) || (10 < a) && !(++a == b--)); // 1
	printf("%d\n", (10 >= 11) || (10 < 11) && !(12 == 11)); // 1
	printf("%d\n", false || true && true); // 1

	return 0;
}