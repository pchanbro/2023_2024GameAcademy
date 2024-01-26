#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	// 단가와 수량을 입력하면 총 금액이 나타나는 프로그램
	int price, num;
	printf("단가 입력 >>> ");
	scanf("%d", &price);
	printf("수량 입력 >>> ");
	scanf("%d>>> ", &num);

	printf("총 금액은 %d원\n", price * num);

	return 0;
}