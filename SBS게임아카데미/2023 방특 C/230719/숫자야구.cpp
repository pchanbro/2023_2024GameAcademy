#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	//숫자야구
	
	srand(time(NULL));
	int computerNumber[3] = { 0, };
	int playerNumber[3] = { 0, };

	//1. 컴퓨터의 숫자를 정해준다.
	//100의자리는 1~9 사이, 나머지 자리수는 0 ~ 9 사이
	computerNumber[0] = rand() % 9 + 1;
	computerNumber[1] = rand() % 10;
	computerNumber[2] = rand() % 10;

	//1-1. 같은 숫자가 반복되면, 숫자를 새로 뽑는다.
	while (computerNumber[0] == computerNumber[1] ||
		computerNumber[0] == computerNumber[2] ||
		computerNumber[1] == computerNumber[2]
		)
	{
		computerNumber[0] = rand() % 9 + 1;
		computerNumber[1] = rand() % 10;
		computerNumber[2] = rand() % 10;
	}

	cout << "computerNumber : " << computerNumber[0] << computerNumber[1] << computerNumber[2] << endl;

	//2. 사용자의 숫자를 입력받는다.
	int input;
	cin >> input;
	//3. 사용자의 숫자를 
	//  1의자리, 
	//	10의자리, 
	//	100의자리로 쪼갠다.
	playerNumber[0] = input / 100;
	playerNumber[1] = input / 10 % 10;
	playerNumber[2] = input % 10;
	//2-2.  같은 숫자가 반복되면, 숫자를 새로 고르게한다.
	while (playerNumber[0] == playerNumber[1] ||
		playerNumber[0] == playerNumber[2] ||
		playerNumber[1] == playerNumber[2]
		)
	{
		cout << "중복되는 숫자가 있습니다. 숫자를 새로 뽑아주세요." << endl;
		cin >> input;
		//3. 사용자의 숫자를 
		//  1의자리, 
		//	10의자리, 
		//	100의자리로 쪼갠다.
		playerNumber[0] = input / 100;
		playerNumber[1] = input / 10 % 10;
		playerNumber[2] = input % 10;
	}
	cout << "playerNumber : " << playerNumber[0] << playerNumber[1] << playerNumber[2] << endl;

	//4. strike, ball 로직을 추가한다.
	int strike = 0;
	int ball = 0;

	//자릿수와 그 값이 같다면 스트라이크
	//값은 같은데, 자릿수가 다르면 볼
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (playerNumber[i] == computerNumber[j])
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


	cout << strike << "스트라이크" << endl;
	cout << ball << "볼" << endl;

	return 0;
}