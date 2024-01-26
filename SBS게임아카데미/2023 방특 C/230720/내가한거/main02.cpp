#include <iostream>

using namespace std;

int main()
{
	//배열
	//트럼프카드
	int card[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	//00 ~ 12 ♠A ~ ♠K
	//13 ~ 25 ◆A ~ ◆K
	//26 ~ 38 ♥A ~ ♥K
	//39 ~ 52 ♣A ~ ♣K

	for (int i = 0; i < 52; i++)
	{
		//switch문
		//switch(값)
		//{
		//   case  보기:
		//       break;
		//{
		//  값이 보기와 같은곳을 찾아서 해당 내용을 실행한다.
		//  case와 break는 쌍을 이루어야 한다.
		switch (card[i] / 13)
		{
		case 0:
			cout << "♠";
			break;
		case 1:
			cout << "♠";
			break;
		case 2:
			cout << "♠";
			break;
		case 3:
			cout << "♠";
			break;
		default:
			break;

		}

		int num = card[i] % 13 + 1;
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

		cout << endl;

		/*
		if (card[i] / 13 == 0)
		{
			cout << "♠";
		}
		else if (card[i] / 13 == 1)
		{
			cout << "◆";
		}
		else if (card[i] / 13 == 2)
		{
			cout << "♥";
		}
		else if (card[i] / 13 == 3)
		{
			cout << "♣";
		}
		cout << card[i] % 13 + 1;
		cout << " ";

		if (card[i] % 13 == 12)
		{
			cout << endl;
		}
		*/

		int a = 3;
		int b = 1;
		//swap 로직
		int a = 3;
		int b = 1;
		int temp = a;
		a = b;
		b = temp;

		//shuffle
		//Swap을 여러번 10000번
		srand(time(NULL));
		for (int i = 0; i < 100000; i++)
		{
			int num1 = rand() % 52;
			int num2 = rand() % 52;
			int cardTemp = card[num1];
			card[num1] = card[num2];
			card[num1] = cardTemp;
		}
	}
	
	cout << "카드 셔플 완료" << endl;

	//숙제 
	//하이로우세븐
	//1. 플레이어가 1000원 들고 시작.
	//2. 매판 100원씩 베팅할지 안할지 선택
	//3. 카드 52장을 셔플하고
	//4. 베팅을 선택했다면, 카드 한장씩 꺼내서 그 값이 7이하인지, 7이상인지, 7이랑 같은지를 베팅
	//5. 베팅에 성공하면 배팅금의 2배 획득, 7베팅을 맞추면 10배 획득
	//6. 카드 52장이 다 끝나면 게임 종료 (아니면 소지금이 0원이하)

	//블랙잭
	//1. 베팅하면 게임 시작
	//2. 플레이어가 카드1장을 받음.
	//3. 딜러가 카드1장을 받음.
	//4. 플레이어가 Go, Stop 정하면,
	//5. Go를 누르면, 카드를 한장 더받음
	//6. 카드 숫자의 합이 21이 넘으면 패배
	//7. Stop을 외치면
	//8. 딜러가 카드 21이전까지 카드를 계속 받고,
	//9. 플레이어의 카드 숫자보다 딜러의 카드숫자가 높으면 플레이어 패배
	//10. 딜러의 카드숫자 합이 플레이어 카드숫자보다 낮으면 플레이어 승리

	return 0;
}