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
	//3. �����Ϳ� �Լ�
	// �׷��� ���� ����ϴµ�?


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

	//����������
	//�Լ��ȿ��� ���� �ٲ�°� ���������� ǥ�����ִ� ����̱� ������

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
}