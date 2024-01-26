#include <iostream>
using namespace std;

void myFunction1(int* number)
{
	(*number)++;
}

void myFunction2(int& number)
{
	number++;
}

void myFunction3(int number)
{
	number++;
}

int main()
{
	//�����Ҵ�

	//���� ����
	int number;
	int input;

	// ��ǻ�� ���ο��� �޸� �Ҵ�.
	// �޸� -> RAM�� �մϴ�.
	// �޸� (Stack, Heap)
	// number, input
	// �����޸� -> Stack
	// �����޸� -> Heap
	// Stack : ����, ������ ��������� ����.
	// Heap : ����, ��������� RAM ���� ��� ��ŭ����

	// �����Ҵ� -> �����޸�
	// �����Ҵ� -> 1. Heap�� �ױ� ����
	// �����Ҵ� -> 2. �迭���̸� �������� �������

	//�迭 �����Ҵ�
	//�ڷ��� ������ = ��;
	int* myPtr = nullptr; //���� �����Ҵ��� ���� ������ �������� nullptr�� �־���
	//1. �����Ҵ� (�迭�� ���)
	myPtr = new int[10]{}; //���⼭ new int[10]{}; ó�� �ڿ� {}�� �ٿ��ָ� �迭�� ��� ��Ұ� 0���� �ʱ�ȭ�ȴ�. ���� {}�� ������ ������ �迭�� �����Ⱚ���� ����.
	//myPtr = new int[10];
	int myArr[10] = {};
	//int myArr[10];

	int size = 10;
	// myPtr = new int[size]{}; ����
	// int myArrr[size]; �Ұ���

	delete[] myPtr;
	//2. �����Ҵ� (�迭�� �ƴ� ���)
	int* myVariable = new int();
	(*myVariable) = 3;
	delete myVariable;

	//�����Ҵ� (�迭)�� ��쿡�� �迭ó�� ����ϸ� ��
	myPtr = new int[10]{};
	myPtr[0] = 0;
	myPtr[1] = 0;
	myPtr[2] = 0;
	myPtr[3] = 1;

	cout << myPtr[3] << endl;

	myFunction1(&myPtr[0]);
	myFunction2(myPtr[1]);
	myFunction3(myPtr[2]);

	cout << myPtr[0] << endl;
	cout << myPtr[1] << endl;
	cout << myPtr[2] << endl;


	return 0;
}