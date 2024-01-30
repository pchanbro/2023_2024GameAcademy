/*
2. 정수 1개를 입력받아 최상위 비트가 1인지 0인지 출력해주세요. (msb.c 로 저장)

<예시>
정수 입력 >>> 10
최상위 비트는 0

정수 입력 >>> -11
최상위 비트는 1
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

int main()
{
	printf("정수 입력 >>> ");

	int n;
	scanf("%d", &n);

	printf("최상위 비트는 %d\n", n >= 0 ? 0 : 1);
	printf("최상위 비트는 %d\n", (n & (1 << 31)) / (1 << 31));

	printf("최하위 비트는 %d\n", n % 2);
	printf("최하위 비트는 %d\n", n & 1);

	return 0;
}