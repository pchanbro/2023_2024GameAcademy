// MallocEx2.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[3][4]; // ���� 2���� �迭 �Ҵ�

	int** p = (int**)malloc(sizeof(int*) * 3); // ���� 2���� �迭 �Ҵ� (3��)

	for (int i = 0; i < 3; i++) {
		p[i] = (int*)malloc(sizeof(int) * 4); // �� �࿡ ���� �迭 �Ҵ�
		memset(p[i], 0, sizeof(int) * 4);
	}

	p[0][0] = 1;
	p[2][0] = 5;
	p[2][3] = 10;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", p[i][j]);
		}
		puts("");
	}

	return 0;
}