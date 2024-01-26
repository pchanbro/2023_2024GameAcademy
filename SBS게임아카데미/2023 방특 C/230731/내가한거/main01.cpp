#include <iostream>
using namespace std;

int main()
{
	//포인터
	int number = 3;
	int* myPointer = &number;

	//myPointer의 주소를 얻는 방법
	cout << &myPointer << endl; //myPointer의 주소다. &(&number)그니까 number의 주소의 주소라고도 할 수 있지만 &(&number)로는 구할 수 없다 오류난다.
	cout << &number << endl; //number의 주소
	cout << myPointer << endl; //myPointer의 값
	cout << number << endl; //number의 값
	cout << *myPointer << endl; //myPointer의 값이 나타내는 주소에 있는 값

	return 0;
}