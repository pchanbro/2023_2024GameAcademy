#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, finish = 1; // while문 안에서 선언하면 초기화 안시켜도됨

	while (1) // for(;;)와 유사함
	{
		printf("종료 수를 입력하세요 >>> ");
		scanf("%d", &finish);

		if (finish == 0)
			break;

		printf("배수를 입력하세요 >>> ");
		scanf("%d", &num);

		for (int i = 1; i < finish; i++) // for(int i = num; i <= end; i+=num) 하면 i가 배수
		{
			if (i % num == 0)
				printf("%d ", i);
		}
		puts("");
	}
	printf("종료되었습니다.\n");

	while (1)
	{
		printf("종료 수를 입력하세요 >>> ");
		scanf("%d", &finish);

		if (finish == 0)
			break;

		printf("배수를 입력하세요 >>> ");
		scanf("%d", &num);

		// 내부를 while문
		int i = 1;
		while (i < finish)
		{
			if (i % num == 0) // i += num; 하면 i는 배수만 됨
				printf("%d ", i);
			i++;
		}
		puts("");
	}
	printf("종료되었습니다.\n");



	return 0;
}