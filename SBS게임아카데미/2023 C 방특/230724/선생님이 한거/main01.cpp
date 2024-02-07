#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

void printBingo(int bingo[], int correctArr[], int correctIndex)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bool isContain = false;
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

bool isContain(int arr[], int arrSize, int value)
{
	bool isContain = false;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == value)
		{
			isContain = true;
			break;
		}
	}

	return isContain;
}

// bingo���� correctArr�� ���� ���� �¸��� �Ǿ����� �������ִ� �Լ�
bool isWin(int bingo[], int correctArr[], int correctSize)
{
	//�¸���
	//true
	
	//�¸��� �ƴϸ�
	//false

	//����������
	//����������
	//�밢�� 2��

	
	//������ ����

	//������5���� �˻��ϸ鼭
	//����迭�� �ִ� ��Ұ� 5�����
	//������ ���� ����
	//5�ٰ˻�
	for (int i = 0; i < 5; i++)
	{
		int answer = 0;
		//�� ��� 5���˻�
		for (int j = 0; j < 5; j++)
		{
			//i -> 0 ~ 4 : 5
			//j -> 0 ~ 4 : 5
			//0 ~ 24 : 25
			//i : 0, j : 0 --> i : 0, j : 4
			//i : 1, j : 0 --> i : 1, j : 4 
			//i : 2, j : 0 --> i : 2, j : 4 
			//i : 3, j : 0 --> i : 3, j : 4 
			//i : 4, j : 0 --> i : 4, j : 4 
			//�����
			if (isContain(correctArr, correctSize, bingo[i * 5 + j]))
			{
				answer++;
			}

			if (answer == 5)
			{
				return true;
			}
		}
	}

	//����������
	//5�� �˻�
	for (int i = 0; i < 5; i++)
	{
		int answer = 0;
		//�� ��� 5�� �˻�
		for (int j = 0; j < 5; j++)
		{
			//i -> 0 ~ 4 : 5
			//j -> 0 ~ 4 : 5
			//0 ~ 24 : 25
			//i : 0, j : 0 --> i : 0, j : 4
			//i : 1, j : 0 --> i : 1, j : 4 
			//i : 2, j : 0 --> i : 2, j : 4 
			//i : 3, j : 0 --> i : 3, j : 4 
			//i : 4, j : 0 --> i : 4, j : 4 
			//�����
			if (isContain(correctArr, correctSize, bingo[j * 5 + i]))
			{
				answer++;
			}

			if (answer == 5)
			{
				return true;
			}
		}
	}

	// / �̸�� �밢��
	// 0  1  2  3  4
	// 5  6  7  8  9
	//10 11 12 13 14
	//15 16 17 18 19
	//20 21 22 23 24
	bool a[5];
	a[0] = isContain(correctArr, correctSize, bingo[4]);
	a[1] = isContain(correctArr, correctSize, bingo[8]);
	a[2] = isContain(correctArr, correctSize, bingo[12]);
	a[3] = isContain(correctArr, correctSize, bingo[16]);
	a[4] = isContain(correctArr, correctSize, bingo[20]);
	if (a[0] && a[1] && a[2] && a[3] && a[4])
	{
		return true;
	}


	// \ �̸�� �밢��
	// 0  1  2  3  4
	// 5  6  7  8  9
	//10 11 12 13 14
	//15 16 17 18 19
	//20 21 22 23 24
	bool b[5];
	b[0] = isContain(correctArr, correctSize, bingo[0]);
	b[1] = isContain(correctArr, correctSize, bingo[6]);
	b[2] = isContain(correctArr, correctSize, bingo[12]);
	b[3] = isContain(correctArr, correctSize, bingo[18]);
	b[4] = isContain(correctArr, correctSize, bingo[24]);
	if (b[0] && b[1] && b[2] && b[3] && b[4])
	{
		return true;
	}


	return false;
}

int main()
{
	//����
	//���� 5*5, ��ǻ�Ͳ� 5*5 ���� �����
	//���ǿ� 1~25���� ���ڸ� ���´�
	//	���� ��ǻ�Ͳ� ���
	//���� ���´�.
	//��ǻ�Ϳ� ���� ���ڸ� �����ư��鼭 ȣ���Ѵ�
	//ȣ���� ���ڴ� #���� ǥ��ǰ� �ٲ۴�.

	//2�����迭
	//0~24
	srand(time(NULL));
	int correctArr[25] = { 0, };
	int correctIndex = 0;

	int myBingo[25];
	//2�����迭 ����
	//myBingo[0][0]
	//myBingo[0][1]
	//myBingo[0][2]
	//myBingo[0][3]
	//myBingo[0][4]
	//myBingo[1][0]
	//myBingo[1][1]
	//myBingo[1][2]
	//myBingo[1][3]
	//myBingo[1][4]
	//myBingo[2][0]
	//myBingo[2][1]
	//myBingo[2][2]
	//myBingo[2][3]
	//myBingo[2][4]
	//myBingo[3][0]
	//myBingo[3][1]
	//myBingo[3][2]
	//myBingo[3][3]
	//myBingo[3][4]
	//myBingo[4][0]
	//myBingo[4][1]
	//myBingo[4][2]
	//myBingo[4][3]
	//myBingo[4][4]
	int computerBingo[25];
	
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
	printBingo(myBingo, correctArr, correctIndex);

	cout << "��ǻ�� ������ : " << endl;
	printBingo(computerBingo, correctArr, correctIndex);

	// 0�̸� ����, 1�̸� �����
	int turn = 0;
	int input = 0;
	while (true)
	{
		system("cls");

		cout << "�� ������ : " << endl;
		printBingo(myBingo, correctArr, correctIndex);

		cout << "��ǻ�� ������ : " << endl;
		printBingo(computerBingo, correctArr, correctIndex);


		cout << "���ڸ� ������ ���鼭 �Է����ּ���." << endl;
		if (turn == 0)
		{
			cin >> input;
		}
		else if (turn == 1)
		{
			input = rand() % 25;
		}

		cout << input << "��ȣ�� ȣ��Ǿ����ϴ�." << endl;

		//ȣ���� ���ڴ� #���� ǥ��ǰ� �ٲ۴�.
		correctArr[correctIndex] = input;
		correctIndex++;



		//���� �Ϸ�Ǹ�
		bool myWin = isWin(myBingo, correctArr, correctIndex);
		bool computerWin = isWin(myBingo, correctArr, correctIndex);
		//��������
		if (myWin)
		{
			cout << "�÷��̾� �¸��Դϴ�" << endl;
			return 0;
		}
		else if (computerWin)
		{
			cout << "��ǻ�� �¸��Դϴ�" << endl;
			return 0;
		}

		

		turn++;
		if (2 < turn)
		{
			turn = 0;
		}
	}


	return 0;
}