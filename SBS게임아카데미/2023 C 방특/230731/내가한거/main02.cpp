#include <iostream>
using namespace std;

//Call By Reference (�Ű������� & �־��ذ�)
//Call By Address (X)
void plusOneByReference1(int& number)
{
	number++;
}

//Call By Reference (Pointer)
//Call By Address
void plusOneByReference2(int* number)
{
	(*number)++;
}

//Call By Value
void plusOneByValue(int number)
{
	number++;
}

int main()
{
	//������ Ȱ��


	//�Լ� �Ű������� ���
	int a = 3;
	plusOneByReference1(a);
	cout << "a �� " << a << endl;

	int b = 3;
	plusOneByValue(b);
	cout << "b �� " << b << endl;

	int c = 3;
	plusOneByReference2(&c); //�����δ� �̰� ���� ���� ����.
	cout << "c �� " << c << endl;


	return 0;
}