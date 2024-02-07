#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'a';
	int big = 0, small = 0;

	while (!(c >= '0' && c <= '9'))
	{
		printf("문자를 입력하세요 >>> ");
		scanf("%c", &c);

		while (getchar() != '\n'); // getchar(); 만 해도 버퍼 비울수 있다.

		if (c >= 'a' && c <= 'z') small++;
		else if (c >= 'A' && c <= 'Z') big++;
		
	}
	printf("종료\n 대문자 %d개, 소문자 %d개\n", big, small);

	return 0;
}