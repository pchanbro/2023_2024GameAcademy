// DoWhile.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	do {
		printf("정수 입력 >>> ");
		scanf("%d", &n);
	} while (n != 0);

	int m;
	while (1) {
		printf("정수 입력 >>> ");
		scanf("%d", &m);
		if (m == 0) break;
	}

	printf("종료되었습니다.");
	return 0;
}