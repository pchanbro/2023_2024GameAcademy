#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countNumArray(int []);

int main()
{
	srand(time(NULL));
	
	int numArr[100];
	for (int i = 0; i < 100; i++)
	{
		numArr[i] = rand() % 10;
	}

	int max = countNumArray(numArr);

	printf("가장 많이 저장된 정수는 %d", max);

	return 0;
}

int countNumArray(int numArr[])
{
	int count[10];
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		for (int j = 0; j < 100; j++)
		{
			if (numArr[j] == i)
				num++;
		}
		count[i] = num;
	}

	int maxCount = 0, maxNum = 0;

	for (int i = 1; i < 10; i++)
	{
		if (count[i] > maxCount)
		{
			maxCount = count[i];
			maxNum = i;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		printf("%d : %d\n", i, count[i]);
	}
	return maxNum;
}