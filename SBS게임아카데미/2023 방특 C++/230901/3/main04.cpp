#include <iostream>
#include <vector>

using namespace std;

void main()
{
	//자료구조
	// - 배열
	// - vector

	// 여러개의 데이터를 관리하는 구조
	// ==> 자료구조

	//자료구조
	// 
	//기본적인 내용 3개
	// - 추가
	// - 조회
	// - 삭제

	//vector의 삭제
	// 2가지
	// 1가지 (프로그램에 부하가 적은)

	vector<int> myVec;
	//추가
	for (int i = 0; i < 10; i++)
	{
		myVec.push_back(i);
	}

	//조회
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}
	cout << endl;

	//삭제
	//마지막거만 삭제가 가능함.
	myVec.pop_back();
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}


	//다마고치
	//스네이크게임
	//다른게임
}