#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", a);

	double b;
	scanf("%lf", &b);
	printf("%lf\n", b);

	char c;
	scanf("%c", &c);
	printf("%c %d\n", c, c);

	return 0;
}