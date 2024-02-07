/*
* 
*/

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 배열에 숫자 끼워넣기

int* createArr(int*, int, int);

int main()
{
	int arr[3] = { 1, 5, 7 };
	int length = 3;
	int num = 9;
	int* ptr = createArr(arr, num, length);
	for (int i = 0; i < length + 1 ; i++)
	{
		printf("%d ", ptr[i]); // 1 3 5 7
	}

	return 0;
}

int* createArr(int* arr, int num, int length)
{
	int isIn = 0;
	int* ptr = (int*)malloc(sizeof(int) * (length + 1));
	for (int i = 0; i < length + 1 ; i++)
	{
		if (isIn == 0 && num < arr[i]) 
		{
			ptr[i] = num;
			isIn = 1;
		}
		else if(isIn == 0 && i == length) // 배열 끝의 수보다 큰 수를 추가해야 할 경우
			ptr[i] = num;
		else if (isIn == 0)
			ptr[i] = arr[i];
		else
			ptr[i] = arr[i - 1];
	}

	return ptr;
}