// StructSize.c
#include <stdio.h>

typedef struct a {
	int p, q;
} A;

typedef struct b {
	char p, q;
} B;

typedef struct c {
	int p;
	char q;
} C;

typedef struct d {
	char p;
	int q;
} D;

typedef struct e {
	char a; // 1
	int b; // 4
	short c; // 2
} E;

typedef struct f {
	int b; // 4
	short c; // 2
	char a; // 1
} F;

typedef struct g {
	double a;
	int b;
} G;

typedef struct h {
	int a; // 4
	short b; // 2
	char c; // 1
	double d; // 8
	int e; // 4
} H;

int main()
{
	printf("sizeof(A): %zd\n", sizeof(A));
	printf("sizeof(B): %zd\n", sizeof(B));
	printf("sizeof(C): %zd\n", sizeof(C));
	printf("sizeof(D): %zd\n", sizeof(D));
	printf("sizeof(E): %zd\n", sizeof(E));
	printf("sizeof(F): %zd\n", sizeof(F));
	printf("sizeof(G): %zd\n", sizeof(G));
	printf("sizeof(H): %zd\n", sizeof(H));
	return 0;
}