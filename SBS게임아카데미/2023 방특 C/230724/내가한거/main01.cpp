#include <iostream>
#include <time.h>

using namespace std;

void printBingo(int Bingo[], int correctArr[], int correctIndex) //int size���� �迭 ������ ���� ������� ���� �������ִ°� ����
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			isContain = false;
			for (int k = 0; k < correctIndex; k++)
			{
				if (bingo[i * 5 + j] == correctArr[k])
				{
					isContain = true;
					break;
				}
			}

			if (isContain == true)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << bingo[i * 5 + j] << "\t";
			}
		}
		cout << endl;
	}
}

bool isWin(int bingo[], int correArr[], int correctIndex)
{
	//�¸��� true �¸��� �ƴϸ� false
}

int main() 
{
	//�������� ����
	//���� 5*5, ��ǻ�Ͳ� 5*5 ���� �����
	//���ǿ� 1~25���� ���ڸ� ���´�
	//���� ��ǻ�Ͳ� ���
	//���� ���´�.
	//��ǻ�Ϳ� ���� ���ڸ� �����ư��鼭 ȣ���Ѵ�.
	//ȣ���� ���ڴ� #���� ǥ��ǰ� �ٲ۴�.

	//���� �� ������ �̿ϼ� �ϼ� ������ �������� �Ѱ� - ����.cpp������ ����

	//�̸� �ѹ��� �ٲٱ� Ű�� � ������ Ŭ���� ������ ctrl + r2�� ������ �̸� �ٲٴ� â�� ��

	//2���� �迭
	//0 ~ 24
	srand(time(NULL));

	int myBingo[25];
	int computerBingo[25];
	int correctArr[25] = { 0, };
	int correctIndex = 0;

	for (int i = 0; i < 25; i++)
	{
		myBingo[i] = i + 1;
		computerBingo[i] = i + 1;
	}

	//���
	cout << "�� ������ : " << endl;
	printBingo(myBingo, correctArr, correctIndex);

	cout << "��ǻ�� ������ : " << endl;
	printBingo(computerBingo, correctArr, correctIndex);


	cout << endl;
	cout << "���� ���´�." << endl;

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = myBingo[num1];
		myBingo[num1] = myBingo[num2];
		myBingo[num2] = temp;
	}

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = computerBingo[num1];
		computerBingo[num1] = computerBingo[num2];
		computerBingo[num2] = temp;
	}

	cout << "�� ������ : " << endl;
	printBingo(myBingo);

	cout << "��ǻ�� ������ : " << endl;
	printBingo(computerBingo);

	//0�̸� ����, 1�̸� �����
	int turn = 0;
	int input = 0;
	while (true)
	{
		
	}


	return 0;
}