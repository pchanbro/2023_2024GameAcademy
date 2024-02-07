#pragma warning(diable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// while

	int num, count, sum;
	count = 0;
	sum = 0;
	while (1) // while(count < 3) 으로 하면 안에 break문이 필요 없다.
	{
		printf("정수를 입력하세요 >>> ");
		scanf("%d", &num);
		
		if (num <= 0) count++;
		else sum += num;
		if (count == 3) break;
	}

	printf("종료\n");
	printf("합은 %d입니다.\n", sum);

	// do-while

	count = 0;
	sum = 0;
	do
	{
		printf("정수를 입력하세요 >>> ");
		scanf("%d", &num);

		if (num <= 0) count++;
		else sum += num;
	} while (count < 3);

	printf("종료\n");
	printf("합은 %d입니다.\n", sum);

	// do-while 무한루프

	count = 0;
	sum = 0;
	do
	{
		printf("정수를 입력하세요 >>> ");
		scanf("%d", &num);

		if (num <= 0) count++;
		else sum += num;
		if (count == 3) break;
	} while (1);

	printf("종료\n");
	printf("합은 %d입니다.\n", sum);

	return 0;
}