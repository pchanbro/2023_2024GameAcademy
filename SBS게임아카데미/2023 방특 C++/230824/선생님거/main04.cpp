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
	// �Լ� 2. 

	//a�� 4�� �ȵȴ�.
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
		//& => ��ȥ
		int& variable = b;
		variable++;
	}
	cout << "b : " << b << endl;


}