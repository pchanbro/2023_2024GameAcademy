#include <iostream>
#include <time.h>
using namespace std;

int _ball[45];

void setupBall()
{
	//45�� ���ڰ��� �غ��Ѵ�.
	for (int i = 0; i < 45; i++)
	{
		//1 ~ 45
		_ball[i] = i + 1;
	}

}

void shuffleBall()
{
	//45�� ���ڰ��� ���´�
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
	//�� �� 7���� ����Ѵ�.
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << "��° �� : " << _ball[i] << endl;
	}
}
int main()
{
	//�ζǹ�ȣ ������
	srand(time(NULL));

	setupBall();
	shuffleBall();
	takeBall7();

	return 0;
}