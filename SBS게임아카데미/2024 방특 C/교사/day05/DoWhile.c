// DoWhile.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	do {
		printf("���� �Է� >>> ");
		scanf("%d", &n);
	} while (n != 0);

	int m;
	while (1) {
		printf("���� �Է� >>> ");
		scanf("%d", &m);
		if (m == 0) break;
	}

	printf("����Ǿ����ϴ�.");
	return 0;
}