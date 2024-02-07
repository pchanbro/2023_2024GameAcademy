// Counting.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	while (1) { // while(true)  for(;;)
		int end, num;

		printf("종료 수를 입력하세요 >>> ");
		scanf("%d", &end);
		if (end == 0) break;

		printf("배수를 입력하세요 >>> ");
		scanf("%d", &num);

		for (int i = num; i <= end; i += num)
			printf("%d ", i);
		puts("");

		for (int i = 1; i <= end; i++) 
			if (i % num == 0)
				printf("%d ", i);
		puts("");

		int j = num;
		while (j <= end) {
			printf("%d ", j);
			j += num;
		}
		puts("");

		int k = num;
		do {
			if(k <= end)
				printf("%d ", k);
			k += num;
		} while (k <= end);
		puts("");
	}
}