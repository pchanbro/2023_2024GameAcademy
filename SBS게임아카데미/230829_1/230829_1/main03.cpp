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
	// 3. �����Ϳ� �Լ� 
	// �׷��� ��� ����ϳ�?

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
	//�����͸� ����ϴ� ������ ����������
	//�Լ� �ȿ��� ���� �ٲ�°� ���������� ǥ�����ִ� ����̱� �����̴�.

	Swap3(num1, num2);
	

	cout << num1 << endl;
	cout << num2 << endl;

}