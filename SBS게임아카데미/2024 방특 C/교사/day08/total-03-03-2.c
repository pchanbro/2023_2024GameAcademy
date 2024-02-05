// 195페이지 3번
/*
입력 >>> 6789 (최대 12자리까지 입력)
6 7 8 9
7 8 9
8 9
9        ==> 2차원 배열(int)로 구현
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	long long a;
	int b[13][13] = { 0 };
	int dig = 0;
	scanf("%lld", &a);

	long long c = a;
	while (c > 0) {
		c /= 10;
		dig++;
	}

	int d = dig;
	while (a > 0) {
		int one = a % 10;
		d--;
		for (int i = 0; i <= d; i++) {
			b[i][d - i] = one;
		}
		a /= 10;
	}

	for (int i = 0; i < dig; i++) {
		for (int j = 0; j < dig - i; j++) {
			printf("%d ", b[i][j]);
		}
		puts("");
	}

	printf("%d\n", dig);

	return 0;
}