#include <iostream>
#include <time.h>
using namespace std;

int _answer[4] = {};
int _input[4] = {};
int _strike = 0;
int _ball = 0;

//������ ��ȿ���� �����Ѱ�? => �����ϸ� true, �ƴϸ� false
bool IsValidation(int arr[])
{
	//�ߺ��� ���ڰ� ������ �ٽû̴´�.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					//�ߺ� ��ȿ�� ����X
					return false;
				}
			}
		}
	}

	return true;
}


void main()
{
	// 1.  ���ھ߱�
	// �����ڵ�
	// 
	// 1. ������ ���ڻ̱�
	// ��ǻ�Ͱ� ���� ���� answer[4]��� �����Ѵ�.
	// answer[0] ~ answer[3]�� ������ ���ڸ� �ִ´�.
	// answer[0] ~ answer[3]�� �ߺ��� ���ڰ� ������ �ٽ� �̴´�.

	// 2. ����� ���ڰ���
	// ����ڰ� �� ���ڸ� input[4]��� �����Ѵ�.
	// input[0] ~ input[3]�� �Է��� ���ڸ� �� �ڸ����� �ɰ��� ����ִ´�.

	// 3.strike ball �Ǻ�
	// answer �� ���� for�� i �� 
	//		input�� ���� for�� j��
	//			IF answer[i] == input[j] (���� ���ٸ�)
	//				IF i == j		(�ڸ����� ���ٸ�)
	//					strike�� �ϳ� ������Ų��.
	//				ELSE 
	//					ball�� �ϳ� ������Ų��.

	// 4. strike ball ���

	srand(time(NULL));

	// 1. ������ ���ڻ̱�
	// ��ǻ�Ͱ� ���� ���� answer[4]��� �����Ѵ�.
	// answer[0] ~ answer[3]�� ������ ���ڸ� �ִ´�.
	// answer[0] ~ answer[3]�� �ߺ��� ���ڰ� ������ �ٽ� �̴´�.
	bool isValidation1;
	do
	{
		for (int i = 0; i < 4; i++)
		{
			//ù�ڸ��� 0�� ������ȵ� (ù�ڸ��� 1~9)
			if (i == 0)
			{
				_answer[i] = rand() % 9 + 1;
			}
			else
			{
				_answer[i] = rand() % 10;
			}
		}
		isValidation1 = IsValidation(_answer);
	} while (isValidation1 == false);

	cout << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;

	while (true)
	{
		// 2. ����� ���ڰ���
		// ����ڰ� �� ���ڸ� input[4]��� �����Ѵ�.
		// input[0] ~ input[3]�� �Է��� ���ڸ� �� �ڸ����� �ɰ��� ����ִ´�.

		//��� ����� ������ temp, tmp �̷������� �̸��� ����.
		int temp;
		bool isValidation2;
		do
		{
			cout << "���� �̾��ּ���. : " << endl;
			cin >> temp;
			_input[0] = temp / 1000;
			_input[1] = temp / 100 % 10;
			_input[2] = temp / 10 % 10;
			_input[3] = temp % 10;

			isValidation2 = IsValidation(_input);
		} while (isValidation2 == false);

		cout << _input[0] << _input[1] << _input[2] << _input[3] << endl;

		// 3.strike ball �Ǻ�
		// answer �� ���� for�� i �� 
		//		input�� ���� for�� j��
		//			IF answer[i] == input[j] (���� ���ٸ�)
		//				IF i == j		(�ڸ����� ���ٸ�)
		//					strike�� �ϳ� ������Ų��.
		//				ELSE 
		//					ball�� �ϳ� ������Ų��.

		_strike = 0;
		_ball = 0;
		//_answer�� ���� i
		for (int i = 0; i < 4; i++)
		{
			//_input�� ���� j
			for (int j = 0; j < 4; j++)
			{
				if (_answer[i] == _input[j])
				{
					if (i == j)
					{
						_strike++;
					}
					else
					{
						_ball++;
					}
				}
			}
		}


		// 4. strike ball ���
		cout << "Strike : " << _strike << endl;
		cout << "Ball : " << _ball << endl;

		if (_strike == 4)
		{
			cout << "���� ����!" << endl;
			break;
		}
	}
}

//���� 1. ���ھ߱� Ÿ�Ӿ���