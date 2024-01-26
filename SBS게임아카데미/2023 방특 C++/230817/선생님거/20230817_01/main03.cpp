#include <iostream>
using namespace std;
void main()
{
	//반복문 
	
	//while
	// -> ~조건~ 하는동안
	
	//for
	// -> N번 반복한다.

	//do ~ while(조건)
	// ~ 내용을 1회실행하고 while문처럼 동작한다.

	bool isTrigger = false;

	//isTrigger가 true면 아래내용 반복
	while (isTrigger)
	{
		//[입력] input
		int input = 0;
		cin >> input;

		//입력한값이 0 이면
		if (input == 0)
		{
			//isTrigger 종료
			isTrigger = false;
		}
		//[출력]
		cout << "isTrigger : " << isTrigger << endl;
	}


	//
	// do while은 while문을 무조건 한번은 실행시킨다라는 특징을 가지고 있음.
	//
	isTrigger = false;
	do
	{
		cout << "isTrigger : " << isTrigger << endl;
	} while (isTrigger);

}