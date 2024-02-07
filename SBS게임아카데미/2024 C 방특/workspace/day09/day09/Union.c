#include <stdio.h>

typedef struct test {
	int a;
	char b;
	short c;
} TEST;

typedef union box { // 요소들이 같은 메모리를 사용하기 때문에 보안상 거의 안쓴다 
	int a;
	char b;
	short c;
} BOX;

int main()
{
	TEST t1;
	BOX b1;
	
	printf("t1 : %p %p %p\n", &t1.a, &t1.b, &t1.c);
	printf("b1 : %p %p %p\n", &b1.a, &b1.b, &b1.c);

	printf("sizeof(BOX) : %zd\n", sizeof(BOX));
	printf("sizeof(b1.a) : %zd\n", sizeof(b1.a));
	printf("sizeof(b1.b) : %zd\n", sizeof(b1.b));
	printf("sizeof(b1.c) : %zd\n", sizeof(b1.c));

	b1.b = 127;
	b1.c = 10000;
	printf("%d %d %d\n", b1.a, b1.b, b1.c);

	return 0;
}