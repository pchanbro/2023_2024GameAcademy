// prime.c
// total-02-03.c 코드를 참고하여 매개변수로 정수 1개를 넘겼을 때, 해당 정수가 소수인지 판별하는 함수
// 소수면 1, 아니면 0
/*
함수이름: isPrime
매개변수: 정수 1개
반환값: 정수 1개
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int isPrime(int);

int main()
{
	int n;
	printf("정수 입력 >>> ");
	scanf("%d", &n);

	int c = isPrime(n);
	if (c) printf("%d는 소수입니다.", n);
	else printf("%d는 소수가 아닙니다.", n);
}

int isPrime(int n) {
	int flag = 1;
	for (int j = 2; j * j <= n; j++) {
		if (n % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

