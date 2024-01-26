#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void MyFunction1(int* number)
{
	(*number)++;
}

void MyFunction2(int& number)
{
	number++;
}

void MyFunction3(int number)
{
	number++;
}

int main()
{
	// �����Ҵ� 
	
	// ���� ����
	int number;
	int input;

	// ��ǻ�� ���ο��� �޸� �Ҵ�.
	// �޸� -> RAM �� �մϴ�.
	// �޸� (Stack, Heap)
	// number, input
	// �����޸� -> Stack
	// �����޸� -> Heap
	// Stack : �����. �ٵ� ��������� �۾ƿ�.
	// Heap : ������, ��������� RAM ���� �뷮��ŭ

	//�����Ҵ� -> �����޸�
	//�����Ҵ� ->  1. Heap���ٰ� �������
	//			  2. �迭���̸� �������� �������

	//�迭 �����Ҵ�
	//�ڷ��� ������ = ��;
	int* myPtr = nullptr;

	//1. �����Ҵ� (�迭�� ���)
	myPtr = new int[10]{};
	//myPtr = new int[10];
	int myArr[10] = {};
	//int myArr[10];

	int size = 10;
	// ����
	// myPtr = new int[size]{};
	// �Ұ���
	// int myArr[size];

	delete[] myPtr;

	//2. �����Ҵ� (�迭�� �ƴ� ���)
	// - Heap�޸𸮿� �������
	int* myVariable = new int();
	(*myVariable) = 3;
	delete myVariable;


	//�����Ҵ� (�迭)�� ��쿡�� �迭ó�� ����ϸ� ��.
	myPtr = new int[10]{};
	myPtr[0] = 0;
	myPtr[1] = 0;
	myPtr[2] = 0;

	cout << myPtr[3] << endl;

	MyFunction1(&myPtr[0]);
	MyFunction2(myPtr[1]);
	MyFunction3(myPtr[2]);


	cout << myPtr[0] << endl;
	cout << myPtr[1] << endl;
	cout << myPtr[2] << endl;


	// ���
	char hangManAnswer[3][250] = {
		"hangman",
		"education",
		"one"
	};
	//strcpy(hangManAnswer[0], "hangman");
	//strcpy(hangManAnswer[1], "education");
	//strcpy(hangManAnswer[2], "one");

	cout << "? ? ?" << endl;
	char input1;
	cin >> input1;
	cout << "? n ?" << endl;
	cout << "���� ��ȸ : 7" << endl;

	return 0;
}