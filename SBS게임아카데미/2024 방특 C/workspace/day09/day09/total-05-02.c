/*
* 배열 두개를 교환하는 swapArr을 정의
*/
#include <stdio.h>

void swapArr(int*, int*, int);

int main()
{
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[5] = { 2, 4, 6, 8, 10 };
	int length = 5;
	swapArr(arr1, arr2, length);
	for (int i = 0; i < length; i++)
		printf("%d ", arr1[i]); // 2 4 6 8 10
	puts("");
	for (int i = 0; i < length; i++)
		printf("%d ", arr2[i]); // 1 3 5 7 9

	return 0;
}

void swapArr(int* a, int* b, int size)
{
	int temp[5];
	for (int i = 0; i < size; i++)
	{
		temp[i] = a[i];
		a[i] = b[i];
		b[i] = temp[i];
	}
}