/*
1. 사용자로부터 상품의 단가와 구매 수량을 입력받아 총 구매 금액이 얼마인지 출력하는 프로그램을 작성하세요. (price.c 로 저장)

<예시>
단가 입력 >>> 10000
수량 입력 >>> 5
총 금액은 50000원
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("단가 입력 >>> ");
	scanf("%d", &a);

	printf("수량 입력 >>> ");
	scanf("%d", &b);

	printf("총 금액은 %d원", a * b);
	return 0;
}
