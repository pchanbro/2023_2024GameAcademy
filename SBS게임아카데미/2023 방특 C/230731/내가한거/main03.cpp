#include <iostream>
using namespace std;


int main()
{

	//동적 할당

	//배열 == 포인터
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* myPointer = arr;
	//myPointer = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9} 위에서 포인터로 선언하고 난 이후에 이렇게 변경은 못한다.
	//myPointer[0] = 1; 이런식으로 값 하나씩 바꿔야함 바꾸려면

	cout << "arr[0] 값 보기 : " << endl;
	cout << arr[0] << endl;
	cout << *(myPointer + 0) << endl;
	cout << myPointer[0] << endl;

	cout << "arr[1] 값 보기 : " << endl;
	cout << arr[1] << endl;
	cout << *(myPointer + 1) << endl;
	cout << myPointer[1] << endl;

	// 정적할당
	// ctrl + F5 를 누르는 컴파일 시점에 크기가 결정된다.
	int arr1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	// 동적할당
	// 프로그램이 실행되는 런타임 시점에 크기가 변한다.

	// c언어에서의 동적할당
	int size = 4;
	int* arr2 = (int*)malloc(sizeof(int) * size); // int가 4바이트 이고 4바이트의 짜리를 4개 할당하려고 하니 16바이트 할당
	//int arr3[4]; 와 같다
	// malloc - 메모리 allocate
	//		 - 메모리를 할당한다. (뒤의 사이즈 크기만큼)
	arr2[0] = 0;
	arr2[1] = 1;
	arr2[2] = 2;
	arr2[3] = 3;
	cout << "arr2 값 보기" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << endl;
	}

	// c++ 에서의 동적할당
	// new, delete
	// 동적할당을 쓰는 곳
	// 플레이어 인원에 따라
	// 몬스터 수에 따라

	int size1;
	cout << "생성할 배열크기를 입력해주세요." << endl;;
	cin >> size1;
	int* myPointer2 = new int[size1];
	// 만약 int myArr[size1]; 이렇게 배열을 선언하면 오류 발생 []안에는 변수가 올 수 없다.
	// 무조건 숫자를 넣어줘야 함
	// 변수 넣어주고 싶으면 위처럼 동적할당 하는식으로 해야함.

	delete[] myPointer2;
	// delete 메모리 해제 여기선 배열을 해제해줘야 하니 delete[]처럼 [] 붙여줬음
	// 다 사용하고 나면 할당한 메모리를 해제해 줘야 한다. 해제를 안해주고 계속 이렇게 메모리 사용량이 늘어나면 강제 종료될 수 있다.


	// 컴퓨터 부품 RAM : 16GB(다 다름)
	// 
	// 자료형마다 크기가 정해져 있다.
	// int -> 4Byte
	// float -> 4Byte
	// char -> 1Byte
	// bool -> 1Byte
	// 포인터 -> 변수형에 상관없이 주소이기 때문에 4Byte

	// Bit	- 0,1	0 ~ 1
	// Byte - 8bit	0 ~ 255
	// KB	- 
	// MB	-
	// GB	-

	//c문법 
	int* myPointer3 = (int*)malloc(sizeof(int) * size1); //할당
	free(myPointer3); //해제 
	
	// 숙제
	// 1. 숫자야구를 입력한 사이즈 만큼으로(최대 9)
	
	// 2. 하이로우세븐 플레이어 수를 입렵 수만큼
	//	- 이 때 1번 플레이어만 조작하고 나머지 플레이어는 자동으로 진행되게
	//	- 단, 다른 플레이어 현황은 볼 수 있어야함.

	// 3. 로또번호 추첨기 (1 ~ 45에서 7개 뽑기를) 두 개 입력하여 1 ~ 첫번째 수 범위에서 두번째 수 만큼의 개수 출력

	cout << "지금부터 용량이 커지기 시작합니다." << endl;
	while (true)
	{
		new int[size1]; //반복문 안에 있으니 계속해서 메모리 할당하는 작업을 진행할 것임, 메모리의 위치는 컴퓨터가 알아서 안겹치게 만들어 줄것임.
		//할당 하고 해제를 안해줘서 메모리에 많이 쌓이면 자동으로 종료됨
	}

	return 0;
}