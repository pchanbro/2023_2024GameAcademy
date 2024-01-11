#include <iostream>

using namespace std;

void PlusOne(int variable)
{
	variable++;
	cout << "variable : " << variable << endl;
}

void PlusOne2(int& variable)
{
	variable++;
	cout << "variable : " << variable << endl;
}


void main()
{
	// 함수 2

	int a = 3;
	//PlusOne(a);
	//(int variable)
	{
		int variable = a;
		variable++;
		cout << "variable : " << variable << endl;
	} //a는 4가 되지 않는다.

	cout << "a : " << a << endl;

	int b = 3;
	//PlusOne2(b);
	//(int& variable) 
	{	
		int& variable = b; //& 넣어준거를 영혼을 공유한다고 생각하면 된다
		variable++;
		cout << "variable : " << variable << endl;
	}
	cout << "b : " << b << endl;
}