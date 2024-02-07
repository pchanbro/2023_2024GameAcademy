#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a = 5; 
	int* p = &a;
	printf("a = %d\n", a);
	printf("p = %p %p\n", p, &a); // 주소값은 %p 주소는 실행할때마다 달라진다. 

	double b = 3.14;
	double* q = &b;
	printf("b = %f\n", b);
	printf("q = %p %p\n", q, &b);

	printf("int* = %zd, double* = %zd\n", sizeof(p), sizeof(q));
	//pointer 크기는 운영체제가 몇bit냐에 따라 달라짐 64bit면 8byte, 32bit면 4byte


	// void 는 sizeof를 통해 크기를 알아낼 수없다.
	// 그럼 void 포인터는 몇 바이트일까

	printf("void* = %zd\n", sizeof(void*)); //마찬가지로 8바이트 

	int c = 10;
	int* r = &c;
	printf("c = %d, r = %p\n", c, r);

	*r = 20;
	printf("c = %d, r = %p\n", c, r);

	*&c = 30;
	printf("c = %d, r = %p\n", c, r);

	return 0;
}