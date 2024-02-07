// For.c
#include <stdio.h>

int main()
{
	int i, j;
	int sum = 0;

	for (i = 0, j = 1; i < 5 && j <= 10 ; i++, j *= 2) {
		printf("%d %d\n", i, j);
		sum += i;
	}
	printf("гую╨ %d\n", sum);
	return 0;
}