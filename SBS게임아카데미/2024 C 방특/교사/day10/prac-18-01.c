// 280페이지 1번
// 아래 코드에 대한 출력 결과: Take a look!
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* s1 = "Take a look!";
	char* s2 = (char*)malloc(strlen(s1) + 1); // 문자열 자체를 넣지 말고 다른 방식으로

	strcpy(s2, s1);

	printf("%s\n", s2);
	if (s2 != NULL) free(s2);
	return 0;
}