#pragma warning(disable:4700) // 오류 무시하고 출력하려고 작성(억지로 오류를 만들었음)
#include <stdio.h>

int c;
int d = 100;

int main()
{
	// 지역 변수 local variable
	int a;
	int b = 10;
	printf("%d %d\n", a, b);
	printf("%p %p\n", &a, &b);
	printf("%d %d\n", c, d);
	printf("%p %p\n", &c, &d);

	return 0;
}