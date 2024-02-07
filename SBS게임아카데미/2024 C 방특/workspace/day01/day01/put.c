#include<stdio.h>

int main()
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
	puts(" C Language");
	puts("\n");
	putchar('\'');
	putchar('"');
	puts("\"");
	puts("\\");

	printf("%08s", "Hello");

	printf("%%");

	printf("%%%");

	putchar("%");
	putchar("%%");
	putchar("%%%");

	puts("%");
	puts("%%");

	return 0;
}