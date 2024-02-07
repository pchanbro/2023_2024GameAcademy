#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a, b;
	printf("행의 크기 >>> ");
	scanf("%d", &a);
	printf("열의 크기 >>> ");
	scanf("%d", &b);

	int** twoD = (int**)malloc(sizeof(int*) * a);

	for (int i = 0; i < a; i++)
	{
		twoD[i] = (int*)malloc(sizeof(int) * b);
		memset(twoD[i], 0, sizeof(int) * b);
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", twoD[i][j]);
		}
		puts("");
	}
		puts("");

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			twoD[i][j] = i + j;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", twoD[i][j]);
		}
		puts("");
	}
	return 0;
}