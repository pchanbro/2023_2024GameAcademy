#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요 >>> ");

	scanf("%d", &n);

	if (n == 0)
	{
		printf("0입니다."); // 중괄호 안이 1줄이면 생략 가능
	}
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