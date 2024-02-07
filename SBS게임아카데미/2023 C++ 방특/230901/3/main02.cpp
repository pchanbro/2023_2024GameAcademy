#include <iostream>
#include <vector>
using namespace std;

void main()
{
	//2. 벡터 (원리는 나중에)

	//   벡터란? (자료구조)
	// [배열] << !!! 크기가 변할 수 있는 배열
	// 동적 배열 <== [배열 동적할당]

	//int형 배열
	//int arr[100] = {};

	//int형 벡터
	vector<int> myVec;
	myVec.push_back(0);			//myVec[0] = 0;
	myVec.push_back(10);		//myVec[1] = 10;
	myVec.push_back(20);		//myVec[2] = 20;

	//push_back
	//마지막에 값을 추가한다.
	
	//벡터는 시작할때 배열크기는 0이다.

	//배열, for문은 항상 같이다닌다.
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}

	//float형 벡터
	vector<float> myVec2;
	myVec2.push_back(1.5);
	myVec2.push_back(3.2);
	for (int i = 0; i < myVec2.size(); i++)
	{
		cout << "myVec2[i] : " << myVec2[i] << endl;
	}


	//2차원배열 => 벡터로바꾸는방법
	int board[5][5] = { 0, };
	vector<vector<int>> myBoard;
	for (int i = 0; i < 5; i++)
	{
		vector<int> row;
		for (int j = 0; j < 5; j++)
		{
			//myBoard[i][j] => i * 5 + j
			row.push_back(i * 5 + j);
		}
		//myBoard[i] => row
		myBoard.push_back(row);
	}
}