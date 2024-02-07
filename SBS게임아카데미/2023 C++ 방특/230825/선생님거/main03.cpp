#include <iostream>
#define MY_VALUE 3
#define MY_MACRO << endl
#define BINGO_SIZE 5
using namespace std;


void main()
{
	//3. 전처리기 (매크로)
	// Ctrl + C, Ctrl + V 효과
	//Example1.
	cout << MY_VALUE << endl;

	//MY_VALUE => 3
	cout << 3 << endl;

	//Example2.
	cout << "Test" MY_MACRO;
	//MY_MACRO => MY_MACRO << endl
	//cout << "Test" << endl;

	// 주로 사용하는 곳
	// 상수
	int bingo[BINGO_SIZE * BINGO_SIZE]{};
	// => 
	//int bingo[25];
}