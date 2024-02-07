// Array2D.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int row, col;
	printf("행의 크기 >>> ");
	scanf("%d", &row);
	printf("열의 크기 >>> ");
	scanf("%d", &col);

	int** p = (int**)malloc(sizeof(int*) * row);
	for (int i = 0; i < row; i++) {
		p[i] = (int*)malloc(sizeof(int) * col);
		// memset(p[i], 0, sizeof(int) * col);
		for (int j = 0; j < col; j++) {
			p[i][j] = i + j;
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", p[i][j]);
		}
		puts("");
	}
	return 0;
}