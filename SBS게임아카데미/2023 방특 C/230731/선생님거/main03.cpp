#include <iostream>
using namespace std;

int main()
{
	//동적할당

	//배열 == 포인터
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* myPointer = arr;

	cout << arr << endl;
	cout << myPointer << endl;

	cout << "arr[0] 값보기 : " << endl;
	cout << arr[0] << endl;
	cout << *(myPointer + 0) << endl;
	cout << myPointer[0] << endl;

	cout << "arr[1] 값보기 : " << endl;
	cout << arr[1] << endl;
	cout << *(myPointer + 1) << endl;
	cout << myPointer[1] << endl;

	//정적할당
	//Ctrl + F5 를 누르는 컴파일 시점에 크기가 결정된다.
	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//동적할당
	//프로그램이 실행되는 런타임 시점에 크기가 변한다.
	
	//C++ 문법
	//동적할당
	//new, delete
	int size1;
	cout << "생성할 배열크기를 입력해주세요." << endl;
	cin >> size1;
	int* myPointer2 = new int[size1];
	delete[] myPointer2;

	// 컴퓨터부품 RAM : 16GB
	// 
	// 자료형마다 크기가다름
	// int -> 4Byte
	// float -> 4Byte
	// char -> 1Byte 
	// bool -> 1Byte
	// 포인터 -> 4Byte

	// Bit  - 0,1  --> 0 ~ 1
	// Byte - 8Bit --> 0 ~ 255

	//C문법
	//malloc, free
	int* myPointer3 = (int*)malloc(sizeof(int) * size1);
	free(myPointer3);

	// 숙제
	// 1. 숫자야구를 입력한 사이즈만큼으로 
	//   - 3, 4 (입력한 사이즈로, 최대 9까지)
	
	// 2. 하이로우세븐을 플레이어를 입력한 사이즈만큼
	//   - 이때 1번 플레이어만 조작하고 나머지 플레이어는 자동으로 진행되게
	//	 - 단, 다른플레이어 현황은 볼 수 있어야함.

	// 3. 로또번호 추첨기 (45 랜덤 7)
	//  (이걸 입력한 숫자 범위만큼, 갯수만큼)


	return 0;
}