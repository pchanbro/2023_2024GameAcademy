#include <iostream>
using namespace std;

int main()
{
	//������
	int number = 3;
	int* myPointer = &number;

	cout << "Number�� �ּҰ� : " << endl;
	cout << &number << endl;
	cout << myPointer << endl;
	cout << *&myPointer << endl;
	cout << &*&number << endl;


	cout << "Number�� �� : " << endl;
	cout << *&number << endl;
	cout << *myPointer << endl;

	// myPointer �ּ�
	cout << "myPointer�� �ּ� : " << endl;
	cout << &myPointer << endl;






	return 0;
}