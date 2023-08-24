#include <iostream>
#include <time.h>
using namespace std;

int _answer[4] = {};
int _input[4] = {};
int _strike;
int _ball;

//������ �����Ѱ�? �����ϸ� true �ƴϸ� false
bool IsValidation(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					//�ߺ�
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
	// ��ǻ�Ͱ� ������ ���� 4�� �̴´�.
	// ��ǻ�Ͱ� ���� ���� answer[4] ��� �����Ѵ�.
	// answer[0] ~ answer[3]�� ������ ���ڸ� �ִ´�.
	// answer[0] ~ answer[3]�� �ߺ��� ���ڰ� ������ �ٽ� �̴´�.

	// 2. ����� ���ڰ���
	// ����ڰ� �� ���ڸ� input[4]��� �����Ѵ�.
	// input[0] ~ input[3]�� �Է��� ���ڸ� �� �ڸ����� �ɰ��� ����ִ´�.

	// 3.strike ball �Ǻ�
	// answer�� ���� for�� i��
	//		input�� ���� for�� j��
	//			answer[i] == answer[j] (���� ���ٸ�)
	//				IF i == j		(�ڸ����� ���ٸ�)
	//					strike �ϳ� ����
	//				ELSE
	//					ball�� �ϳ� ������Ų��.

	// 4. strike ball ���


	// 1.  ���ھ߱�
	// �����ڵ�
	//
	// ��ǻ�Ͱ� ������ ���� 4�� �̴´�.
	// ��ǻ�Ͱ� ���� ���� answer[4] ��� �����Ѵ�.
	// answer[0] ~ answer[3]�� ������ ���ڸ� �ִ´�.
	// answer[0] ~ answer[3]�� �ߺ��� ���ڰ� ������ �ٽ� �̴´�.
	srand(time(NULL));
	bool isValidation;
	do
	{
		for (int i = 0; i < 4; i++)
		{
			//ù�ڸ��� 0�� ������ �ȵ�
			if (i == 0)
			{
				_answer[i] = rand() % 9 + 1;
			}
			else
			{
				_answer[i] = rand() % 10;
			}
		}
		isValidation = IsValidation(_answer);
	} while (isValidation == false);
	
	cout << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;


	while (true)
	{
		// 2. ����� ���ڰ���
		// ����ڰ� �� ���ڸ� input[4]��� �����Ѵ�.
		// input[0] ~ input[3]�� �Է��� ���ڸ� �� �ڸ����� �ɰ��� ����ִ´�.

		//��� ����� ������ temp, tmp �̷� �̸��� �����.
		int temp;
		bool isValidation2;
		do
		{
			cout << "���� �Է��� ���� �̾��ּ���. : ";
			cin >> temp;
			_input[0] = temp / 1000;
			_input[1] = temp / 100 % 10;
			_input[2] = temp / 10 % 10;
			_input[3] = temp % 10;

			isValidation2 = IsValidation(_input);
		} while (isValidation2 == false);

		cout << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;

		// 3.strike ball �Ǻ�
		// answer�� ���� for�� i��
		//		input�� ���� for�� j��
		//			answer[i] == answer[j] (���� ���ٸ�)
		//				IF i == j		(�ڸ����� ���ٸ�)
		//					strike �ϳ� ����
		//				ELSE
		//					ball�� �ϳ� ������Ų��.

		_strike = 0;
		_ball = 0;
		// _answer�� ���� for�� i
		for (int i = 0; i < 4; i++)
		{
			//	_input�� ���� for�� j
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
			cout << "���� ����! " << endl;
			break;
		}
	}

}

//���� ���ھ߱� Ÿ�Ӿ���(15��)