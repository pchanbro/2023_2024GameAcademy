#include <stdio.h>

void swapNumbers(int*, int*, int*);

int main()
{
	int num1 = 5, num2 = 8, num3 = 10;
	printf("�Լ� ȣ�� �� : %d %d %d\n", num1, num2, num3); // 5 8 10�� ������
	swapNumbers(&num1, &num2, &num3);
	printf("�Լ� ȣ�� �� : %d %d %d\n", num1, num2, num3); // 10 5 8�� ��������
	return 0;
}

void swapNumbers(int* a, int* b, int* c)
{
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}