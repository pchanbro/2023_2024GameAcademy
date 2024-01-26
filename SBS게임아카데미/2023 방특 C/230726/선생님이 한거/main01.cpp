#include <iostream>
#include <time.h>
using namespace std;

int _ball[45];

void setupBall()
{
	//45개 숫자공을 준비한다.
	for (int i = 0; i < 45; i++)
	{
		//1 ~ 45
		_ball[i] = i + 1;
	}

}

void shuffleBall()
{
	//45개 숫자공을 섞는다
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 45;
		int num2 = rand() % 45;
		int temp = _ball[num1];
		_ball[num1] = _ball[num2];
		_ball[num2] = temp;
	}
}

void takeBall7()
{
	//이 중 7개를 출력한다.
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "번째 공 : " << _ball[i] << endl;
	}
}
int main()
{
	//로또번호 생성기
	srand(time(NULL));

	setupBall();
	shuffleBall();
	takeBall7();

	return 0;
}