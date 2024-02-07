/*
1. 정수 1개를 입력받아 아래와 같은 형태로 출력하는 프로그램을 작성해주세요. (NumStar.c)

<예시>
정수 입력 >>> 5
1****
12***
123**
1234*
12345

정수 입력 >>> 3
1**
12*
123
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("정수 입력 >>> ");

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		for (int j = 1; j <= n - i; j++)
			printf("*");
		printf("\n"); // puts("");
	}
	return 0;
}