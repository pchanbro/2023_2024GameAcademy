#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("수1을 입력하세요 >>> ");
	int num1;
	scanf("%d", &num1);

	//while (getchar() != '\n'); scanf쓸땐 없어도 됨

	printf("수2을 입력하세요 >>> ");
	int num2;
	scanf("%d", &num2);

	if (num1 > num2)
		printf("%d x 2 = %d", num1, num1 * 2);
	else if (num1 < num2)
		printf("%d x 3 = %d", num2, num2 * 3);
	else
		printf("same");

	return 0;
}