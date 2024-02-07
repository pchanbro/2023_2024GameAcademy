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
	// 포인터
	// - 변수를 선언하면 메모리 값을 기억하는 자료형
	// - int* myPointer = &number;
	// - 함수, 동적 할당
	
	float time = 0.1;
	cout << &time << endl;
	cout << &(*(&time)) << endl;
	int number = 3;
	cout << &number << endl;

	int card[5] = { 0, };

	int* myPointer = &number;

	int* myPointer2 = card;
	cout << *(myPointer2) << endl;

	//배열, 포인터의 상관관계
	//배열 == 포인터 
	cout << "배열, 포인터의 상관관계" << endl;
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

	//포인터 기초


	int* myPointer4 = &number;
	float* a;	//==> 주소값
	char* b;	//==> 주소값
	bool* c;	//==> 주소값
	void* d;	//==> 주소값

	// 강제로 자료형을 변환시켜주겠다 (자료형)값;
	eRCP myRcp = (eRCP)2;
	// Error (자료형이 일치하지않음)
	// a = myPointer4;
	// int a = eRCP::PAPER;
	// eRCP rcp = 2;
	
	int myNumber1 = 10 / 3;
	cout << myNumber1 << endl;	//3
	float myNumber2 = 10.0 / 3.0;
	cout << (int)myNumber2 << endl;	//3.3333

	//가능은한데 거의 사용안함.
	a = (float*)myPointer4;
	cout << *a << endl;

	cout << &myPointer4 << endl;

	return 0;
}