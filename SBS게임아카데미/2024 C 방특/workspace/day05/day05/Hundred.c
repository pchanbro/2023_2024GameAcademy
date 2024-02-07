#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int startNum = 100;
	while (startNum > 0)
	{
		int minusNum;
		printf("현재 값 = %d\n", startNum);
		printf("정수 입력 >>> ");
		scanf("%d", &minusNum);
		startNum -= minusNum;
	}

	printf("현재 값 = %d\n", startNum);
	printf("0 이하이므로 종료합니다.");
	return 0;
}