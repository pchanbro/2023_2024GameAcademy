/*
1. ���� 1���� �Է¹޾� �Ʒ��� ���� ���·� ����ϴ� ���α׷��� �ۼ����ּ���. (NumStar.c)

<����>
���� �Է� >>> 5
1****
12***
123**
1234*
12345

���� �Է� >>> 3
1**
12*
123
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("���� �Է� >>> ");

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		for (int j = 1; j <= n - i; j++)
			printf("*");
		printf("\n"); // puts("");
	}
	return 0;
}