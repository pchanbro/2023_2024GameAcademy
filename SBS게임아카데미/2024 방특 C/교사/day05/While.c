// While.c
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i = 0;
	while (i < 5) {
		printf("Hello %d\n", i);
		i++;
	}

	i = 0;
	while ('\0') {
		printf("무한루프 true\n");
		if (i == 4) break;
		i++;
	}

	return 0;
}