#include <iostream>
#include <vector>

using namespace std;

void main()
{
	//�ڷᱸ��
	// - �迭
	// - vector

	// �������� �����͸� �����ϴ� ����
	// ==> �ڷᱸ��

	//�ڷᱸ��
	// 
	//�⺻���� ���� 3��
	// - �߰�
	// - ��ȸ
	// - ����

	//vector�� ����
	// 2����
	// 1���� (���α׷��� ���ϰ� ����)

	vector<int> myVec;
	//�߰�
	for (int i = 0; i < 10; i++)
	{
		myVec.push_back(i);
	}

	//��ȸ
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}
	cout << endl;

	//����
	//�������Ÿ� ������ ������.
	myVec.pop_back();
	for (int i = 0; i < myVec.size(); i++)
	{
		cout << "myVec[i] : " << myVec[i] << endl;
	}


	//�ٸ���ġ
	//������ũ����
	//�ٸ�����
}