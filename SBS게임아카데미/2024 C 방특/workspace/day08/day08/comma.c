#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	char b[10], c[10];

	printf("���ڿ� 1 �Է� >>> ");
	scanf("%s", b);

	strcpy(a, b);

	strncat(a, ",", 2);

	printf("���ڿ� 2 �Է� >>> ");
	scanf("%s", c);

	strncat(a, c, strlen(c));

	printf("��� : %s", a);

	return 0;
}