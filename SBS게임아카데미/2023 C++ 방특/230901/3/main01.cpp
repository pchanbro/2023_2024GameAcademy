#include <iostream>
#include <Windows.h>

using namespace std;

class MainGame
{

};
void main()
{
	//포인터 - 배열 동적할당
	
	int* ptrArr = nullptr;


	//포인터는 * 연산자를 사용할수있다.
	//포인터가 들고있는 주소로 이동하여 값을 참조한다.
	//다만 없는 주소라면, 에러가 뜬다.
	//cout << *ptrArr << endl;


	//동적할당
	int* myNumber = new int(3);
	delete myNumber;
	myNumber = nullptr;

	MainGame* mainGame = new MainGame();
	delete mainGame;
	mainGame = nullptr;

	//동적할당 - 배열
	int input;
	cout << "사용자 수를입력해주세요 : ";
	cin >> input;
	//ERROR
	//int arr[input] = { 0, };
	//런타임도중에 결정된 길이만큼 배열생성이 불가능하다.
	//기존에 우리가 알던 정적배열은 길이가 자유롭지 않다.

	int* ptrArr = new int[input] {0, };
	//new int[배열크기] { 초기화 내용 };

	//포인터 = 배열
	for (int i = 0; i < input; i++)
	{
		ptrArr[i] = i;
	}

	//배열 = 포인터
	//배열도 포인터 연산자를 사용할수있다.
	int arr[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		*(arr + i) = i;
	}

	//동적할당된 내용은 모두 삭제
	delete [] ptrArr;
}