#pragma warning(disable:4996)
#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("별의 줄 수 입력 >>> ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		puts("");
	}
	return 0;
}