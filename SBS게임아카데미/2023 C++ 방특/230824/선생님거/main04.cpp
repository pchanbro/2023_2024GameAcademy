#include <iostream>

using namespace std;

void PlusOne1(int variable)
{
	variable++;
}

void PlusOne2(int& variable)
{
	variable++;
}

void main()
{
	// 함수 2. 

	//a는 4가 안된다.
	int a = 3;
	//PlusOne1(a);
	//(int variable)
	{
		int variable = a;
		variable++;
		//cout << "varibale : " << variable << endl;
	}
	cout << "a : " << a << endl;

	int b = 3;
	//PlusOne2(b);
	//(int& variable)
	{
		//& => 영혼
		int& variable = b;
		variable++;
	}
	cout << "b : " << b << endl;


}