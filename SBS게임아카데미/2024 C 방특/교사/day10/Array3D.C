// Array3D.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int x, y, z;
	printf("입체 크기 입력 >>> ");
	scanf("%d", &x);
	printf("행 크기 입력 >>> ");
	scanf("%d", &y);
	printf("열 크기 입력 >>> ");
	scanf("%d", &z);

	int*** p = (int***)malloc(sizeof(int**) * x);
	for (int i = 0; i < x; i++) {
		p[i] = (int**)malloc(sizeof(int*) * y);
		for (int j = 0; j < y; j++) {
			p[i][j] = (int*)malloc(sizeof(int) * z);
			memset(p[i][j], 0, sizeof(int) * z);
		}
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {
				printf("%d ", p[i][j][k]);
			}
			puts("");
		}
		puts("");
	}
}