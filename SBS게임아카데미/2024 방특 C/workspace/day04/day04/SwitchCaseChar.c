#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);

	switch (c) 
	{
		case '+' :
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		default:
			printf("�������� �����Դϴ�.\n");
	}

	// if������ switch�� ��ü�غ��� default���� ����� ���� ����
	if (c == '+')
		printf("%d\n", a + b);
	if (c == '-')
		printf("%d\n", a - b);
	if (c == '*')
		printf("%d\n", a * b);
	if (c != '+' && c != '-' && c != '*')
		printf("�������� �����Դϴ�.");

	return 0;
}