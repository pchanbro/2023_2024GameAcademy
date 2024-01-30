#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	printf("문자 1개를 입력하세요 >>> ");
	scanf("%c", &a);

	if (a >= 'a' && a <= 'z')
		printf("영어 소문자입니다.");
	else if (a >= 'A' && a <= 'Z')
		printf("영어 대문자입니다.");
	else if (a >= '0' && a <= '9')
		printf("숫자입니다.");
	else
		printf("영어 또는 숫자가 아닙니다.");

	return 0;
}