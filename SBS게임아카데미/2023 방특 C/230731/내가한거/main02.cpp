#include <iostream>
using namespace std;

//Call By Reference (매개변수에 & 넣어준것)
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
	//포인터 활용


	//함수 매개변수에 사용
	int a = 3;
	plusOneByReference1(a);
	cout << "a 값 " << a << endl;

	int b = 3;
	plusOneByValue(b);
	cout << "b 값 " << b << endl;

	int c = 3;
	plusOneByReference2(&c); //실제로는 이걸 제일 많이 쓴다.
	cout << "c 값 " << c << endl;


	return 0;
}