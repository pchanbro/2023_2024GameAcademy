#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int objNum, totalPrice;
	int calPrice = 0;
	printf("총 금액 >>> ");
	scanf("%d", &totalPrice);

	printf("물건 종류 수 >>> ");
	scanf("%d", &objNum);

	for (int i = 1; i <= objNum; i++)
	{
		int obj, price;
		printf("%d번째 물건의 가격과 개수 >>> ",i);
		scanf("%d %d", &obj, &price);
		calPrice += obj * price;
	}

	if (totalPrice == calPrice)
		printf("YES");
	else
		printf("NO");

	return 0;
}