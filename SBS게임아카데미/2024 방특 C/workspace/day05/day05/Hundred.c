#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int startNum = 100;
	while (startNum > 0)
	{
		int minusNum;
		printf("���� �� = %d\n", startNum);
		printf("���� �Է� >>> ");
		scanf("%d", &minusNum);
		startNum -= minusNum;
	}

	printf("���� �� = %d\n", startNum);
	printf("0 �����̹Ƿ� �����մϴ�.");
	return 0;
}