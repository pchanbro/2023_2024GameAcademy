#include <iostream>
#include <time.h>

using namespace std;

//선생님 숫자야구 4개 짜리 풀이

//정답
int _answer[4] = { 0, }; //main문 밖에서도 변수 선언 가능 여기서 선언할때는 가능하면 _(언더바)붙여주기
//사용자 입력
int _input[4] = { 0, };
int _strike = 0; 
int _ball = 0;

//함수명 결정 시 수도코드와 번역기 통해 정할 때 많음
void generateRandomAnswer()
{
	cout << "generateRandomAnswer" << endl;

	//어떻게 해야할지 정 모르겠다면 그냥 정해진 값을 개발자가 직접 넣어라
	//answer[0] = 3;
	//answer[1] = 2;
	//_answer[2] = 1;
	//_answer[3] = 5;

	_answer[0] = rand() % 9 + 1;
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

	//어떻게 해야할지 정 모르겠다면 여기서 그냥 입력값 집어 넣어라
	//_input[0] = 1;
	//_input[1] = 2;
	//_input[2] = 3;
	//_input[3] = 4;

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
		getPlayerAnswer(); //자신을 다시 불러옴, 함수 재실행

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

void gameLoop()
{
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
}
int main() 
{
	//main문은 최대한 깔끔하게 !
	srand(time(NULL));
	//1. 임의의 정답 생성.
	generateRandomAnswer();
	gameLoop();

	return 0;

	//반복
		//2. 플레이어에게 숫자 네자리를 입력받기
		//3. input과 answer를 비교하여, strike, ball 로직 판정
		//4. 결과창 보여주기
		//5. 4strike이면 게임종료

	//계속 하다 보면 무엇이든 만들 수 있겠다 라는 생각이 든다.
	//그 이후엔 그럼 어떤 코드가 좋은 코드일까. 라는 생각이 드는데
	// 보통 좋은 코드라 하면 다음 요소를 고려한다.
	// - 가독성(유지보수성)
	// - 최적화
	// 그 외 등등 
	
	// 지금은 가독성에 대해 말하자면
	// 가독성
	// - 짧은줄 수, 짧은 로직 안에 짰다. (명확한 이름으로 함수를 만들었다.)
	// -
}