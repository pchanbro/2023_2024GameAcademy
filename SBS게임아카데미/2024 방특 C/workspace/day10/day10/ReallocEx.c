#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* a = (int*)malloc(sizeof(int) * 30);
	for (int i = 0; i < 30; i++)
	{
		a[i] = i;
	}
	for (int i = 0; i < 30; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");
	a = (int*)realloc(a, sizeof(int) * 40);
	// a = (int*)malloc(sizeof(int) * 40);
	for (int i = 0; i < 30; i++)
		printf("%d ", a[i]);
	puts("");

	int* b = (int*)malloc(sizeof(int));
	*b = 10;
	printf("%d\n", *b);

	free(a);
	free(b);


	return 0;
}