/*
2. 사용자로부터 3개의 문자를 입력받아 역순으로 출력하는 프로그램을 작성하세요. (charinput.c 로 저장)

<예시>
문자1입력 >>> a
문자2입력 >>> b
문자3입력 >>> c
역순 출력은 c b a
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("문자1입력 >>> ");
	char a = getchar();
	getchar();

	printf("문자2입력 >>> ");
	char b = getchar();
	getchar();

	printf("문자3입력 >>> ");
	char c = getchar();
	getchar();

	printf("역순 출력은 %c %c %c", c, b, a);
	return 0;
}