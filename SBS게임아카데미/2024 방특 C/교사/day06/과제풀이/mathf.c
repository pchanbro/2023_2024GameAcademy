// mathf.c
/*
1. f(x, y) = 5x - 7.1y �� ����ϴ� �Լ��� ������ּ���. (mathf.c)

<����>
x, y �Է� >>> 5 2
f(x, y)�� ����� 10.800000 �Դϴ�.
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

double f(double, double);

int main()
{
	int x, y;
	printf("x, y �Է� >>> ");
	scanf("%d %d", &x, &y);

	printf("f(x,y)�� ����� %f �Դϴ�.", f(x, y));
	return 0;
}

double f(double x, double y) {
	return 5 * x - 7.1 * y;
}