#include <iostream>
using namespace std;

void main()
{
	// 수도 코드
	// 말을 코드로 바꿀수있는 가장 간단한 표현방식
	// 문법 X (자기 맘대로)

	// 
	// 계산기 만들기
	// 계산기 수도코드
	// 1-1. "num1을 입력주세요" 를 출력한다.
	// 1-2. num1 을 입력받는다.
	// 2-1. "num2을 입력주세요" 를 출력한다.
	// 2-2. num2 을 입력받는다.
	// 3-1. "계산방식을 입력주세요" 를 출력한다.
	// 3-2. 계산방식을 입력받는다.
	// 4. 입력받은 계산방식이
	// 4-1.  0이면 num1 + num2을 출력한다.
	// 4-2.  1이면 num1 - num2을 출력한다.
	// 4-3.  2이면 num1 * num2을 출력한다.
	// 4-4.  3이면 num1 / num2을 출력한다.
	int num1 = 0;
	int num2 = 0;
	int type = 0;


	// 1-1. "num1을 입력주세요" 를 출력한다.
	cout << "num1을 입력주세요" << endl;

	// 1-2. num1 을 입력받는다.
	cin >> num1;

	// 2-1. "num2을 입력주세요" 를 출력한다.
	cout << "num2을 입력주세요" << endl;

	// 2-2. num2 을 입력받는다.
	cin >> num2;

	// 3-1. "계산방식을 입력주세요" 를 출력한다.
	cout << "계산방식을 입력주세요 (0 : +, 1: -, 2 : *, 3: /)" << endl;

	// 3-2. 계산방식을 입력받는다.
	cin >> type;


	// 4. 입력받은 계산방식이
	// 4-1.  0이면 num1 + num2을 출력한다.
	// 4-2.  1이면 num1 - num2을 출력한다.
	// 4-3.  2이면 num1 * num2을 출력한다.
	// 4-4.  3이면 num1 / num2을 출력한다.
	if (type == 0)
	{
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}
	else if (type == 1)
	{
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	}
	else if (type == 2)
	{
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}
	else if (type == 3)
	{
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	}
}