// total-02-05.c
/*
145페이지 5번
1 1 2 3 5 8 13 21 ...
최근 두 수를 더한 값을 출력한 것이 피보나치 수열
수를 1개 입력받아서 해당 수만큼의 피보나치 수열을 출력
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	long long a = 1;
	long long b = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%lld ", a);
		long long c = a + b;
		a = b;
		b = c;
	}
	return 0;
}