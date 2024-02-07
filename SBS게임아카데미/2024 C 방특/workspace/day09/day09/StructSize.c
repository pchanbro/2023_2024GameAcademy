#include <stdio.h>

typedef struct a {
	int p, q; // 4 4
} A;

typedef struct b {
	char p, q; // 1 1
} B;

typedef struct c{
	int p; // 4
	char q; // 1
} C;

typedef struct d {
	char p; // 1
	int q; // 4
} D;

typedef struct e {
	char a; // 1
	int b; // 4
	short c; // 2
} E;

typedef struct f {
	int b; // 4
	char a; // 1
	short c; // 2
} F;

typedef struct g {
	double a; // 8
	int b; // 4
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
	// 구성한 자료형들 중 가장 큰 바이트 기준으로 해서 여백을 채워나가는 식으로 바이트가 채워짐
	// 메모리 절약할 때 구조체 내의 변수의 순서를 바꾸는 게 도움이 된다.
	printf("sizeof(A) = %zd\n", sizeof(A));
	printf("sizeof(B) = %zd\n", sizeof(B));
	printf("sizeof(C) = %zd\n", sizeof(C));
	printf("sizeof(D) = %zd\n", sizeof(D));
	printf("sizeof(E) = %zd\n", sizeof(E));
	printf("sizeof(F) = %zd\n", sizeof(F));
	printf("sizeof(G) = %zd\n", sizeof(G));
	printf("sizeof(H) = %zd\n", sizeof(H));



	return 0;
}