#include <iostream>
#include <time.h>
using namespace std;

void generateNum(int* lottoNum)
{
	for (int i = 0; i < 45; i++)
	{
		lottoNum[i] = i + 1;
	}
}

void main()
{
	// 3. �ζǹ�ȣ ������ 
	// 1 ~ 45 ���ڰ� ���� ��, 7���� ���� ���� ����Ѵ�.(�̶� ���ڰ� ��ġ�� �ȵȴ�.)

	// ��ȣ�� �����Ѵ�.(�迭 ���)
	// �ݺ�
	//		������ ��ȣ �� 1���� �����Ͽ� �ٸ� �迭�� �߰��Ѵ�.
	//		���� ���õ� ��ȣ �� �̹� �迭�� �� �ִٸ� �ٽ� �����Ѵ�.
	srand(time(NULL));
	int lottoNum[45] = { 0, };
	int choosedNum[7] = { 0, };

	// ��ȣ�� �����Ѵ�.(�迭 ���)
	generateNum(lottoNum);

	// �ݺ�
	for (int i = 0; i < 7; i++)
	{
		// ������ ��ȣ �� 1���� �����Ͽ� �ٸ� �迭�� �߰��Ѵ�.
		choosedNum[i] = lottoNum[rand() % 45];
		for (int j = 0; j < i; j++)
		{
			// ���� ���õ� ��ȣ �� �̹� �迭�� �� �ִٸ� �ٽ� �����Ѵ�.
			if (choosedNum[i] == choosedNum[j])
			{
				choosedNum[i] = lottoNum[rand() % 45];
				j = -1;
			}
		}
	}
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "��° ���� : " << choosedNum[i] << endl;
	}
}