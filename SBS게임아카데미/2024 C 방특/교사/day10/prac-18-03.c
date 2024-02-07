// 281페이지 3번
/*
사용자로부터 문자열의 최대 길이를 입력받는다. -> 그 만큼의 공간을 동적할당
해당 공간에 저장할 문자열을 입력받는다. -> 알파벳 소문자 a가 몇개 있는지 출력

문자열의 최대 길이 >>> 50
문자열 >>> hahaha
a의 개수는 3개입니다.
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int len;
	printf("문자열의 최대 길이 >>> ");
	scanf("%d", &len);

	char* str = (char*)malloc(len + 1);
	printf("문자열 >>> ");
	scanf("%s", str);

	int count = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == '\0') break;
		if (str[i] == 'a') count++;
	}
	printf("a의 개수는 %d개 입니다.", count);
	return 0;
}