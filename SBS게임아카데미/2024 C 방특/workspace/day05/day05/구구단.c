#include <stdio.h>

int main()
{
	for (int j = 2; j <= 9; j++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d*%d=%d\t",j, i, j * i);
		}
		printf("\n"); //puts(""); �ص���
	}

	puts("");

	// ��, �� ����
	for (int j = 1; j <= 9; j++)
	{
		for (int i = 2; i <= 9; i++)
		{
			printf("%d*%d=%d\t", i, j, j * i);
		}
		printf("\n");
	}
	return 0;
}