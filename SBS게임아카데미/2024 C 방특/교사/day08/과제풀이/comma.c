// comma.c
/*
1. 문자열 2개를 입력하여, 두 문자열 사이에 콤마(,)를 넣은 후 하나의 문자열로 저장해주세요. (comma.c)

<예시>
문자열 1 입력 >>> hello
문자열 2 입력 >>> world
하나로 합친 결과 >>> hello,world
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20], s2[20];
	printf("문자열 1 입력 >>> ");
	scanf("%s", s1);
	printf("문자열 2 입력 >>> ");
	scanf("%s", s2);

	strcat(s1, ",");
	strcat(s1, s2);
	printf("하나로 합친 결과 >>> %s", s1);
	return 0;
}