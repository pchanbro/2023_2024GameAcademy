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

	printf("���� �Է� >>> ");
	scanf("%d", &n);

	doubleNum(p);
	printf("p ���� �� >>> %d\n", *p);
	tenTimesNum(q);
	printf("q ���� �� >>> %d\n", **q);

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