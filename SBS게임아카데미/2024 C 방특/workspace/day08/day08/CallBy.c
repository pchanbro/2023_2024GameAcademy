#include <stdio.h>

void swapValue(int, int);
void swapRef(int*, int*);

int main()
{
	int num1 = 10, num2 = 20;
	printf("before num1 = %d, num2 = %d\n", num1, num2);
	swapValue(num1, num2); // 이거로는 값이 안바뀐다.
	printf("after num1 = %d, num2 = %d\n", num1, num2);

	puts("");
	printf("before num1 = %d, num2 = %d\n", num1, num2);
	swapRef(&num1, &num2);
	printf("after num1 = %d, num2 = %d\n", num1, num2);


	return 0;
}

void swapValue(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("func num1 = %d, num2 = %d\n", num1, num2);
}

void swapRef(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
	printf("func num1 = %d, num2 = %d\n", *num1, *num2);
}