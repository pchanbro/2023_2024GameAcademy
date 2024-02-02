#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int sumArray(int[], int);
int minArray(int[], int);
int maxArray(int[], int);

int main()
{
	int a[] = { 3, 10, 16, 38, 56 };
	int sum = sumArray(a, 5);
	printf("배열의 합은 %d\n", sum);
	int min = minArray(a, 5);
	int max = maxArray(a, 5);

	printf("배열의 최소값 : %d\n", min);
	printf("배열의 최대값 : %d\n", max);

	return 0;
}

int sumArray(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}

	return sum;
}

int minArray(int a[], int size)
{
	int min = a[0];
	for (int i = 1; i < size; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}

int maxArray(int a[], int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
	{
		if (a[i] > max)
			max = a[i];
	}

	return max;
}