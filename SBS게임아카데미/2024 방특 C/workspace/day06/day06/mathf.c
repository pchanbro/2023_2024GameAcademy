#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double f(int, int);

int main()
{
	int x, y;
	printf("x, y �Է� >>> ");
	scanf("%d %d", &x, &y);

	printf("f(x,y)�� ����� %f�Դϴ�. ", f(x, y));
	return 0;
}

double f(int x, int y)
{
	return 5.0 * x - 7.1 * y;
}