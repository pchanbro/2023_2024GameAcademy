#include <iostream>

using namespace std;
int _myBoard[25] = {};
int _comBoard[25] = {};

void main()
{
	// ������� �����

	// 5x5�� �̷���� ���� ��
	// 5x5�� �̷���� ��ǻ�� ��
	// �� �����Ǿȿ��� 1~25������ ���ڰ� �������.

	// ���� -> ����� -> ���� -> ����� �ݺ�

	// ���� ���϶�, ���ڸ� �ϳ� �θ���.
	// �θ� ���ڴ� ���ڷ� ǥ��ȵǰ� #���� ǥ���.

	//��¿���
	//�� : 
	// 7 6 15 20 #
	// 1 5 3  7  2
	// ...
	// ...
	// ...
	
	//��� : 
	// 1 5 3  7  2
	// 7 6 15 20 #
	// ...
	// ...
	// ...

	// ���� �ϼ��Ǹ� �ش� �÷��̾� �¸�.



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


	// 1.
	// ���� ���� myBoard��� �θ���.
	// ���� ���� 1~25������ ���ڷ� �ʱ�ȭ�Ѵ�.
	// ���� ���� ���´�.
	
	//�迭�ʱ�ȭ�� �׻� for���̶� �Բ�.
	for (int i = 0; i < 25; i++)
	{
		_myBoard[i] = i + 1;
	}

	//���� ����
	//Swap * 100000�� �ݺ�
	for (int i = 0; i < 100000; i++)
	{
		/*int temp = a;
		a = b;
		b = temp;*/
		int num1 = rand() % 25;
		int num2 = rand() % 25;

		int temp = _myBoard[num1];
		_myBoard[num1] = _myBoard[num2];
		_myBoard[num2] = temp;
	}


	// 2.
	// ��ǻ���� ���� comBaord��� �θ���.
	// ��ǻ���� ���� 1~25�� ���ڷ� �ʱ�ȭ�Ѵ�.
	// ��ǻ���� ���� ���´�.
	for (int i = 0; i < 25; i++)
	{
		_comBoard[i] = i + 1;
	}

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = _comBoard[num1];
		_comBoard[num1] = _comBoard[num2];
		_comBoard[num2] = temp;
	}


	// 3. myBoard�� ����Ѵ�.
	/*cout << _myBoard[0] << "\t";
	cout << _myBoard[1] << "\t";
	cout << _myBoard[2] << "\t";
	cout << _myBoard[3] << "\t";
	cout << _myBoard[4] << endl;
	cout << _myBoard[5] << "\t";
	cout << _myBoard[6] << "\t";
	cout << _myBoard[7] << "\t";
	cout << _myBoard[8] << "\t";
	cout << _myBoard[9] << endl;*/
	cout << "�� ���� : " << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 4)
		{
			if (_myBoard[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << _myBoard[i] << endl;
			}
		}
		else
		{
			if (_myBoard[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << _myBoard[i] << "\t";
			}
		}
	}
	cout << "��ǻ�� ���� : " << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 4)
		{
			if (_comBoard[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << _comBoard[i] << endl;
			}
		}
		else
		{
			if (_comBoard[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << _comBoard[i] << "\t";
			}
		}
	}
	
	// 5. �Ʒ� ������ �ݺ��Ѵ�.
	// ���ڸ� �ϳ� �Է¹޴´�.
	// �Է¹��� �� ���ڸ� input�̶�� �θ���
	// myBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.
	// comBoard�� �迭�� ��� ��ȸ�ϸ鼭 input�� ���� ���� ������ ���� -1�� �ٲ��ش�.
}

//���� 2.
// ���� �ϼ�