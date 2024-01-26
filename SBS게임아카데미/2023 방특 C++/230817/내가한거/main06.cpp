#include <iostream>
using namespace std;

void main()
{
	// 배열
	
	// 한 번에 여러개의 변수를 선언하고 싶을 떄 사용함

	int num1;
	int num2;
	int num3;
	//이거 대신에
	int num[3];
	//이걸 사용함

	// 원래 변수의 초기화는
	int variable1(0);
	int variable2 = 0;
	int variable3;
	variable3 = 0;

	// 배열의 초기화 
	int arr1[10] { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10]{ 1,2,3,4, }; // 이렇게 하면 나머지 값은 0으로 들어감
	int arr4[10];
	arr4[0] = 0;
	arr4[1] = 1;
	arr4[2] = 2;

	//배열은 for문이랑 항상 같이다님.
	for (int i = 0; i < 10; i++)
	{
		arr4[i] = i;
	}
}