#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

void MyFunction1(int* number)
{
	(*number)++;
}

void MyFunction2(int& number)
{
	number++;
}

void MyFunction3(int number)
{
	number++;
}

int main()
{
	// 동적할당 
	
	// 변수 선언
	int number;
	int input;

	// 컴퓨터 내부에서 메모리 할당.
	// 메모리 -> RAM 에 합니다.
	// 메모리 (Stack, Heap)
	// number, input
	// 정적메모리 -> Stack
	// 동적메모리 -> Heap
	// Stack : 빨라요. 근데 저장공간이 작아요.
	// Heap : 느리고, 저장공간이 RAM 남은 용량만큼

	//동적할당 -> 동적메모리
	//동적할당 ->  1. Heap에다가 쌓을라고
	//			  2. 배열길이를 동적으로 만드려고

	//배열 동적할당
	//자료형 변수명 = 값;
	int* myPtr = nullptr;

	//1. 동적할당 (배열인 경우)
	myPtr = new int[10]{};
	//myPtr = new int[10];
	int myArr[10] = {};
	//int myArr[10];

	int size = 10;
	// 가능
	// myPtr = new int[size]{};
	// 불가능
	// int myArr[size];

	delete[] myPtr;

	//2. 동적할당 (배열이 아닌 경우)
	// - Heap메모리에 넣을라고
	int* myVariable = new int();
	(*myVariable) = 3;
	delete myVariable;


	//동적할당 (배열)의 경우에는 배열처럼 사용하면 됨.
	myPtr = new int[10]{};
	myPtr[0] = 0;
	myPtr[1] = 0;
	myPtr[2] = 0;

	cout << myPtr[3] << endl;

	MyFunction1(&myPtr[0]);
	MyFunction2(myPtr[1]);
	MyFunction3(myPtr[2]);


	cout << myPtr[0] << endl;
	cout << myPtr[1] << endl;
	cout << myPtr[2] << endl;


	// 행맨
	char hangManAnswer[3][250] = {
		"hangman",
		"education",
		"one"
	};
	//strcpy(hangManAnswer[0], "hangman");
	//strcpy(hangManAnswer[1], "education");
	//strcpy(hangManAnswer[2], "one");

	cout << "? ? ?" << endl;
	char input1;
	cin >> input1;
	cout << "? n ?" << endl;
	cout << "남은 기회 : 7" << endl;

	return 0;
}