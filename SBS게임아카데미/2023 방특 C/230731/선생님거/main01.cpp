#include <iostream>
using namespace std;

int main()
{
	//포인터
	int number = 3;
	int* myPointer = &number;

	cout << "Number의 주소값 : " << endl;
	cout << &number << endl;
	cout << myPointer << endl;
	cout << *&myPointer << endl;
	cout << &*&number << endl;


	cout << "Number의 값 : " << endl;
	cout << *&number << endl;
	cout << *myPointer << endl;

	// myPointer 주소
	cout << "myPointer의 주소 : " << endl;
	cout << &myPointer << endl;






	return 0;
}