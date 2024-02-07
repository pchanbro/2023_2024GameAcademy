#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", i);
		sum += i;
	}

	int j;
	for (i = 0, j = 1; i < 5 && j <= 10; i++, j *= 2) // 변수 2개 넣는것도 가능
	{
		printf("%d %d\n", i, j);
		sum += i;
	}
	printf("sum = %d", sum);
	return 0;
}