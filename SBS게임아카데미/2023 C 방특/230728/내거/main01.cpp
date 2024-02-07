#include <iostream>
using namespace std;


void Function1(int* card, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << card[i] << endl;
	}
}

struct A{

};

enum eRCP
{
	ROCK,
	SCISSOR,
	PAPER
};

int main() 
{
	// 모든 변수는 값과 주소를 가진다.
	// 포인터
	// - 변수를 선언하면 메모리 값을 기억하는 자료형
	// - int* myPointer = &number;
	// - 메모리 값은 실행할 때 마다 달라진다.
	// - 함수, 동적 할당
	
	float time = 0.1;
	cout << &time << endl;
	cout << &(*(&time)) << endl;
	int number = 3;
	cout << &number << endl;

	int card[5] = { 0, };
	Function1(card, 5);

	int* myPointer = &number;
	//float* a;
	//char* b;
	//bool* c;
	//void* d;
	A* e; //구조체도 가능 enum도 가능

	int* myPointer2 = card;//배열도 포인터임
	cout << *(myPointer2) << endl;
	//배열, 포인터의 상관관계
	// 배열 == 포인터로 봐라 일단.
	cout << "배열, 포인터의 상관관계" << endl;
	int arr[10] = { 0, };
	int* myPointer3 = arr;
	cout << myPointer3 << endl;
	cout << *myPointer3 << endl;
	cout << myPointer3[0] << endl;
	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr + 1) << endl;
	cout << *(myPointer3 + 1) << endl;
	cout << arr[1] << endl;
	
	//여기까지 포인터 기초

	int* myPointer4 = &number;
	float* a;	//==> 주소값
	char* b;	//==> 주소값
	bool* c;	//==> 주소값
	void* d;	//==> 주소값

	//Error발생의 경우 
	// (자료형 불일치)
	// a = myPointer;
	int abc = eRCP::PAPER;
	cout << "확인해보기" << abc << endl;
	// eRCP rcp = 2;

	//강제로 자료형 변환하면 가능하기는 함 (자료형)값;
	//가능은 한데 거의 사용 안함
	a = (float*)myPointer4;
	eRCP rcp = (eRCP)2;

	int myNumber1 = 10 / 3;
	cout << myNumber1 << endl; // 3 출력
	cout << (float*)myNumber1 << endl; // 이건 원래 나오면 안되는데 주소 길이만큼 앞에를 채워줘서 0000000003이런식으로 나온거
	cout << (float)myNumber1 << endl; //얘는 3.0으로 나오지 않은 이유는 그냥 cout이 이쁘게 나타내 준거
	printf("%f", (float)myNumber1);

	float myNumber2 = 10.0 / 3.0;
	cout << myNumber2 << endl; // 3.3333333출력


	return 0;
}