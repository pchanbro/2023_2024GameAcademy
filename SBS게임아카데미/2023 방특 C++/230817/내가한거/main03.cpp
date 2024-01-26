#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 반복문
	
	// while
	// -> ~~하는동안

	// for
	// -> N번 반복한다.

	// do ~ while(조건)
	// ~내용을 1회 실행하고 이후에 while과 같이 동작(1회 실행하고 조건확인)

	bool isTrigger = true;

	//isTrigger가 true면 아래내용 반복
	while (isTrigger)
	{

		//[입력] input
		int input = 0;
		cin >> input;

		// 입력한 값이 0이면
		if (input == 0)
		{
			//isTrigger 종료
			isTrigger = false;
		}
		//[출력]
		cout << "isTrigger : " << isTrigger << endl;
	}

	isTrigger = false;
	do
	{
		cout << "isTrigger : " << isTrigger << endl;
	} while (isTrigger);

	// 3. 별찍기는 그냥 자료로 보자 
}