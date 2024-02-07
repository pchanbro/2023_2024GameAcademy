#include <stdio.h>

int main()
{
	// int c = getchar();
	// printf("%d, %c", c, c);
	
	char name[20];
	// gets(name);
	fgets(name, sizeof(name), stdin);
	printf("%s", name);

	return 0;
}