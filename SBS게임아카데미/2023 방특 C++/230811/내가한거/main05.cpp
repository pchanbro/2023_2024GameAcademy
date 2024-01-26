#include <iostream>
using namespace std;

void main()
{

	// 논리 연산자
	
	// && => and
	// true && true => true
	// true && false => false
	// false && false => false
	
	// || => and
	// true || true => true
	// ture || false => true
	// false || false => false
	
	// 사용 예시
	int year = 2023;
	int month = 8;

	// year가 1990 이후고, 8월달이면
	if (1990 < year && month == 8)
	{
		cout << "1990 이후의 8월이다. " << endl;
	}

	// 2024년이거나 3월 미만의 달이라면
	if (year == 2024 || month < 3)
	{
		
	}
}