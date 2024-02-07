#include <stdio.h>

void swapNumbers(int*, int*, int*);

int main()
{
	int num1 = 5, num2 = 8, num3 = 10;
	printf("함수 호출 전 : %d %d %d\n", num1, num2, num3); // 5 8 10이 나오고
	swapNumbers(&num1, &num2, &num3);
	printf("함수 호출 후 : %d %d %d\n", num1, num2, num3); // 10 5 8이 나오도록
	return 0;
}

void swapNumbers(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}