#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	printf("테스트 케이스의 개수 >>> ");
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		int A, B;
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}


	return 0;
}