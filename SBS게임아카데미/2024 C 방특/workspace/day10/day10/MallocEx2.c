#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[3][4]; //정적 2차원 배열 할당.

	int** p = (int**)malloc(sizeof(int*) * 3); // 동적 2차원 배열 할당 (3행)

	for (int i = 0; i < 3; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * 4);
		memset(p[i], 0, 4 * sizeof(int)); // memset은 포인터 하나에만 써야함
	}


	p[0][0] = 1;
	p[2][0] = 5;
	p[2][3] = 10;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", p[i][j]);
		}
		puts("");
	}

	return 0;
}