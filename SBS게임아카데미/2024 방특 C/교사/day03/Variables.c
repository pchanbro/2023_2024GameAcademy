// Variables.c
#pragma warning(disable:4700)
#include <stdio.h>

// ���� ���� global variable
int c;
int d = 100;

int main()
{
	// ���� ���� local variable
	int a;
	int b = 10;
	printf("%d %d\n", a, b);
	printf("%p %p\n", &a, &b);
	printf("%d %d\n", c, d);
	printf("%p %p\n", &c, &d);
}