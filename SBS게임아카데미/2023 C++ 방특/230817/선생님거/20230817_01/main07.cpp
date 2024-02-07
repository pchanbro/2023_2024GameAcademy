#include <iostream>
using namespace std;

void main()
{
	//배열!!

	//배열이란
	// 한번에 여러변수를 선언하고 싶을때 사용합니다.

	int num1;
	int num2;
	int num3;
	//이거대신
	int num[3];

	// 배열의 초기화
	// 원래변수의 초기화
	int variable1(0);
	int variable2 = 0;
	int varibale3;
	varibale3 = 0;

	int arr1[10]{};
	int arr2[10] = {};
	int arr3[10];
	arr3[0] = 0;
	arr3[1] = 1;
	arr3[2] = 3;


	//배열은 for문이랑 항상 같이다님.
	for (int i = 0; i < 10; i++)
	{
		arr3[i] = i;
	}

}