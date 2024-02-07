#include <iostream>

using namespace std;

void Swap1(int a, int b)
{
	a = 10000;
	b = 300;

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
	//3. 포인터와 함수
	// 그래서 언제 사용하는데?


	//1. void Swap(int a, int b)
	int num1 = 10;
	int num2 = 20;
	//Swap1(num1, num2);

	Swap2(&num1, &num2);
	//(int* a, int* b)
	/*{
		int* a = &num1;
		int* b = &num2;
		int temp = *a;
		*a = *b;
		*b = temp;
	}*/

	Swap3(num1, num2);

	//가시적으로
	//함수안에서 값이 바뀌는걸 직관적으로 표현해주는 방법이기 때문에

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
}