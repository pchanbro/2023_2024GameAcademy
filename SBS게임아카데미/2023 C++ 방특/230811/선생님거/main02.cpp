#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 1. 랜덤 뽑기
	// 랜덤사용하기위한 준비
	//  - #include <time.h> 추가
	//  - main 안에 
	//  - srand(time(NULL)); 
	//  - 추가
	// rand() 함수로 랜덤값을 뽑을 수 있음.


	srand(time(NULL));

	//사용 예시
	cout << "Rand() : " << rand() << endl;

	// 0~99
	int myRandom1 = rand() % 100;
	cout << "myRandom1(0~99) : " << myRandom1 << endl;

	// 5~7
	// 0~2 + 5
	int myRandom2 = rand() % 3 + 5;
	cout << "myRandom1(5~7) : " << myRandom2 << endl;
}