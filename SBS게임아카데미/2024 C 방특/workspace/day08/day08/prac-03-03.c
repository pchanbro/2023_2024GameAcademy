// 6789 �Է��ϸ� (�Է� �ִ� 12�ڸ�)
// 6789
// 789
// 89
// 9

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char a[13];
	printf("���ڸ� �Է��ϼ��� >>> ");
	scanf("%s", a);

	int b[13][13];

	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = 0; j < strlen(a) - i; j++)
		{
			b[i][j] = a[j + i] - '0';
		}
	}

	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = 0; j < strlen(a) - i; j++)
		{
			printf("%d ", b[i][j]);
		}
		puts("");
	}
	return 0;
}