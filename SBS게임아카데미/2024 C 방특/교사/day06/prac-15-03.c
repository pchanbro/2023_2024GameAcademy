// prac-15-03.c
/*
237페이지 3번
한 개의 정수를 매개변수로 입력받아, 입력받은 수와 그 수보다 200 더 큰 정수 사이에 7의 배수가 몇 개나 존재하는지 구하고 그 결과를 반환하는 함수

함수이름: sevens
매개변수: 정수1개
반환값: 정수1개
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int sevens(int);

int main()
{
	int n;
	printf("정수를 입력하세요 >>> ");
	scanf("%d", &n);
	int c = sevens(n);
	printf("%d와 %d 사이 7의 배수는 %d개입니다!", n, n + 200, c);
	return 0;
}

int sevens(int n) {
	int count = 0;
	for (int i = n + 1; i < n + 200; i++) {
		if (i % 7 == 0)
			count ++;
	}
	return count;
}