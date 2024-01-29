#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("정수 입력 >>> ");
	scanf("%d", &num);

	printf("최상위 비트는 %d\n", !(num >= 0));

	while (getchar() != '\n');

	int num2;
	printf("정수 입력 >>> ");
	scanf("%d", &num2);

	printf("최상위 비트는 %d", !(num2 >= 0));

	return 0;
}