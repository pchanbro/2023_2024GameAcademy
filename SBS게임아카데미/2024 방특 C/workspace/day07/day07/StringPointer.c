#include <stdio.h>

int main()
{
	char* p = "Hello World";
	char q[20] = "Hello World";
	
	char* ptr = q;

	printf("%s\n", ptr);
	printf("%s\n", q);
	printf("%s\n", p);

	int len = 0;

	while (*ptr)
	{
		printf("%c", *ptr++);
		len++;
	}
	printf("\n±Ê¿Ã : %d", len);

	return 0;
}