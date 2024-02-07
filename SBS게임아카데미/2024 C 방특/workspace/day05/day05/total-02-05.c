// 피보나치 수열 더하기 
// 수를 입력받아 해당 수에 맞는 피보나치 수열 개수 출력
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long pibo1 = 1, pibo2 = 1, temp;

	printf("수를 입력하세요 >>> ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%lld ", pibo2);
		temp = pibo2;
		pibo2 += pibo1;
		pibo1 = temp;
	}

	return 0;
}