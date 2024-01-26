#include <iostream>
#include <time.h>
using namespace std;

int _answer[4] = {};
int _input[4] = {};
int _strike = 0;
int _ball = 0;

//정답이 유효성이 적합한가? => 적합하면 true, 아니면 false
bool IsValidation(int arr[])
{
	//중복된 숫자가 있으면 다시뽑는다.
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					//중복 유효성 적합X
					return false;
				}
			}
		}
	}

	return true;
}


void main()
{
	// 1.  숫자야구
	// 수도코드
	// 
	// 1. 랜덤한 숫자뽑기
	// 컴퓨터가 뽑은 수를 answer[4]라고 정의한다.
	// answer[0] ~ answer[3]에 랜덤한 숫자를 넣는다.
	// answer[0] ~ answer[3]에 중복된 숫자가 있으면 다시 뽑는다.

	// 2. 사용자 숫자고르기
	// 사용자가 고른 숫자를 input[4]라고 정의한다.
	// input[0] ~ input[3]에 입력한 숫자를 각 자릿수를 쪼개서 집어넣는다.

	// 3.strike ball 판별
	// answer 를 도는 for문 i 와 
	//		input을 도는 for문 j로
	//			IF answer[i] == input[j] (값이 같다면)
	//				IF i == j		(자릿수도 같다면)
	//					strike를 하나 증가시킨다.
	//				ELSE 
	//					ball을 하나 증가시킨다.

	// 4. strike ball 출력

	srand(time(NULL));

	// 1. 랜덤한 숫자뽑기
	// 컴퓨터가 뽑은 수를 answer[4]라고 정의한다.
	// answer[0] ~ answer[3]에 랜덤한 숫자를 넣는다.
	// answer[0] ~ answer[3]에 중복된 숫자가 있으면 다시 뽑는다.
	bool isValidation1;
	do
	{
		for (int i = 0; i < 4; i++)
		{
			//첫자리는 0이 나오면안됨 (첫자리는 1~9)
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
		// 2. 사용자 숫자고르기
		// 사용자가 고른 숫자를 input[4]라고 정의한다.
		// input[0] ~ input[3]에 입력한 숫자를 각 자릿수를 쪼개서 집어넣는다.

		//잠깐 사용할 변수는 temp, tmp 이런식으로 이름을 지음.
		int temp;
		bool isValidation2;
		do
		{
			cout << "수를 뽑아주세요. : " << endl;
			cin >> temp;
			_input[0] = temp / 1000;
			_input[1] = temp / 100 % 10;
			_input[2] = temp / 10 % 10;
			_input[3] = temp % 10;

			isValidation2 = IsValidation(_input);
		} while (isValidation2 == false);

		cout << _input[0] << _input[1] << _input[2] << _input[3] << endl;

		// 3.strike ball 판별
		// answer 를 도는 for문 i 와 
		//		input을 도는 for문 j로
		//			IF answer[i] == input[j] (값이 같다면)
		//				IF i == j		(자릿수도 같다면)
		//					strike를 하나 증가시킨다.
		//				ELSE 
		//					ball을 하나 증가시킨다.

		_strike = 0;
		_ball = 0;
		//_answer를 도는 i
		for (int i = 0; i < 4; i++)
		{
			//_input를 도는 j
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


		// 4. strike ball 출력
		cout << "Strike : " << _strike << endl;
		cout << "Ball : " << _ball << endl;

		if (_strike == 4)
		{
			cout << "게임 종료!" << endl;
			break;
		}
	}
}

//숙제 1. 숫자야구 타임어택