// 195������ 3��
/*
�Է� >>> 6789 (�ִ� 12�ڸ����� �Է�)
6 7 8 9
7 8 9
8 9
9        ==> 2���� �迭(int)�� ����
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[13];
	int b[13][13];
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(a) - i; j++) {
			b[i][j] = a[i+j] - '0';
		}
	}

	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(a) - i; j++) {
			printf("%d ", b[i][j]);
		}
		puts("");
	}
	return 0;
}