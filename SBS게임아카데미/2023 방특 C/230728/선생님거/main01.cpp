#include <iostream>
using namespace std;

enum eRCP
{
	ROCK,
	SCISSOR,
	PAPER
};
int main()
{
	// ������
	// - ������ �����ϸ� �޸� ���� ����ϴ� �ڷ���
	// - int* myPointer = &number;
	// - �Լ�, ���� �Ҵ�
	
	float time = 0.1;
	cout << &time << endl;
	cout << &(*(&time)) << endl;
	int number = 3;
	cout << &number << endl;

	int card[5] = { 0, };

	int* myPointer = &number;

	int* myPointer2 = card;
	cout << *(myPointer2) << endl;

	//�迭, �������� �������
	//�迭 == ������ 
	cout << "�迭, �������� �������" << endl;
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* myPointer3 = arr;
	cout << myPointer3 << endl;
	cout << *myPointer3 << endl;
	cout << myPointer3[0] << endl;
	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr + 1) << endl;
	cout << *(myPointer3 + 1) << endl;
	cout << arr[1] << endl;

	//������ ����


	int* myPointer4 = &number;
	float* a;	//==> �ּҰ�
	char* b;	//==> �ּҰ�
	bool* c;	//==> �ּҰ�
	void* d;	//==> �ּҰ�

	// ������ �ڷ����� ��ȯ�����ְڴ� (�ڷ���)��;
	eRCP myRcp = (eRCP)2;
	// Error (�ڷ����� ��ġ��������)
	// a = myPointer4;
	// int a = eRCP::PAPER;
	// eRCP rcp = 2;
	
	int myNumber1 = 10 / 3;
	cout << myNumber1 << endl;	//3
	float myNumber2 = 10.0 / 3.0;
	cout << (int)myNumber2 << endl;	//3.3333

	//�������ѵ� ���� ������.
	a = (float*)myPointer4;
	cout << *a << endl;

	cout << &myPointer4 << endl;

	return 0;
}