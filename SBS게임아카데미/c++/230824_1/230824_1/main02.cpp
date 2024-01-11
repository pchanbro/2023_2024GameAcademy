#include <iostream>

using namespace std;
int _myVariable = 0;

void main()
{
	// 1. 전역변수
	// 삭제되지 않는 변수
	// 
	// 사용법


	// 변수는 기본적으로 자신이 만들어진 중괄호를 만나면 메모리가 삭제된다.

	int a = 0;

	for (int i = 0; i < 2; i++)
	{
		int myVariable = 0;
	}

	//문법 에러!
	//cout << "myVariable : " << myVariable << endl;
}