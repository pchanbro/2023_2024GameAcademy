#include <iostream>
using namespace std;

int main()
{
	//������
	int number = 3;
	int* myPointer = &number;

	//myPointer�� �ּҸ� ��� ���
	cout << &myPointer << endl; //myPointer�� �ּҴ�. &(&number)�״ϱ� number�� �ּ��� �ּҶ�� �� �� ������ &(&number)�δ� ���� �� ���� ��������.
	cout << &number << endl; //number�� �ּ�
	cout << myPointer << endl; //myPointer�� ��
	cout << number << endl; //number�� ��
	cout << *myPointer << endl; //myPointer�� ���� ��Ÿ���� �ּҿ� �ִ� ��

	return 0;
}