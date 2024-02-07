#include <iostream>
#include <time.h>
using namespace std;

//사이즈에 따라 정답 생성
void generateNumber(int size, int* answer) //int answer[] 대신에 int* answer로 사용해라
{
	answer[0] = rand() % 9 + 1;
	for (int i = 1; i < size; i++)
	{
		answer[i] = rand() % 10;
		int j = 0;
		while (true)
		{
			//중복되는 수가 없다면 break
			if (i == j)
			{
				break;
			}
			//중복되는 수가 있다면 그 자리의 수는 재생성
			else if (answer[i] == answer[j])
			{
				answer[i] = rand() % 10;
				j = 0;
			}
			else
			{
				j++;
			}
		}
	}


	for (int i = 0; i < size; i++)
	{
		cout << answer[i];
	}
	cout << endl;
}

//사용자의 input을 배열로 바꾸는 과정
void makeInputToArr(int input, int* inputArr, int size)
{
	int num = 1;
	int inputLengthCheck;

	//정답의 길이에 맞춰 num길이 증가
	for (int i = 1; i < size; i++)
	{
		num *= 10;
	}

	//이 변수가 1 ~ 9 의 값이라면 정답과 input의 길이가 같다는 것
	inputLengthCheck = input / num;

	//사용자의 input을 배열로 바꾸는 과정
	for (int i = 0; i < size; i++)
	{
		inputArr[i] = input / num;
		input %= num;
		num /= 10;
	}

	//정답에 이상이 있는경우 정답 재입력
	//정답과 입력의 길이가 다른 경우
	if (inputLengthCheck >= 10 || inputLengthCheck <= 0)
	{
		cout << "잘못된 입력입니다. " << size << "자리의 정답을 입력하세요 : ";
		cin >> input;
		makeInputToArr(input, inputArr, size);
	}


	for (int i = 0; i < size; i++)
	{
		cout << inputArr[i];
	}
	cout << endl;
}

//	생성된 숫자와 입력 숫자 비교
//	숫자만 같으면 ball + 1
//	숫자가 같고 자릴수도 같으면 strike + 1
//	숫자가 같은게 하나도 없으면 n아웃
bool isCorrect(int* inputArr, int* answer, int size)
{
	int ball = 0;
	int strike = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (inputArr[i] == answer[j])
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}

	if (strike == size)
	{
		return true;
	}
	else if (strike == 0 && ball == 0)
	{
		cout << size << "OUT !!!" << endl;
	}
	else
	{
		cout << "결과 : " << strike << "S " << ball << "B" << endl;
	}

	return false;

}

int main()
{
	//숫자야구 사이즈 입력으로 진행
	//숫자야구의 사이즈를 입력받는다(1 ~ 9)
	//사이즈에 따라 숫자를 생성한다.
	//반복
	//	정답을 입력받는다
	//	생성된 숫자와 입력 숫자 비교
	//	숫자만 같으면 ball + 1
	//	숫자가 같고 자릴수도 같으면 strike + 1
	//	숫자가 같은게 하나도 없으면 n아웃
	//	회 수 증가
	//9회가 지나거나 모든 숫자를 맞히면 게임 종료
	srand(time(NULL));
	int size;
	int round = 1;
	int input;
	int* inputArr = nullptr;
	int* answer = nullptr;
	

	cout << "게임을 시작합니다" << endl;

	//사이즈 입력
	cout << "숫자야구의 정답 갯수를 선택하세요 : (1 ~ 9 중 선택) ";
	cin >> size;
	while (size > 9 || size < 1)
	{
		cout << "잘못된 선택입니다 다시 선택하세요 : (1 ~ 9 중 선택)";
		cin >> size;
	}

	inputArr = new int[size] {}; //여기서 new int[size]{}; 처럼 뒤에 {}를 붙여주면 배열의 모든 요소가 0으로 초기화된다. 만일 {}를 써주지 않으면 배열에 쓰레기값들이 들어간다.
	answer = new int[size] {}; //마찬가지로 int a; 처럼 a를 선언하고 초기화하지 않으면 a에 쓰레기값이 들어간다.

	//숫자 생성
	generateNumber(size, answer);
	cout << "정답이 생성되었습니다." << endl;

	//게임 진행
	while (round < 10)
	{
		cout << size << "자리의 정답을 입력하세요 : (첫 자리의 0은 없는 숫자로 취급, 각 자리의 숫자는 서로 다른 0 ~ 9중 1가지 숫자이다.) ";
		cin >> input;
		//입력받은 수를 배열로 변경
		makeInputToArr(input, inputArr, size);

		//정답과 입력을 비교하여 결과 출력
		if (isCorrect(inputArr, answer, size))
		{
			cout << "정답!" << endl;
			break;
		}
		round++;
	}

	return 0;
}

//숙제 
//행맨 만들기


//#define _CRT_SECURE_NO_WARNINIGS

//char hangManAnswer[3][250];
//strcpy(hangManAnswer[0], "hangman");
//strcpy(hangManAnswer[0], "education");
//strcpy(hangManAnswer[0], "one");

//cout << "? ? ?" << endl;
//char input;
//cin >> input;
//cout << "? n ?";
//cout << "남은 기회 : 7"; 이런식으로 