

// ���� ���� ���� �ϼ��ϱ�

// ���� ���� ���� Ÿ�Ӿ���

// main03���� ��� ��ũ��(#define)�� Ȱ���ؼ� ������

#include <iostream>
#include "time.h"
#define BINGO_SIZE 5
#define BOARD_SIZE (BINGO_SIZE * BINGO_SIZE)
using namespace std;
int _myBoard[BOARD_SIZE] = {};
int _comBoard[BOARD_SIZE] = {};


//�Լ� ���� ����
//�ڷ��� �Լ���(�ŰԺ���) 
//{
//}

void InitializeBoard(int board[])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		board[i] = i + 1;
	}

	//���� ����
	//Swap * 100000�� �ݺ�
	for (int i = 0; i < 100000; i++)
	{
		/*int temp = a;
		a = b;
		b = temp;*/
		int num1 = rand() % BOARD_SIZE;
		int num2 = rand() % BOARD_SIZE;

		int temp = board[num1];
		board[num1] = board[num2];
		board[num2] = temp;
	}
}

void PrintBoard(int board[])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (i % BINGO_SIZE == BINGO_SIZE - 1)
		{
			if (board[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << board[i] << endl;
			}
		}
		else
		{
			if (board[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << board[i] << "\t";
			}
		}
	}
}

void MarkBoard(int input)
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (_myBoard[i] == input)
		{
			_myBoard[i] = -1;
		}
	}

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		if (_comBoard[i] == input)
		{
			_comBoard[i] = -1;
		}
	}
}

bool IsCompleteMyBoard(int board[])
{
	//���� ���� ���� �ϼ��Ǹ� true
	//�ϼ� �ȵǾ����� false

	//1. ������ üũ
	//2. ������ üũ
	//3. �밢�� üũ /
	//4. �밢�� üũ \


	//1. ������ üũ
	//BINGO �����ŭ, �������� ���鼭
	//�ش� ���� ���� ��� -1�̸�
	//	==> 
	// 1. temp ��� ������ �����ϰ� 0���� �ʱ�ȭ�Ѵ�.
	// 2. �ش� ���� ��� ��ȸ�ϸ鼭 ���� -1�̸� temp�� �ϳ� ������Ų��.
	// 3. �ش� ���� ��ȸ�� ���Ŀ� temp�� ���� BINGO_SIZE�� ���ٸ�, �ش� ���� ���� ��� -1�̴�.
	// 
	//  TRUE
	//�ϳ��� -1�� �ƴϸ� ���

	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkStartIndex = i * BINGO_SIZE;
		int temp = 0;

		//�ش� ���� ��ȸ�Ѵ�.
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			int checkIndex = checkStartIndex + j;
			if (board[checkIndex] == -1)
			{
				temp++;
			}
		}

		//��ȸ�� ���Ŀ�
		if (temp == BINGO_SIZE)
		{
			return true;
		}
	}

	//2. ������üũ

	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkStartIndex = i;
		int temp = 0;

		//�ش� ���� ��ȸ�Ѵ�.
		for (int j = 0; j < BINGO_SIZE; j++)
		{
			int checkIndex = checkStartIndex + j * BINGO_SIZE;
			if (board[checkIndex] == -1)
			{
				temp++;
			}
		}

		//��ȸ�� ���Ŀ�
		if (temp == BINGO_SIZE)
		{
			return true;
		}
	}

	// 3. �밢�� üũ \

		
	
	int temp = 0;

	//�ش� ���� ��ȸ�Ѵ�.
	for (int i = 0; i < BINGO_SIZE; i++)
	{
		int checkIndex = i * (BINGO_SIZE+1);  //0 6 12 18 24
		if (board[checkIndex] == -1)
		{
			temp++;
		}
	}

		//��ȸ�� ���Ŀ�
	if (temp == BINGO_SIZE)
	{
		return true;
	}

	// 4. �밢�� üũ /

	temp = 0;
	int temp = 0;

	//�ش� ���� ��ȸ�Ѵ�.
	for (int j = 0; j < BINGO_SIZE; j++)
	{
		int checkIndex = 4 + j * (BINGO_SIZE - 1);  //4 8 12 16 20
		if (board[checkIndex] == -1)
		{
			temp++;
		}
	}

	//��ȸ�� ���Ŀ�
	if (temp == BINGO_SIZE)
	{
		return true;
	}



	return false;
}


//���� �Ϸ�
void main()
{
	// �����ڵ�
	// 1.
	// ���� ���� myBoard��� �θ���.
	// ���� ���� 1~25������ ���ڷ� �ʱ�ȭ�Ѵ�.
	// ���� ���� ���´�.

	// 2.
	// ��ǻ���� ���� comBaord��� �θ���.
	// ��ǻ���� ���� 1~25�� ���ڷ� �ʱ�ȭ�Ѵ�.
	// ��ǻ���� ���� ���´�.

	// 3. myBoard�� ����Ѵ�.
	// 4. comBoard�� ����Ѵ�.

	// 5. �Ʒ� ������ �ݺ��Ѵ�.
	// ���ڸ� �ϳ� �Է¹޴´�.
	// �Է¹��� �� ���ڸ� input�̶�� �θ���
	// myBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.
	// comBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.

	// 6.  ���ڸ� �ϳ� �������� �̾ƿ´�.
	// �Է¹��� �� ���ڸ� input�̶�� �θ���
	// myBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.
	// comBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.

	InitializeBoard(_myBoard);
	InitializeBoard(_comBoard);


	while (true)
	{
		system("cls");

		cout << "�� ���� : " << endl;
		PrintBoard(_myBoard);

		cout << "��ǻ�� ���� : " << endl;
		PrintBoard(_myBoard);

		// 5. �Ʒ� ������ �ݺ��Ѵ�.
		// ���ڸ� �ϳ� �Է¹޴´�.
		// �Է¹��� �� ���ڸ� input�̶�� �θ���
		// myBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.
		// comBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.

		int input;
		cout << "���� ���ڸ� �Է����ּ���. : ";
		cin >> input;
		MarkBoard(input);
		

		// 6.  ���ڸ� �ϳ� �������� �̾ƿ´�.
		// �Է¹��� �� ���ڸ� comInput�̶�� �θ���
		// myBoard�� �迭�� ��� ��ȸ�ϸ鼭 comInput�� ���� ���� ������ ���� -1�� �ٲ��ش�.
		// comBoard�� �迭�� ��� ��ȸ�ϸ鼭 comInput�� ���� ���� ������ ���� -1�� �ٲ��ش�.
		int comInput = rand() % 25 + 1; // 1~25�����߿� ������ ����
		cout << "��ǻ�Ͱ� ���� ���� : " << comInput << endl;
		MarkBoard(comInput);
		

		//���� ���� ���� �ϼ��Ǹ�,
		//	�¸�
		//��벨 ���� ���� �ϼ��Ǹ�,
		//	�й�
		if (true == IsCompleteMyBoard(_myBoard))
		{
			cout << "�¸�" << endl;
			return;
		}

		if (true == IsCompleteMyBoard(_comBoard))
		{
			cout << "�й�" << endl;
			return;
		}


		system("pause");
	}



}