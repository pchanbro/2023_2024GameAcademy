#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 1. 랜덤 뽑기
	// 랜덤사용하기 위한 스텝
	// - #include <time.h> 추가
	// - main 안에
	// - srand(time(NULL));
	// - 추가
	
	srand(time(NULL));

	cout << "Rand() : " << rand() << endl;
	
	// 0 ~ 99
	int myRandom1 = rand() % 100;

	cout << "0 ~ 100 무작위 수 : " << myRandom1 << endl;

	int myRandom2 = rand() % 3 + 5;

	cout << "5 ~ 7 중 무작위 수 : " << myRandom2 << endl;
}