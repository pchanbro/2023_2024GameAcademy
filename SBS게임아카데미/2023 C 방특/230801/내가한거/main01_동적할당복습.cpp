#include <iostream>
using namespace std;

void myFunction1(int* number)
{
	(*number)++;
}

void myFunction2(int& number)
{
	number++;
}

void myFunction3(int number)
{
	number++;
}

int main()
{
	//동적할당

	//변수 선언
	int number;
	int input;

	// 컴퓨터 내부에서 메모리 할당.
	// 메모리 -> RAM에 합니다.
	// 메모리 (Stack, Heap)
	// number, input
	// 정적메모리 -> Stack
	// 동적메모리 -> Heap
	// Stack : 빠름, 하지만 저장공간이 작음.
	// Heap : 느림, 저장공간이 RAM 남은 용양 만큼정도

	// 동적할당 -> 동적메모리
	// 동적할당 -> 1. Heap에 쌓기 위함
	// 동적할당 -> 2. 배열길이를 동적으로 만드려고

	//배열 동적할당
	//자료형 변수명 = 값;
	int* myPtr = nullptr; //보통 동적할당을 위한 포인터 변수에는 nullptr을 넣어줌
	//1. 동적할당 (배열의 경우)
	myPtr = new int[10]{}; //여기서 new int[10]{}; 처럼 뒤에 {}를 붙여주면 배열의 모든 요소가 0으로 초기화된다. 만일 {}를 써주지 않으면 배열에 쓰레기값들이 들어간다.
	//myPtr = new int[10];
	int myArr[10] = {};
	//int myArr[10];

	int size = 10;
	// myPtr = new int[size]{}; 가능
	// int myArrr[size]; 불가능

	delete[] myPtr;
	//2. 동적할당 (배열이 아닌 경우)
	int* myVariable = new int();
	(*myVariable) = 3;
	delete myVariable;

	//동적할당 (배열)의 경우에는 배열처럼 사용하면 됨
	myPtr = new int[10]{};
	myPtr[0] = 0;
	myPtr[1] = 0;
	myPtr[2] = 0;
	myPtr[3] = 1;

	cout << myPtr[3] << endl;

	myFunction1(&myPtr[0]);
	myFunction2(myPtr[1]);
	myFunction3(myPtr[2]);

	cout << myPtr[0] << endl;
	cout << myPtr[1] << endl;
	cout << myPtr[2] << endl;


	return 0;
}