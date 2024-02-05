#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[20];
	char b[10], c[10];

	printf("문자열 1 입력 >>> ");
	scanf("%s", b);

	strcpy(a, b);

	strncat(a, ",", 2);

	printf("문자열 2 입력 >>> ");
	scanf("%s", c);

	strncat(a, c, strlen(c));

	printf("결과 : %s", a);

	return 0;
}