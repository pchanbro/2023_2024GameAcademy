/*
* 문자열 최대 길이 입력
* 그 만큼 동적 할당
* 해당 공간에 저장할 문자열 입력
* 그 문자열에 a가 몇개 있는지 출력
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length, acnt = 0;
	printf("문자열의 최대 길이 입력 >>> ");
	scanf("%d", &length);

	char* str = (char*)malloc(length + 1);
	printf("문자열 입력 >>> ");
	scanf("%s", str);

	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '\0') break;
		if (str[i] == 'a') acnt++;
	}
	printf("a의 개수 : %d", acnt);

	free(str);

	return 0;
}