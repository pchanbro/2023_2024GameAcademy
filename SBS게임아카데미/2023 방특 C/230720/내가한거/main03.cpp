#include <iostream>

using namespace std;
void printCard()
{
	cout << "Print Card 실행" << endl;
}
void printRCP(int hand)
{
	switch (hand)
	{
	case 0: 
		cout << "가위" << endl;
		break;
	case 1:
		cout << "바위" << endl;
		break;
	case 2:
		cout << "보" << endl;
		break;
	}
}

int main() 
{
	//함수
	//반복되는 작업을 줄여주기위해 사용
	printCard();
	//Cout << "Print Card 실행" << endl;
	return 0;
}