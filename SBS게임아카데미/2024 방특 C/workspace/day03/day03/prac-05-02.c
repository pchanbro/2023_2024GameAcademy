// 85페이지 2번 비교 연산자 문제, 출력이 모두 1이 나오면 된다.
#include <stdio.h>

int main()
{
	int num1 = 27;
	printf("%d\n", num1 > 10);
	printf("%d\n", num1 == 27);
	printf("%d\n", num1 < 30);

	int num2 = num1 > 10;
	printf("%d\n", num2);
	return 0;
}