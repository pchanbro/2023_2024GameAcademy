// prac-02-02.c
#include <stdio.h>

int main()
{
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(50));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(3.14));

	return 0;
}