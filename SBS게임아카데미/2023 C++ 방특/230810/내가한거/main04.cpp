#include <iostream>
using namespace std;

void main()
{
	//��Ģ ����
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

	cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; //�������� ������, float(�Ǽ���)�� ��쿡�� ��� �Ұ�

	// int -> ���� �ڷ���, �����ۿ� ����
}