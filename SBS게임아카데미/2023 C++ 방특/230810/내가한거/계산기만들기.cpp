#include <iostream>
using namespace std;

void main()
{
	//-------------------------------------
	// 1. 미니 계산기 (num1 + num2 = result)
	//-------------------------------------
	//cout << num1 << " + " << num2 << " = " << result << endl; //이런식으로 나오게
	// 
	//result = num1 + num2;

	//cout << num1 << " + " << num2 << " = " << result << endl;

	//-------------------------------------
	// 계산기 만들기.
	
	// +++ 4. 정수타입 계산기, 실수타입 계산기를 선택해주세요. (0: 정수타입 계산기, 1: 실수타입 계산기)
	// 5. 결과 출력

	

	int num1;
	int num2;
	int calType;
	int varType;
	int result;

	cout << "첫번째 수를 입력해주세요 : ";
	// 첫번째 수 입력
	cin >> num1;
	
	cout << "두번째 수를 입력해주세요 : ";
	// 두번째 수를 입력
	cin >> num2;

	cout << "첫번째 수 : " << num1 << endl;
	cout << "두번째 수 : " << num2 << endl;

	// 계산 타입을 입력 (0 : +, 1 : -, 2 : *, 3 : /)
	cout << "계산 타입을 선택해주세요(0 : +, 1 : -, 2 : *, 3 : /) : ";
	cin >> calType;

	// 변수 타입을 입력
	cout << "정수형인지 실수형인지 선택하세요(0 : 정수타입 계산기, 1: 실수타입 계산기) : ";
	cin >> varType;

	// 계산 타입을 정수형으로 선택했다면
	if (varType == 0)
	{
		cout << "정수타입 계산기를 선택하셨습니다. " << endl;

		// 변수 타입을 + 로 선택했다면
		if (calType == 0)
		{
			cout << " + 를 선택하셨습니다." << endl;
			result = num1 + num2;
			cout << " + 의 결과 : " << result << endl;
		}
		// 그렇지 않고 변수 타입을 - 로 선택했다면
		else if (calType == 1)
		{
			cout << " - 를 선택하셨습니다." << endl;
			result = num1 - num2;
			cout << " - 의 결과 : " << result << endl;
		}
		// 그렇지 않고 변수 타입을 * 로 선택했다면
		else if (calType == 2)
		{
			cout << " * 를 선택하셨습니다." << endl;
			result = num1 * num2;
			cout << " * 의 결과 : " << result << endl;
		}
		// 그렇지 않고 변수 타입을 / 로 선택했다면
		else if (calType == 3)
		{
			cout << " / 를 선택하셨습니다." << endl;
			result = num1 / num2;
			cout << " / 의 결과 : " << result << endl;
		}
		// 변수 타입 선택 시 위의 어떠한 경우에도 포함되지 않는다면
		else
		{
			cout << "계산 타입을 잘못 선택하셨습니다." << endl;
		}
	}
	// 그렇지 않고 계산 타입을 실수형으로 선택했다면
	else if (varType == 1)
	{
		cout << "실수타입 계산기를 선택하셨습니다. " << endl;
		// 실수 타입 계산을 선택함으로써 변수의 타입 변환
		float fnum1 = (float)num1;
		float fnum2 = (float)num2;
		float fresult;

		// 변수 타입을 + 로 선택했다면
		if (calType == 0)
		{
			cout << " + 를 선택하셨습니다." << endl;
			fresult = fnum1 + fnum2;
			cout << " + 의 결과 : " << fresult << endl;
		}
		// 그렇지 않고 변수 타입을 - 로 선택했다면
		else if (calType == 1)
		{
			cout << " - 를 선택하셨습니다." << endl;
			fresult = fnum1 - fnum2;
			cout << " - 의 결과 : " << fresult << endl;
		}
		// 그렇지 않고 변수 타입을 * 로 선택했다면
		else if (calType == 2)
		{
			cout << " * 를 선택하셨습니다." << endl;
			fresult = fnum1 * fnum2;
			cout << " * 의 결과 : " << fresult << endl;
		}
		// 그렇지 않고 변수 타입을 / 로 선택했다면
		else if (calType == 3)
		{
			cout << " / 를 선택하셨습니다." << endl;
			fresult = fnum1 / fnum2;
			cout << " / 의 결과 : " << fresult << endl;
		}
		// 위의 어떠한 경우에도 포함되지 않는다면
		else
		{
			cout << "계산 타입을 잘못 선택하셨습니다." << endl;
		}
	}
	// 계산 타입 선택 시 위의 어떠한 경우에도 포함되지 않는다면
	else
	{
		cout << "변수 타입을 잘못 선택하셨습니다." << endl;
	}
}