#include <iostream>
#include <time.h>
using namespace std;

//void 함수명(매게변수)
void printNumber(int number)
{
	cout << "number : " << number << endl;
}

//반환형이 있는함수
int getRandom(int minInclude, int maxExclude)
{
	int number = rand() % (maxExclude - minInclude);
	number += minInclude;

	return number;
}

void setNumber(int& number, int toNumber)
{
	number = toNumber;
}


int main()
{
	//함수
	srand(time(NULL));
	// 7~19 --> 0~12 + 7
	// min~max 뽑아온다. getRandom(min, max)

	/*for (int i = 0; i < 1000; i++)
	{
		int myNum = getRandom(7, 20);
		printNumber(myNum);
	}*/

	int num = 2;
	//setNumber(num, 6);
	//{
	//  // 레퍼런스
	//	int& number = num, int toNumber = 6;
	//	number = toNumber;
	//}
	setNumber(num, 6);

	printNumber(num);

	// 숫자야구 4개 (최대한 함수많이써서) 

	return 0;
}