#include <iostream>
using namespace std;

void main()
{
	// 논리 연산자 추가
	// 
	// && => and
	// 한글로 바꾸면 ~~이고,
	
	// true && true => true
	// true && false => false
	// false && false => false
	
	// || => or
	// 한글로 바꾸면 ~~거나,
	// true || true => true
	// true || false => true
	// false || false => false

	//사용 예시
	int year = 2023;
	int month = 8;

	//year가 1990 이후 *이고*, 8월달이면
	if (1990 < year && month == 8)
	{
		cout << "1990 이후의 8월이다." << endl;
	}

	// 2024년 *이거나* 3월미만의 달이라면
	if (year == 2024 || month <= 3)
	{

	}


}