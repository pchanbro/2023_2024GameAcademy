/*
2. 문자 1개를 입력받아 if-else문을 이용하여 입력받은 문자가 영어 대문자인지, 소문자인지, 숫자인지, 셋 다 아닌지를 판단하는 코드를 작성해주세요.

<예시>
문자 1개를 입력하세요 >>> A
영어 대문자입니다.
*/

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("문자 1개를 입력하세요 >>> ");
	scanf("%c", &c);

	if ('A' <= c && c <= 'Z')
		printf("영어 대문자입니다.");
	else if ('a' <= c && c <= 'z')
		printf("영어 소문자입니다.");
	else if ('0' <= c && c <= '9')
		printf("숫자입니다.");
	else
		printf("영어 또는 숫자가 아닙니다.");

	return 0;
}