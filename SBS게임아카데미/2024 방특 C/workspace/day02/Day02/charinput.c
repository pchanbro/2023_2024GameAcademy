#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c;
	printf("����1 �Է� >>> ");
	a = getchar();

	while (getchar() != '\n');

	printf("����2 �Է� >>> ");
	b = getchar();

	while (getchar() != '\n');

	printf("����3 �Է� >>> ");
	c = getchar();

	printf("���� ����� %c, %c, %c", c, b, a);
	return 0;
}