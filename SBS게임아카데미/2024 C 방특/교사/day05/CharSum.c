// CharSum.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'a';
	int countBig = 0, countSmall = 0;

	while (!('0' <= c && c <= '9')) {
		printf("���� �Է� >>> ");
		scanf("%c", &c);
		getchar();

		if ('A' <= c && c <= 'Z') countBig++;
		if ('a' <= c && c <= 'z') countSmall++;
	}

	printf("����\n�빮�� %d��, �ҹ��� %d��", countBig, countSmall);
}