#include <iostream>
using namespace std;

void main()
{
	// �迭
	
	// �� ���� �������� ������ �����ϰ� ���� �� �����

	int num1;
	int num2;
	int num3;
	//�̰� ��ſ�
	int num[3];
	//�̰� �����

	// ���� ������ �ʱ�ȭ��
	int variable1(0);
	int variable2 = 0;
	int variable3;
	variable3 = 0;

	// �迭�� �ʱ�ȭ 
	int arr1[10] { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr3[10]{ 1,2,3,4, }; // �̷��� �ϸ� ������ ���� 0���� ��
	int arr4[10];
	arr4[0] = 0;
	arr4[1] = 1;
	arr4[2] = 2;

	//�迭�� for���̶� �׻� ���̴ٴ�.
	for (int i = 0; i < 10; i++)
	{
		arr4[i] = i;
	}
}