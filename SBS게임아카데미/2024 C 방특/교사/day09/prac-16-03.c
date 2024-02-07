// 251페이지 3번
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursiveSum(int n) {
	// 인자로 받고있는 n이 0이 될때까지 계속해서 인자 값을 빼는 방식으로 호출 -> 재귀 호출 (함수 내에서 내 함수를 호출)
	// 힌트: 교재 247페이지

	// int sum = 0;
	// for (int i = 1; i <= n; i++) sum += i;
	// return sum;

	// (1~n) = n + (1~n-1)

	if (n < 0)
		return 0;
	return n + recursiveSum(n - 1);
}

int main()
{
	int n;
	printf("n을 입력해주세요 >>> ");
	scanf("%d", &n);
	int result = recursiveSum(n);
	printf("1부터 n까지의 합 = %d", result);
	return 0;
}