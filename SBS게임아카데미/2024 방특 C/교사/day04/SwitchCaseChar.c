// SwitchCaseChar.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);

	switch (c) {
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		default:
			printf("�����Դϴ�.\n");
	}

	if (c == '+') 
		printf("%d + %d = %d\n", a, b, a + b);
	if (c == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	if (c == '*')
		printf("%d * %d = %d\n", a, b, a * b);
	if (c != '+' && c != '-' && c != '*')
		printf("�����Դϴ�.");

	return 0;
}