// 312페이지 1번

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* createArr(int*, int, int);

int main()
{
	int arr[3] = { 1, 5, 7 };
	int length = 3;
	int num = 5;
	int* ptr = createArr(arr, num, length);
	for (int i = 0; i < length + 1; i++)
		printf("%d ", ptr[i]); // 1 3 5 7
	return 0;
}

int* createArr(int* arr, int num, int length) {
	int* ptr = (int*)malloc(sizeof(int) * (length + 1));
	int cur = 0, cur2 = 0;
	while (cur < length + 1) {
		if (cur2 < length && arr[cur2] < num) {
			ptr[cur++] = arr[cur2++];
		}
		else {
			if (cur == cur2) {
				ptr[cur++] = num;
			}
			else {
				ptr[cur++] = arr[cur2++];
			}
		}
	}
	return ptr;
}