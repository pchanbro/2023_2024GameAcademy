// IfCondition.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("정수를 입력하세요 >>> ");

	int n;
	scanf("%d", &n);

	if (n == 0) 
		printf("0입니다.");
	
	if (n > 0) 
		printf("양수입니다.");
	
	if (n < 0) 
		printf("음수입니다.");
	
	if (n == 0) 
		printf("0입니다.");
	else 
		printf("0이 아닙니다.");

	return 0;
}