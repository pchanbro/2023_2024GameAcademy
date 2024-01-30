#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n < 0) 
		printf("음수입니다.");
	else if (n == 0) 
		printf("0입니다.");
	else 
		printf("양수입니다.");

	return 0;
}