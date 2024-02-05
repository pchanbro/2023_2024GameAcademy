#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void doubleNum(int*);
void tenTimesNum(int**);

int main()
{
	int n;
	int* p = &n;
	int** q = &p;

	printf("정수 입력 >>> ");
	scanf("%d", &n);

	doubleNum(p);
	printf("p 연산 후 >>> %d\n", *p);
	tenTimesNum(q);
	printf("q 연산 후 >>> %d\n", **q);

	return 0;
}

void doubleNum(int* a)
{
	*a = *a * 2;
}

void tenTimesNum(int** b)
{
	**b = **b * 10;
}