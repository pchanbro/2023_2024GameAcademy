// CharSum.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'a';
	int countBig = 0, countSmall = 0;

	while (!('0' <= c && c <= '9')) {
		printf("문자 입력 >>> ");
		scanf("%c", &c);
		getchar();

		if ('A' <= c && c <= 'Z') countBig++;
		if ('a' <= c && c <= 'z') countSmall++;
	}

	printf("종료\n대문자 %d개, 소문자 %d개", countBig, countSmall);
}