// TypeCasting.c
#include <stdio.h>
typedef unsigned long long int uli;

int main()
{
	char c = 1;
	double d = 3.14;

	// 묵시적 형변환
	printf("sizeof: %d\n", sizeof(c + d));
	printf("%lf\n", c + d);

	// 명시적 형변환
	printf("sizeof: %d\n", sizeof(c + (char)d));
	printf("%d\n", c + (char)d);

	// 오버플로우 형변환
	int a = 40000;
	short b = a;
	printf("%hd\n", b);

	// 언더플로우 형변환
	int e = -40000;
	short f = e;
	printf("%hd\n", f);

	uli g = 18440000000000000000; // 0 16개
	printf("%llu\n", g);
	printf("%zd\n", sizeof(uli));
	printf("%zd\n", sizeof(unsigned long long int));

	return 0;
}