#include <iostream>
using namespace std;

int main()
{
	//�����Ҵ�

	//�迭 == ������
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* myPointer = arr;

	cout << arr << endl;
	cout << myPointer << endl;

	cout << "arr[0] ������ : " << endl;
	cout << arr[0] << endl;
	cout << *(myPointer + 0) << endl;
	cout << myPointer[0] << endl;

	cout << "arr[1] ������ : " << endl;
	cout << arr[1] << endl;
	cout << *(myPointer + 1) << endl;
	cout << myPointer[1] << endl;

	//�����Ҵ�
	//Ctrl + F5 �� ������ ������ ������ ũ�Ⱑ �����ȴ�.
	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//�����Ҵ�
	//���α׷��� ����Ǵ� ��Ÿ�� ������ ũ�Ⱑ ���Ѵ�.
	
	//C++ ����
	//�����Ҵ�
	//new, delete
	int size1;
	cout << "������ �迭ũ�⸦ �Է����ּ���." << endl;
	cin >> size1;
	int* myPointer2 = new int[size1];
	delete[] myPointer2;

	// ��ǻ�ͺ�ǰ RAM : 16GB
	// 
	// �ڷ������� ũ�Ⱑ�ٸ�
	// int -> 4Byte
	// float -> 4Byte
	// char -> 1Byte 
	// bool -> 1Byte
	// ������ -> 4Byte

	// Bit  - 0,1  --> 0 ~ 1
	// Byte - 8Bit --> 0 ~ 255

	//C����
	//malloc, free
	int* myPointer3 = (int*)malloc(sizeof(int) * size1);
	free(myPointer3);

	// ����
	// 1. ���ھ߱��� �Է��� �����ŭ���� 
	//   - 3, 4 (�Է��� �������, �ִ� 9����)
	
	// 2. ���̷ο켼���� �÷��̾ �Է��� �����ŭ
	//   - �̶� 1�� �÷��̾ �����ϰ� ������ �÷��̾�� �ڵ����� ����ǰ�
	//	 - ��, �ٸ��÷��̾� ��Ȳ�� �� �� �־����.

	// 3. �ζǹ�ȣ ��÷�� (45 ���� 7)
	//  (�̰� �Է��� ���� ������ŭ, ������ŭ)


	return 0;
}