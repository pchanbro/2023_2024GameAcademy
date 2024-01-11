#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _myBoard[5][5] = {}; //���� 2���� �迭�� ���� ���� int _myBoard[25]�� �ϴ°� �� ����ϴ�.
int _comBoard[5][5] = {};
int _input;
int _comNum;
bool myWin;
bool comWin;


//���� ���� ����  ���� �־��ְ� �����ش�
void generateBingoBoard(int board[][5])
{
	// �� �ڸ��� �´� �� ����
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			board[i][j] = i * 5 + j + 1;
		}
	}

	// �� ����
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 5;
		int num2 = rand() % 5;
		int num3 = rand() % 5;
		int num4 = rand() % 5;
		int temp;
		temp = board[num1][num2];
		board[num1][num2] = board[num3][num4];
		board[num3][num4] = temp;
	}
}

// ���� ���
void printBingoBoard(int board[][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// int�迭�� ����ϱ� ������ #���� �ٲ� ��� char�� ��ȯ�Ͽ� ����Ѵ�.
			if (board[i][j] == '#')
			{
				cout << (char)board[i][j] << "\t";
			}
			else
			{
				cout << board[i][j] << "\t";
			}
		}
		cout << endl;
	}
	cout << endl;
}

// ���ڸ� �����ϸ� ���� ��ǻ���� ���忡�� ���õ� ���ڸ� #���� �����Ѵ�.
// ������ �ƴٸ� true ������ �ȵǸ� false ��ȯ
bool changeBoard(int _input, int myBoard[][5], int comBoard[][5])
{
	bool isChange = false;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (myBoard[i][j] == _input)
			{
				myBoard[i][j] = '#';
				isChange = true;
			}

			if (comBoard[i][j] == _input)
			{
				comBoard[i][j] = '#';
			}
		}
		cout << endl;
	}

	return isChange;
}

// �¸��ߴ��� ���� �ľ�
bool isWin(int board[][5])
{
	int bingoNum;
	// ���� ���� 
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (board[i][0] == board[i][j])
			{
				bingoNum++;
			}
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// ���� ����
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		for (int j = 0; j < 5; j++)
		{
			if (board[0][i] == board[j][i])
			{
				bingoNum++;
			}
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// �밢��(\) ����
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		if (board[0][0] == board[i][i])
		{
			bingoNum++;
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	// �밢��(/) ����
	for (int i = 0; i < 5; i++)
	{
		bingoNum = 0;
		if (board[0][4] == board[i][4-i])
		{
			bingoNum++;
		}
		if (bingoNum == 5)
		{
			return true;
		}
	}

	return false;
}

void main()
{
	// ������� �����

	// 5x5�� �̷���� ���� ��
	// 5x5�� �̷���� ��ǻ�� ��
	// �� ������ �ȿ��� 1~25������ ���ڰ� �巷����.

	//���� -> ����� -> ���� -> ����� �ݺ�

	// ���� ���� �� , �θ� ���ڴ� ���ڷ� ǥ��ȵǰ�  #���� ǥ���.

	// ���� �ϼ��Ǹ� �ش� �÷��̾� �¸�


	srand(time(NULL));

	// ���� �� ���� ( 1 ~ 25 ��ȣ �����ϰ� �����ش�)
	// ��ǻ�� �� ����

	// �ݺ�
	//		�� �Է� 
	//		�Էµ� ���� #���� ����
	//		��ǻ���� ������ �� �Է�
	//		�Էµ� ���� #���� ����
	//		���� ��ǻ�ͳ� �� �Է��� �̹� �ٲ� ���� ��� �ٽ� �Է�
	//		���� ��ǻ���� ���� ���� Ȯ��
	//		��� ������ ���� �ϼ��Ǹ� ���� ����


	// ���� �� ���� ( 1 ~ 25 ��ȣ �����ϰ� �����ش�)
	// ��ǻ�� �� ����
	generateBingoBoard(_myBoard);
	generateBingoBoard(_comBoard);



	while (true)
	{
		system("cls");

		// ���� ��ǻ�� �� �� ��Ȳ ���
		printBingoBoard(_myBoard);
		printBingoBoard(_comBoard);

		// �� �Է�
		cout << "���� ��, �����ǿ� �����ִ� ���� �Է��ϼ���. : ";
		cin >> _input;
		// �Էµ� ���� #���� ����
		while (!changeBoard(_input, _myBoard, _comBoard))
		{
			cout << "�����ִ� �� �߿� �Է����ּ���, �ٽ� �Է��ϼ��� : ";
			cin >> _input;
		}

		// ���� ��ǻ���� ���� ���� Ȯ��
		myWin = isWin(_myBoard);
		comWin = isWin(_comBoard);

		// ���� ������ �¸�
		if (myWin)
		{
			cout << "�¸� " << endl;
			break;
		}
		// �׷��� �ʰ� ��ǻ�� ������ �й�
		else if (comWin)
		{
			cout << "�й�" << endl;
			break;
		}

		// ���� ��ǻ�� �� �� ��Ȳ ���
		printBingoBoard(_myBoard);
		printBingoBoard(_comBoard);


		cout << "��ǻ���� ����, ������ ���Ͻø� �ƹ�Ű�� �����ּ���." << endl;
		system("pause");

		// ��ǻ���� ������ �� �Է�
		_comNum = rand() % 25 + 1;

		while (!changeBoard(_comNum, _myBoard, _comBoard))
		{
			_comNum = rand() % 25 + 1;
		}

		// ���� ��ǻ���� ���� ���� Ȯ��
		myWin = isWin(_myBoard);
		comWin = isWin(_comBoard);

		// ��ǻ���� ������ �й�
		if (comWin)
		{
			cout << "�й� " << endl;
			break;
		}
		// �׷��� �ʰ� �� ������ �¸�
		else if (myWin)
		{
			cout << "��ǻ���� �Է����� �¸�" << endl;
			break;
		}

	}
	
}