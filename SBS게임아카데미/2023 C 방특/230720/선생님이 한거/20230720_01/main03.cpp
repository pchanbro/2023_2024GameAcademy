#include  <iostream>
using namespace std;

//void 함수명(값)
//{
//}
void printCard(int cardNum)
{
	switch (cardNum / 13)
	{
	case 0:
		cout << "♠";
		break;
	case 1:
		cout << "◇";
		break;
	case 2:
		cout << "♡";
		break;
	case 3:
		cout << "♣";
		break;
	default:
		break;
	}

	int num = cardNum % 13 + 1;
	switch (num)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << num;
		break;
	}
}


void main()
{
	srand(time(NULL));
	int card[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = card[num1];
		card[num1] = card[num2];
		card[num2] = temp;
	}

	for (int i = 0; i < 52; i++)
	{
		//함수
		//반복되는 작업을 줄여주기위해 사용
		printCard(card[i]);
		cout << endl;
	}

}