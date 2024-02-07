#include <stdio.h>

int main()
{
	for (int j = 2; j <= 9; j++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d*%d=%d\t", j, i, j * i);
		}
		printf("\n"); // puts("");
	}

	puts("");

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d*%d=%d\t", j, i, j * i);
		}
		puts("");
	}

	return 0;
}

