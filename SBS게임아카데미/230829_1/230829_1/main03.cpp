#include <iostream>
#include <time.h>
using namespace std;

void Swap1(int a, int b)
{

}

void Swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

void Swap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	// 3. 포인터와 함수 
	// 그래서 어떻게 사용하나?

	//1. void Swap(int a, int b)
	int num1 = 10;
	int num2 = 20;
	Swap1(num1, num2);

	Swap2(&num1, &num2);
	//(int* a, int* b)
	/*{
		int* a = &num1;
		int* b = &num2;

		int temp = *a;
		*a = *b;
		*b = temp;
		cout << a << endl;
		cout << b << endl;
	}*/
	//포인터를 사용하는 이유는 가시적으로
	//함수 안에서 값이 바뀌는걸 직관적으로 표현해주는 방법이기 때문이다.

	Swap3(num1, num2);
	

	cout << num1 << endl;
	cout << num2 << endl;

}