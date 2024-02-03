// divisor.c
/*
2. 입력한 정수의 약수를 찾아내는 함수 get_divisor()를 작성해주세요. (divisor.c)

<예시>
정수 입력 >>> 8
8의 약수는 1 2 4 8 입니다.
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void get_divisor(int n);

int main()
{
	printf("정수 입력 >>> ");
	int n;
	scanf("%d", &n);

	get_divisor(n);
	return 0;
}

void get_divisor(int n) {
	printf("%d의 약수는 ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d ", i);
	}
	printf("입니다.");
	return;
}