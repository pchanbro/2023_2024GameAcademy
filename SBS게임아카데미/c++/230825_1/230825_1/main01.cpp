
// 지난 수업 숫자야구 타임어택

#include <iostream>
#include <time.h>
using namespace std;

int _answer[4];
int _input[4];
int _strike;
int _ball;

bool isValidation(int* arr)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					return false;
				}
			}
		}
	}
	return true;
}

void main()
{
	srand(time(NULL));
	bool validation;

	cout << "카드를 생성합니다." << endl;
	do
	{
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				_answer[i] = rand() % 9 + 1;
			}
			else
			{
				_answer[i] = rand() % 10;
			}
		}
		validation = isValidation(_answer);
	} while(!validation);

	cout << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;

	bool validation2;
	int temp;

	while (true)
	{
		do
		{
			cout << "수를 입력하세요.(첫 자리는 0 불가 서로 다른 4자리의 수 ) : ";
			cin >> temp;
			_input[0] = temp / 1000;
			_input[1] = temp / 100 % 10;
			_input[2] = temp / 10 % 10;
			_input[3] = temp % 10;

			validation2 = isValidation(_input);
		} while (!validation2);

		_strike = 0;
		_ball = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (_input[i] == _answer[j])
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

		cout << "결과 :" << _strike << "스트라이크 " << _ball << "볼" << endl;

		if (_strike == 4)
		{
			cout << "정답 !" << endl;
			break;
		}

	}
}