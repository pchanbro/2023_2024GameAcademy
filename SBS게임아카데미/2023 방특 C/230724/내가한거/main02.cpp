#include <iostream>
using namespace std;

//void 함수명(매개변수)
//함수명은 동사가 좋다
//변수명은 명사가 좋다
void printNumber(int number)
{
	cout << "number : " << number << endl;
}

//봔환형이 있는 함수
int getRandom(int minInclude, int maxExclude)
{
	int number = rand() % (minInclude - maxExclude);
	number += minInclude;

	return number;
}

int setNumber(int number, int toNumber)
{
	number = toNumber;//이렇게 해줘봤자 메인에서 number자리에 넣어준 변수에 들어있는 값은 변하지 않는다. 왜냐하면 여기서 선언해준 number만 바뀌었을 뿐 메인에서의 변수를 바꾸려면 return을 해줘야함
	//혹은 포인터 변수를 사용하면 됨
	//혹은 함수의 인수 자리 위에선 (int number)을 (int& number)로 해주면 됨 레퍼런스!
}

int main()
{
	printNumber(4);
	srand(time(NULL));
	// 7~20
	// rand % 14 + 7
	// min ~ max값을 뽑아온다. getRandom(min, max)
	for (int i = 0; i < 1000; i++)
	{
		int myNum = getRandom(7, 20);
		printNumber(myNum);
	}

	int num = 2;
	//setNumber(num, 6)
	//{
	//	레퍼런스
	//	int& number = num, int toNumber = 6;
	//	number = toNumber;
	//}
	setNumber(num, 6);

	printNumber(num);

	//숙제 숫자야구 숫자 4개로 (최대한 함수 많이 써서)
	

	return 0;
}