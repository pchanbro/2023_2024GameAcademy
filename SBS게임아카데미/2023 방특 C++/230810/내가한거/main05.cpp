#include <iostream>
using namespace std;

void main()
{
	// 출력 입력
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	//입력을 할 땐 오류가 났을지도 모르니 뭔가 입력하라고 안내문을 적어라
	cout << "첫번째 수를 입력해주세요 : ";
	cin >> num1;
	cout << "num1 : " << num1 << endl;

	cout << "두번째 수를 입력해주세요 : ";
	cin >> num2;
	cout << "num2 : " << num2 << endl;

	//-------------------------------------
	// 1. 미니 계산기 (num1 + num2 = result)
	//-------------------------------------
	cout << num1 << " + " << num2 << " = " << result << endl; //이런식으로 나오게

	//-------------------------------------
	// 계산기 만들기
	// 1. 첫번째 수를 입력해주세요.
	// 2. 두번째 수를 입력해주세요.
	// 3. 계산 타입을 입력해주세요 (0 : +, 1 : -, 2 : *, 3 : /)
	// +++ 4. 정수타입 계산기, 실수타입 계산기를 선택해주세요. (0: 정수타입 계산기, 1: 실수타입 계산기)
	// 5. 결과 출력

	result = num1 + num2;

	cout << num1 << " + " << num2 << " = " << result << endl;
}