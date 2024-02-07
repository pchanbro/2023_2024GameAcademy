#include<stdio.h>
typedef unsigned long long int uli;

int main()
{
	char c = 1;
	double d = 3.14;

	// 묵시적 형변환
	printf("size of : %d\n", sizeof(c + d)); // 자동으로 범위가 큰 double로 캐스팅
	printf("%lf\n", c + d);

	// 명시적 형변환
	printf("size of : %d\n", sizeof(c + (char)d)); // 개발자가 직접 double을 char로 캐스팅
	printf("%d\n", c + (char)d);

	// 형 변환 시 오버플로우
	int a = 40000;
	char b = a;
	printf("%hd\n", b);

	// 형 변환 시 언더플로우
	int e = -40000;
	char f = e;
	printf("%hd\n", f);

	uli g = 18440000000000000000; //1844경, 0이 16개
	printf("%llu\n", g);
	printf("%zd\n", sizeof(uli));
	printf("%zd\n", sizeof(unsigned long long int));



	return 0;
}