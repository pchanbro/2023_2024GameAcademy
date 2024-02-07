// 250페이지 2번
// 5 8 10  ->  10 5 8

#include <stdio.h>

void swapNumbers(int*, int*, int*);

int main()
{
	int num1 = 5, num2 = 8, num3 = 10;
	printf("함수 호출 전: %d %d %d\n", num1, num2, num3);
	swapNumbers(&num1, &num2, &num3);
	printf("함수 호출 후: %d %d %d\n", num1, num2, num3);
	return 0;
}

void swapNumbers(int* a, int* b, int* c) {
	int temp = *c;
	*c = *b;
	*b = *a;
	*a = temp;
}