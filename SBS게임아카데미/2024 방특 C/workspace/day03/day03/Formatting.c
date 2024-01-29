#include <stdio.h>
#include <math.h>

int main()
{
	
	int a = 123;
	printf("!%d!\n", a);
	printf("!%8d!\n", a);
	printf("!%-8d!\n", a);
	printf("!%+8d!\n", a);
	printf("!%08d!\n", a);
	puts("");

	double b = 3.1415926;
	printf("!%f!\n", b); // double는 기본적으로 소수점 6자리 까지만 출력
	printf("!%.3f!\n", b);
	printf("!%.8f!\n", b);
	printf("!%8.3f!\n", b);
	printf("!%12.3f!\n", b);
	printf("!%+12.3f!\n", b);
	printf("!%-12.3f!\n", b);
	printf("!%012.3f!\n", b);
	puts("");

	printf("%.1f\n", round(3.5));
	printf("%.1f\n", round(4.5));
	printf("%.1f\n", round(5.5));
	puts("");

	printf("!%8s!\n", "hello");
	printf("!%-8s!\n", "hello");
	printf("!%08s!\n", "hello");


	return 0;
}