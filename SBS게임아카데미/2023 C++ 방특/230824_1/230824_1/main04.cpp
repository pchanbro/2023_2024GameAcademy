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
	// �Լ� 2

	int a = 3;
	//PlusOne(a);
	//(int variable)
	{
		int variable = a;
		variable++;
		cout << "variable : " << variable << endl;
	} //a�� 4�� ���� �ʴ´�.

	cout << "a : " << a << endl;

	int b = 3;
	//PlusOne2(b);
	//(int& variable) 
	{	
		int& variable = b; //& �־��ذŸ� ��ȥ�� �����Ѵٰ� �����ϸ� �ȴ�
		variable++;
		cout << "variable : " << variable << endl;
	}
	cout << "b : " << b << endl;
}