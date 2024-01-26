#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c;
	printf("문자1 입력 >>> ");
	a = getchar();

	while (getchar() != '\n');

	printf("문자2 입력 >>> ");
	b = getchar();

	while (getchar() != '\n');

	printf("문자3 입력 >>> ");
	c = getchar();

	printf("역순 출력은 %c, %c, %c", c, b, a);
	return 0;
}