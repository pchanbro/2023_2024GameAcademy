#include <iostream>

using namespace std;

void main()
{
	// 1. 포인터 - 배열

	// 저번 시간까지의 포인터의 개념
	//
	// 포인턴
	// -> 4바이트로 이루어진 주소값
	// *, &
	// * => 뒤에오는 변수가 주소값이라고 쳤을때, 해당 값에 접근
	// & => 뒤에오는 변수의 주소값

	int** a = nullptr;
	// => int* 라고 생긴 변수의 주소값

	//nullptr => 주소값이 없음. (할당된 값이 없다.)

	//포인터 = 배열
	int arr[52] = { 0, };
	int* ptr = arr;
	cout << "arr : " << arr << endl;
	cout << "ptr : " << ptr << endl;
	// 위의 두 가지는 완전히 동일

	//1차원 배열은 1차원 포인터와 같고,
	//2차원 배열은 2차원 포인터와 같다.

	for (int i = 0; i < 52; i++)
	{
		arr[i] = i;
	}

	cout << "arr[0]" << arr[0] << endl;
	cout << "arr[1]" << arr[1] << endl;

	cout << "*ptr : " << *ptr << endl;
	cout << "*(ptr + 1) : " << *(ptr + 1) << endl;
	cout << "*(ptr + 2) : " << *(ptr + 2) << endl;

	for (int i = 0; i < 52; i++)
	{
		//밑의 두가지는 동일함
		//cout << "ptr[i] : " << *(ptr + i) << endl;
		cout << "ptr[i] : " << ptr[i] << endl;
	}
}
