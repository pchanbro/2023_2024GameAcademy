#include <iostream>
#include <time.h>

using namespace std;

//정답
int _answer[4] = { 0, };
//사용자입력
int _input[4] = { 0, };
int _strike = 0, _ball = 0;

void generateRandomAnswer()
{
	cout << "generateRandomAnswer" << endl;

	_answer[0] = rand()% 9 + 1;
	_answer[1] = rand() % 10;
	_answer[2] = rand() % 10;
	_answer[3] = rand() % 10;

	bool result = false;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) continue;
			if (_answer[i] == _answer[j])
			{
				result = true;
			}
		}
	}

	if (result == true)
	{
		generateRandomAnswer();
		return;
	}

	cout << "정답공개 : " << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;
}

void getPlayerAnswer()
{
	cout << "getPlayerAnswer" << endl;

	int input;
	cin >> input;

	//천의자릿수
	_input[0] = input / 1000;
	//백의자릿수
	_input[1] = (input / 100) % 10;
	//십의자릿수
	_input[2] = (input / 10) % 10;
	//일의자릿수
	_input[3] = input % 10;

	// input값이 겹치면 
	// 다시입력받게끔
	bool result = false;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) continue;
			if (_input[i] == _input[j])
			{
				result = true;
			}
		}
	}

	if (result == true)
	{
		//다시입력받기
		cout << "잘못입력했습니다. 다시입력해주세요." << endl;
		getPlayerAnswer();

		return;
	}

}

void determineStrikeBallLogic()
{
	cout << "determineStrikeBallLogic" << endl;
	_strike = 0;
	_ball = 0;
	//_input, _answer 변수를 비교해서
	//배열위치와, 값이 모두 같으면 _strike을 하나 더하고
	//_input의 값이 _answer에 포함은 되지만, 배열 위치의 값이 다르면,  _ball을 하나 더한다.
	// 비교하여 _strike와 _ball 계산
	for (int i = 0; i < 4; i++) {
		if (_input[i] == _answer[i]) {
			_strike++;
		}
		else {
			for (int j = 0; j < 4; j++) {
				if (_input[i] == _answer[j]) {
					_ball++;
					break;
				}
			}
		}
	}


}

void showResult()
{
	cout << "Result: " << _strike << " Strike(s), " << _ball << " Ball(s)" << endl;
}

int main()
{
	srand(time(NULL));
	//1. 임의의 정답 생성.
	// 
	generateRandomAnswer();
	while (true)
	{
		getPlayerAnswer();
		determineStrikeBallLogic();
		showResult();

		if (_strike == 4)
		{
			cout << "게임 승리" << endl;
			return 0;
		}
	}

	
	return 0;
}