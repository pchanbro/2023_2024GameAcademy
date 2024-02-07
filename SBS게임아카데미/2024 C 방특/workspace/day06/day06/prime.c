#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int);

int main()
{
	int a,b;
	printf("정수 하나 입력하세요 >>> ");
	scanf("%d", &a);

	b = isPrime(a);

	if (b) printf("소수입니다.");
	else printf("소수가 아닙니다.");

	return 0;
}

int isPrime(int num)
{
	int flag = 1;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}