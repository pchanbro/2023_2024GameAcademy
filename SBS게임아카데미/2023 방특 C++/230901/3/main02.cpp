#include <iostream>
#include <vector>
using namespace std;

void main()
{
	//2. ���� (������ ���߿�)

	//   ���Ͷ�? (�ڷᱸ��)
	// [�迭] << !!! ũ�Ⱑ ���� �� �ִ� �迭
	// ���� �迭 <== [�迭 �����Ҵ�]

	//int�� �迭
	//int arr[100] = {};

	//int�� ����
	vector<int> myVec;
	myVec.push_back(0);			//myVec[0] = 0;
	myVec.push_back(10);		//myVec[1] = 10;
	myVec.push_back(20);		//myVec[2] = 20;

	//push_back
	//�������� ���� �߰��Ѵ�.
	
	//���ʹ� �����Ҷ� �迭ũ��� 0�̴�.

	//�迭, for���� �׻� ���̴ٴѴ�.
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}

	//float�� ����
	vector<float> myVec2;
	myVec2.push_back(1.5);
	myVec2.push_back(3.2);
	for (int i = 0; i < myVec2.size(); i++)
	{
		cout << "myVec2[i] : " << myVec2[i] << endl;
	}


	//2�����迭 => ���ͷιٲٴ¹��
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