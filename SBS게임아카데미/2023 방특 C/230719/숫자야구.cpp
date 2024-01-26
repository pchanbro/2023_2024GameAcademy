#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	//���ھ߱�
	
	srand(time(NULL));
	int computerNumber[3] = { 0, };
	int playerNumber[3] = { 0, };

	//1. ��ǻ���� ���ڸ� �����ش�.
	//100���ڸ��� 1~9 ����, ������ �ڸ����� 0 ~ 9 ����
	computerNumber[0] = rand() % 9 + 1;
	computerNumber[1] = rand() % 10;
	computerNumber[2] = rand() % 10;

	//1-1. ���� ���ڰ� �ݺ��Ǹ�, ���ڸ� ���� �̴´�.
	while (computerNumber[0] == computerNumber[1] ||
		computerNumber[0] == computerNumber[2] ||
		computerNumber[1] == computerNumber[2]
		)
	{
		computerNumber[0] = rand() % 9 + 1;
		computerNumber[1] = rand() % 10;
		computerNumber[2] = rand() % 10;
	}

	cout << "computerNumber : " << computerNumber[0] << computerNumber[1] << computerNumber[2] << endl;

	//2. ������� ���ڸ� �Է¹޴´�.
	int input;
	cin >> input;
	//3. ������� ���ڸ� 
	//  1���ڸ�, 
	//	10���ڸ�, 
	//	100���ڸ��� �ɰ���.
	playerNumber[0] = input / 100;
	playerNumber[1] = input / 10 % 10;
	playerNumber[2] = input % 10;
	//2-2.  ���� ���ڰ� �ݺ��Ǹ�, ���ڸ� ���� �����Ѵ�.
	while (playerNumber[0] == playerNumber[1] ||
		playerNumber[0] == playerNumber[2] ||
		playerNumber[1] == playerNumber[2]
		)
	{
		cout << "�ߺ��Ǵ� ���ڰ� �ֽ��ϴ�. ���ڸ� ���� �̾��ּ���." << endl;
		cin >> input;
		//3. ������� ���ڸ� 
		//  1���ڸ�, 
		//	10���ڸ�, 
		//	100���ڸ��� �ɰ���.
		playerNumber[0] = input / 100;
		playerNumber[1] = input / 10 % 10;
		playerNumber[2] = input % 10;
	}
	cout << "playerNumber : " << playerNumber[0] << playerNumber[1] << playerNumber[2] << endl;

	//4. strike, ball ������ �߰��Ѵ�.
	int strike = 0;
	int ball = 0;

	//�ڸ����� �� ���� ���ٸ� ��Ʈ����ũ
	//���� ������, �ڸ����� �ٸ��� ��
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (playerNumber[i] == computerNumber[j])
			{
				if (i == j)
				{
					strike++;
				}
				else 
				{
					ball++;
				}
			}
		}
	}


	cout << strike << "��Ʈ����ũ" << endl;
	cout << ball << "��" << endl;

	return 0;
}