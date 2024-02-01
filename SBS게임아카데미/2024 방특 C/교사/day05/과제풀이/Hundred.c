/*
2. 100으로 시작하여 특정 정수를 입력하면 계속 수를 빼다가 0 이하로 내려가면 종료하는 프로그램을 작성해주세요. (Hundred.c)
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int value = 100;
	while (value > 0) {
		printf("현재 값 = %d\n", value);
		printf("정수 입력 >>> ");

		int n;
		scanf("%d", &n);
		value -= n;
	}

	return 0;
}