#include <stdio.h>

int count = 0;
void f() {
	printf("f %d\n", count);
	count++;
}

int main()
{
	int i = 0, j = 1, sum = 0;

	i++; f();
	++j; f();
	sum += i + j++; f();

	printf("i = %d, j = %d, sum = %d\n", i, j, sum);
	f();

	return 0;
}