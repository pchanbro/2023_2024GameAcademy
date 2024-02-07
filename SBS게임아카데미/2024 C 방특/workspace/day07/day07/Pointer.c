#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a = 5; 
	int* p = &a;
	printf("a = %d\n", a);
	printf("p = %p %p\n", p, &a); // �ּҰ��� %p �ּҴ� �����Ҷ����� �޶�����. 

	double b = 3.14;
	double* q = &b;
	printf("b = %f\n", b);
	printf("q = %p %p\n", q, &b);

	printf("int* = %zd, double* = %zd\n", sizeof(p), sizeof(q));
	//pointer ũ��� �ü���� ��bit�Ŀ� ���� �޶��� 64bit�� 8byte, 32bit�� 4byte


	// void �� sizeof�� ���� ũ�⸦ �˾Ƴ� ������.
	// �׷� void �����ʹ� �� ����Ʈ�ϱ�

	printf("void* = %zd\n", sizeof(void*)); //���������� 8����Ʈ 

	int c = 10;
	int* r = &c;
	printf("c = %d, r = %p\n", c, r);

	*r = 20;
	printf("c = %d, r = %p\n", c, r);

	*&c = 30;
	printf("c = %d, r = %p\n", c, r);

	return 0;
}