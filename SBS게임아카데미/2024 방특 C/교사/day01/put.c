#include <stdio.h>

int main(void)
{
	putchar('A');
	putchar('a');
	putchar('\n');
	putchar('B');
	putchar('\b');
	putchar('\t');
	putchar('C');
	putchar('\a');
	puts("Hello");
	puts("C Language");
	puts("\n");
	putchar('\'');
	putchar('"');
	puts("\"");
	puts("\\");

	printf("%08s", "Hello");

	//printf("%%");

	putchar('%%%');

	//puts("%%");
	return 0;
}