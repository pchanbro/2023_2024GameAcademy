#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 1. ���� �̱�
	// ��������ϱ����� �غ�
	//  - #include <time.h> �߰�
	//  - main �ȿ� 
	//  - srand(time(NULL)); 
	//  - �߰�
	// rand() �Լ��� �������� ���� �� ����.


	srand(time(NULL));

	//��� ����
	cout << "Rand() : " << rand() << endl;

	// 0~99
	int myRandom1 = rand() % 100;
	cout << "myRandom1(0~99) : " << myRandom1 << endl;

	// 5~7
	// 0~2 + 5
	int myRandom2 = rand() % 3 + 5;
	cout << "myRandom1(5~7) : " << myRandom2 << endl;
}