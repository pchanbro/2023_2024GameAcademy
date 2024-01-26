#include <iostream>
using namespace std;

void main()
{
	// 포인터
	// 클래스


	// 프로그래밍 입문할때 가장 큰적이 되는 내용
	// 1. 배열
	// 2. 포인터
	// 3. 클래스


	// 2. 포인터

	// 포인터 란?
	// 메모리 주소 값 (RAM)
	int a = 3;
	cout << a << endl;

	//자료형 변수명 = 값;
	int* aPtr = &a;
	//int* => int형의 포인터 
	//(int형의 주소값을 담을 수 있는 자료형)

	//&a => a의 주소값
	//aPtr ==> a의 주소값 (4바이트)
	cout << "aPtr : " << aPtr << endl;

	// 메모리값의 주소 값 ==> &
	// 주소값의 메모리 값 ==> *
	cout << "A의 값 : " << a << endl;
	cout << "A의 주소 값 : " << &a << endl;
	cout << "aPtr 값 : " << aPtr << endl;
	cout << "aPtr의 메모리 값 : " << *aPtr << endl;

	int** aPtrPtr = &aPtr;

	//포인터의 생김새
	// int*  ==> int라고 생긴애의 주소값
	// int** ==> int*이라고 생긴애의 주소값

	cout << "aPtrPtr의 값 : " << aPtrPtr << endl;
	cout << "*aPtrPtr : " << *aPtrPtr << endl;
	cout << "**aPtrPtr : " << **aPtrPtr << endl;
}