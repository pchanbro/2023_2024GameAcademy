#include <iostream>
#include <time.h>
using namespace std;

void generateNum(int* randNum)
{
	srand(time(NULL));

	int num = 1;

	// ù° �ڸ� �� ����
	randNum[0] = rand() % 9 + 1;

	// �ι�° ���� �ڸ� �� ����
	while(num < 4)
	{
		//2 
		randNum[num] = rand() % 10;
		int curNum = num;
		// ���� �ߺ��� �ȴٸ� �ٽ� �����ǵ��� �Ѵ�.
		for (int i = 0; i < curNum; i++)
		{
			if (randNum[i] == randNum[num])
			{
				break;
			}
			else if (i == curNum - 1)
			{
				num++;
			}
		}
	}
}

void printNum(int* arr)
{
	for (int i = 0; i < 4 ; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}

void main()
{
	// ����1.
	// ���ھ߱�

	// �� �� ���ڰ� ��ġ�� �ʵ��� 4�ڸ��� ����
	// �� ù ���ڴ� 0 �Ұ�
	// ������� ���� �ݺ�
	//		����ڰ� ��ġ�� �ʴ� 4�ڸ� ���� �Է�
	//		������ ���� ��� 2593 �� �� ����ڰ� 2307�� �Է��ϸ� 1strike 1ball
	// 4strike�� �Ǹ� ����
	// ��������� 4strike�� ���� ����

	int randNum[4] = { 0, };

	printNum(randNum);
	// ��ǻ�Ͱ� ������ ���ڸ� �̴´�.
	generateNum(randNum);
	printNum(randNum);

}