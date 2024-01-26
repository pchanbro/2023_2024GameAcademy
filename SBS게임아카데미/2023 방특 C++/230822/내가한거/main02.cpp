#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	// ����Ǯ�� 

	// ������
	// 1 ~ 9
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	// �߰�����
	// 1 x 1 = 1	2 x 1 = 2	3 x 1 = 3
	// 1 x 2 = 2	2 x 2 = 4	3 x 2 = 6
	//. 
	// 4 x 1 = 4	5 x 1 = 5	6 x 1 = 6
	// 
	// 7 x 1 = 7	8 x 1 = 8	9 x 1 = 9

	// i => 1,2,3�� ����, 4,5,6�� ����, 7,8,9�� ������ �����ϱ� ���� ����
	for (int i = 0; i < 3; i++)
	{
		// �� �ܸ��� 9�� �ں��ؼ� ��� ���� ����
		for (int j = 0; j < 9; j++)
		{
			// �� �ٿ� 3�ܾ� ������ �ϱ� ���� ����
			for (int k = 0; k < 3; k++)
			{
				int num1 = i * 3 + k + 1 ;
				int num2 = j + 1;
				int result = num1 * num2;
				cout << num1 << " x " << num2 << " = " << result << "\t";

			}
			cout << endl;
		}
		cout << endl;
	}

	// 1 ~ 1000������ ���� �߿��� 2�� ��� 3�� ��� ���ϱ� 6�� ����� ���� 

	// ������ ������ - > for�� ���

	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if(i % 2 == 0 || i % 3 == 0)
		{
			if (i % 6 != 0)
			{
				sum += i;
			}
		}
	}

	cout << "sum : " << sum << endl;


	// �ζǹ�ȣ ������
	// 1 ~ 45���� ���ڸ� �����Ͽ� �� �� ���Ƿ� �ϳ��� 7���� �� ��, �ߺ��Ұ�

	// 1 ~ 45������ ���� ���� �迭�� �����. lotto[45] ��� �����Ѵ�.
	// �迭�� ���´�.
	//  --> ���α׷����� �迭�� ���� ��
	//  --> �迭 �ΰ��� �̾Ƽ� ���� �ٲ۴�. x 100000�� �ݺ�
	// �տ����� 7���� �̴´�.
	// --> lotto[0], lotto[1], lotto[2], lotto[3], lotto[4], lotto[5], lotto[6]

	int lotto[45] = { 0, };
	//�迭 �ʱ�ȭ
	//�迭, for��
	//�迭�� ���� 99%�� for���� ����Ѵ�.

	// 1. �����ϸ鼭 �ʱ�ȭ�ϴ� ��� �̰� ����ó�� ����� �Ѵ�.
	// int lotto[45] = { 0 , };
	// int lotto[45]{};
	// int lotto[45] = {};

	// 2. ���� ���Ŀ� �ٷ� �����ڵ�� �ʱ�ȭ ���ִ� ���
	// for�� ���
	for (int i = 0; i < 45; i++) 
	{
		lotto[i] = i + 1;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << endl;
	}

	// �迭�� ���´�.
	// ���� 2���� swap
	int num1 = 0;
	int num2 = 0;
	int temp = 0;

	for (int i = 0; i < 100000; i++)
	{
		num1 = rand() % 45;
		num2 = rand() % 45;
		temp = lotto[num1];
		lotto[num1] = lotto[num2];
		lotto[num2] = temp;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i] << endl;
	}
}