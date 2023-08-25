#include <iostream>
#include <time.h>
using namespace std;

// ��ǻ�Ͱ� ������ ���ڸ� �̴´�.
// �� �� ���ڰ� ��ġ�� �ʵ��� 4�ڸ��� ����
// �� ù ���ڴ� 0 �Ұ�
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
		// ���� �ߺ��� �ȴٸ� �ٽ� �����ǵ��� �Ѵ�.
		for (int i = 0; i < num; i++)
		{
			if (randNum[i] == randNum[num])
			{
				break;
			}
			else if (i == num - 1)
			{
				num++;
				break;
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

// input�� �Է��� ���� �迭�� �־���
void insertAnswer(int* playerAnswer, int input)
{
	playerAnswer[0] = input / 1000;
	playerAnswer[1] = input / 100 % 10;
	playerAnswer[2] = input / 10 % 10;
	playerAnswer[3] = input % 10;
}

// ������ ���� ��� 2593 �� �� ����ڰ� 2307�� �Է��ϸ� 1strike 1ball
// 4strike�� �Ǹ� ����
// ��������� 4strike�� ���� ����
bool isStrike(int* playerAnswer, int* randNum)
{
	int strike = 0;
	int ball = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (playerAnswer[i] == randNum[j])
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
				break;
			}
		}
	}

	if (strike == 4)
	{
		cout << strike << "strike!!" << endl;
		return true;
	}

	cout << strike << "strike " << ball << "ball" << endl;
	return false;
}

void main()
{
	// ����1.
	// ���ھ߱�

	int randNum[4] = { 0, };

	printNum(randNum);
	
	generateNum(randNum);

	printNum(randNum);

	// �ݺ�
	while (true)
	{
		int playerAnswer[4];
		int input;

		// ����ڰ� ��ġ�� �ʴ� 4�ڸ� ���� �Է�
		cout << "������ �Է��ϼ���(ù ���ڴ� 0 ����, �� �ڸ��� ���� ���� �ٸ�) : ";
		cin >> input;

		// �Է� ���� ���� �迭�� ����
		insertAnswer(playerAnswer, input);

		// ��Ʈ����ũ ���� Ȯ�� 4��Ʈ����ũ ��� ���� ����
		if (isStrike(playerAnswer, randNum))
		{
			break;
		}
	}

}