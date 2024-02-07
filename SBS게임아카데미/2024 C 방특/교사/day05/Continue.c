// Continue.c
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 40; i++) {
		if (i % 3 != 0)
			continue;
		printf("%d ", i);
	}
	puts("");

	int j = 0;
	while (j <= 40) {
		j++;
		if (j % 3 != 0)
			continue;
		printf("%d ", j);
	}
	puts("");

	int k = 1;
	do {
		if (k % 3 != 0) {
			k++;
			continue;
		}
		printf("%d ", k);
		k++;
	} while (k <= 40);
	
	return 0;
}