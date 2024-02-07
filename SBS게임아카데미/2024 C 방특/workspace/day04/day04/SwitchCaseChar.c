#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);

	switch (c) 
	{
		case '+' :
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		default:
			printf("나머지는 오류입니다.\n");
	}

	// if문으로 switch문 대체해보기 default문을 만드는 것이 관건
	if (c == '+')
		printf("%d\n", a + b);
	if (c == '-')
		printf("%d\n", a - b);
	if (c == '*')
		printf("%d\n", a * b);
	if (c != '+' && c != '-' && c != '*')
		printf("나머지는 오류입니다.");

	return 0;
}