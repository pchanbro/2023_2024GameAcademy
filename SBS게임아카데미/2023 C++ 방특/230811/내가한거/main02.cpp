#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 1. ���� �̱�
	// ��������ϱ� ���� ����
	// - #include <time.h> �߰�
	// - main �ȿ�
	// - srand(time(NULL));
	// - �߰�
	
	srand(time(NULL));

	cout << "Rand() : " << rand() << endl;
	
	// 0 ~ 99
	int myRandom1 = rand() % 100;

	cout << "0 ~ 100 ������ �� : " << myRandom1 << endl;

	int myRandom2 = rand() % 3 + 5;

	cout << "5 ~ 7 �� ������ �� : " << myRandom2 << endl;
}