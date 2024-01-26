#include <iostream>
using namespace std;

//Call By Reference
//Call By Address (X)
void PlusOneByReference1(int& number)
{
	number++;
}

//Call By Reference (Pointer)
//Call By Address
void PlusOneByReference2(int* number)
{
	(*number)++;
}


//Call By Value
void PlusOneByValue(int number)
{
	number++;
}

int main()
{
	//������ Ȱ��


	// �Լ� �ŰԺ����� ���
	int a = 3;
	PlusOneByReference1(a);
	cout << "a �� : " << endl;
	cout << a << endl;

	int b = 3;
	PlusOneByValue(b);
	cout << "b �� : " << endl;
	cout << b << endl;


	int c = 3;
	PlusOneByReference2(&c);
	cout << "c �� : " << endl;
	cout << c << endl;




	return 0;
}