#include <iostream>
using namespace std;

void main()
{
	// ������
	// Ŭ����


	// ���α׷��� �Թ��Ҷ� ���� ū���� �Ǵ� ����
	// 1. �迭
	// 2. ������
	// 3. Ŭ����


	// 2. ������

	// ������ ��?
	// �޸� �ּ� �� (RAM)
	int a = 3;
	cout << a << endl;

	//�ڷ��� ������ = ��;
	int* aPtr = &a;
	//int* => int���� ������ 
	//(int���� �ּҰ��� ���� �� �ִ� �ڷ���)

	//&a => a�� �ּҰ�
	//aPtr ==> a�� �ּҰ� (4����Ʈ)
	cout << "aPtr : " << aPtr << endl;

	// �޸𸮰��� �ּ� �� ==> &
	// �ּҰ��� �޸� �� ==> *
	cout << "A�� �� : " << a << endl;
	cout << "A�� �ּ� �� : " << &a << endl;
	cout << "aPtr �� : " << aPtr << endl;
	cout << "aPtr�� �޸� �� : " << *aPtr << endl;

	int** aPtrPtr = &aPtr;

	//�������� �����
	// int*  ==> int��� ������� �ּҰ�
	// int** ==> int*�̶�� ������� �ּҰ�

	cout << "aPtrPtr�� �� : " << aPtrPtr << endl;
	cout << "*aPtrPtr : " << *aPtrPtr << endl;
	cout << "**aPtrPtr : " << **aPtrPtr << endl;
}