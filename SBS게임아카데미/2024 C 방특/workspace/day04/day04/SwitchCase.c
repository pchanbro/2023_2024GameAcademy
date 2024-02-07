#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("수1 입력 >>> ");
	scanf("%d", &a);
	printf("수2 입력 >>> ");
	scanf("%d", &b);
	printf("1 또는 2입력 >>> ");
	scanf("%d", &c);

	switch (c)
	{
		case 1:
			printf("%d", a + b);
			break;
		case 2:
			printf("%d", a - b);
			break;
		default:
			printf("잘못된 입력입니다.");
	}

	return 0;
}