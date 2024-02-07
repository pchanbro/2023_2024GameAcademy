// Global.c
#include <stdio.h>

int num;
void add(int);

int main()
{
	int num = 10;

	printf("num = %d\n", num);
	add(10);
	printf("num = %d\n", num);
	{num++;}
	printf("num = %d\n", num);

	return 0;
}

void add(int val) {
	num += val;
}