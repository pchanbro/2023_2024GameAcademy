// ArrayEx.c
#include<stdio.h>

int main()
{
	int a[3];

	a[0] = 3;
	a[1] = 2;
	a[2] = 1;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);

	int b[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}
	printf("%zd %zd %zd\n",
		sizeof(b), sizeof(int), sizeof(b) / sizeof(int));

	int c[] = { 1, 3 };
	for (int i = 0; i < sizeof(c) / sizeof(int); i++) {
		printf("c[%d] = %d\n", i, c[i]);
	}
	printf("%zd %zd %zd\n",
		sizeof(c), sizeof(int), sizeof(c) / sizeof(int));

	int d[5] = { 1, 3 };
	for (int i = 0; i < sizeof(d) / sizeof(int); i++) {
		printf("d[%d] = %d\n", i, d[i]);
	}
	printf("%zd %zd %zd\n",
		sizeof(d), sizeof(int), sizeof(d) / sizeof(int));

	double e[] = { 3.14, 2.71, 1.41 };
	printf("%zd %zd %zd\n",
		sizeof(e), sizeof(double), sizeof(e) / sizeof(double));

	char f[6] = { 'h', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 5; i++)
		printf("%c", f[i]);
	puts("");
	printf("%s\n", f);
	printf("%zd %zd %zd\n",
		sizeof(f), sizeof(char), sizeof(f) / sizeof(char));

	char g[6] = "hello";
	for (int i = 0; i < 5; i++)
		printf("%c", g[i]);
	puts("");
	printf("%s\n", g);
	printf("%zd %zd %zd\n",
		sizeof(g), sizeof(char), sizeof(g) / sizeof(char));
}