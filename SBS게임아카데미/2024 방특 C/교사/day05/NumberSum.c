// NumberSum.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int count = 0, sum = 0;

	while (count < 3) {
		printf("정수 입력 >>> ");
		scanf("%d", &num);
		if (num <= 0)
			count++;
		else
			sum += num;
	}
	printf("종료\n합은 %d입니다.\n", sum);

	count = 0;
	sum = 0;
	while (1) {
		printf("정수 입력 >>> ");
		scanf("%d", &num);
		if (num <= 0)
			count++;
		else
			sum += num;
		if (count == 3)
			break;
	}
	printf("종료\n합은 %d입니다.\n", sum);

	count = 0;
	sum = 0;
	do {
		printf("정수 입력 >>> ");
		scanf("%d", &num);
		if (num <= 0)
			count++;
		else
			sum += num;
		if (count == 3)
			break;
	} while (1);
	printf("종료\n합은 %d입니다.\n", sum);

	count = 0;
	sum = 0;
	do {
		printf("정수 입력 >>> ");
		scanf("%d", &num);
		if (num <= 0)
			count++;
		else
			sum += num;
	} while (count < 3);
	printf("종료\n합은 %d입니다.\n", sum);

	return 0;
}