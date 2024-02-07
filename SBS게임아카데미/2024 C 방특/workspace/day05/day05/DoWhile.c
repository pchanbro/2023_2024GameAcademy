#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	do {
		printf("정수 입력 >>> ");
		scanf("%d", &n);
	} while (n != 0);

	printf("종료되었습니다.");

	int m;
	while (true) //while (m != 0) 이렇게 하려면 m을 초기화 시켜줘야 한다.
	{
		scanf("%d", &m);
		if (m == 0) break;
	}
	return 0;
}