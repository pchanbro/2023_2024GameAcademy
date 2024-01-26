#include <iostream>
using namespace std;

void main()
{
	//사칙 연산
	int num1 = 20;
	int num2 = 7;
	int plusResult = num1 + num2;
	int minusResult = num1 - num2;
	int mulResult = num1 * num2;
	int divResult = num1 / num2;

	cout << num1 << " + " << num2 << " = " << plusResult << endl;
	cout << num1 << " - " << num2 << " = " << minusResult << endl;
	cout << num1 << " x " << num2 << " = " << mulResult << endl;
	cout << num1 << " / " << num2 << " = " << divResult << endl;

	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; //나눈셈의 나머지, float(실수형)의 경우에는 사용 불가

	// int -> 정수 자료형, 정수밖에 못들어감
}