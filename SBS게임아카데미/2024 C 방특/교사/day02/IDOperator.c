// IDOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a = 10;

	printf("++a = %d\n", ++a); // ++a = 11
	printf("a++ = %d\n", a++); // a++ = 11
	printf("a = %d\n", a); // a = 12

	int b = 5;

	printf("b-- = %d\n", b--); // b-- = 5
	printf("b = %d\n", b); // b = 4
	printf("--b = %d\n", --b); // --b = 3

	int x = 5;
	int y = 10;
	printf("-x++ + ++y = %d\n", -x++ + ++y);
	// 1) ++y -> 11
	// 2) -x  -> -5
	// 3) +   -> 6
	// 4) Ãâ·Â -> 6
	// 5) x++  -> 6
	printf("%d %d\n", x, y);

	return 0;
}