#include <iostream>
using namespace std;

void main()
{
	// 논리 연산
	// ==, !=, >, <, >=, <=

	int num1 = 1;
	int num2 = 2;

	// 논리 자료형 (TRUE, FALSE) -> bool
	bool result1 = 1 == 2;	// 1과 2가 같냐 result 엔 false가 들어간다.
	bool result2 = 1 != 2;	// 1과 2가 다르냐 result2 엔 true가 들어간다.
	bool result3 = 1 > 2;	// 1이 2보다 크냐
	bool result4 = 1 < 2;	// 1이 2보다 작냐
	bool result5 = 1 >= 2;	// 1이 2보다 크거나 같냐
	bool result6 = 1 <= 2;	// 1이 2보다 작거나 같냐

	cout << num1 << " == " << num2 << " = " << result1 << endl;
	cout << num1 << " != " << num2 << " != " << result2 << endl;
	cout << num1 << " > " << num2 << " > " << result3 << endl;
	cout << num1 << " < " << num2 << " < " << result4 << endl;
	cout << num1 << " >= " << num2 << " >= " << result5 << endl;
	cout << num1 << " <= " << num2 << " <= " << result6 << endl;

	// 조건문, 제어문 (제일 많이 쓰이는 문법)
	// if ( 조건1 )
	// {
	//		조건이 맞으면
	//		실행될 내용
	// }
	// else if ( 조건2 )
	// {
	//		조건1이 맞지 않고 조건2가 맞으면
	//		실행될 내용
	// }
	// else
	// {
	//		위의 조건이 모두 맞지 않으면
	//		실행될 내용
	// }
	

	// 만약 num1이 num2보다 작으면
	if (num1 < num2)
	{
		//이내용 출력
		cout << "num1이 더 작습니다. " << endl;
	}
	// 그렇지 않고, num1이 num2보다 크면
	else if (num1 > num2)
	{
		//이내용 출력
		cout << "num1이 더 큽니다. " << endl;
	}
	// 그렇지 않고 num1 과 num2가 같으면
	else if (num1 == num2)
	{
		//이내용 출력
		cout << "num1과 num2는 같습니다. " << endl;
	}
	// 그렇지도 않으면
	else
	{
		//이내용 출력
		cout << "이런 경우는 숫자가 아니라는 거겠지 뭐 " << endl;
	}
}