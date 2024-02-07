// StringPointer.c

#include <stdio.h>
#include <string.h>

int main()
{
	char* p = "Hello World";
	char q[20] = "Hello World";

	char* ptr = q;
	int len = 0;

	while (*ptr) {
		len++;
		printf("%c", *ptr++);
	}
	printf("±æÀÌ´Â %d %d\n", len, strlen(q));

	return 0;
}