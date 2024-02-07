#include <iostream>
#include <time.h>
using namespace std;

void printCard(int cardNum)
{
	switch (cardNum / 13)
	{
	case 0:
		cout << "♤";
		break;
	case 1:
		cout << "◆";
		break;
	case 2:
		cout << "♥";
		break;
	case 3:
		cout << "♧";
		break;
	default:
		break;
	}

	switch (cardNum % 13 + 1)
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
		cout << cardNum % 13 + 1;
		break;
	}
}

int main()
{
	//하이로우세븐
	
	//카드를 섞는다.
	//플레이어 골드 초기화 (10000원)
	//게임을 시작합니다. 문구출력
	//게임이 종료될때까지 반복
	//	베팅유무 선택
	//	베팅타입 선택
	//	카드공개
	//	베팅결과에따른 돈처리
	//	카드인덱스 증가
	//	카드가 마지막장이거나, 플레이어 골드가 없으면 게임 종료.

	int card[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	//카드를 섞는다.
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = card[num1];
		card[num1] = card[num2];
		card[num2] = temp;
	}
	int playerGold = 10000;
	int cardIndex = -1;
	cout << "게임을 시작합니다." << endl;
	while (true)
	{
		cardIndex++;
		if (52 <= cardIndex || playerGold <= 0)
		{
			break;
		}
		//	베팅유무 선택
		//	베팅타입 선택
		//	카드공개
		//	베팅결과에따른 돈처리
		//	카드인덱스 증가
		//	카드가 마지막장이거나, 플레이어 골드가 없으면 게임 종료.
		cout << "현재 플레이어 골드 : " << playerGold << endl;

		int betInput;
		cout << "베팅을 하시겠습니까? (0: 예, 1: 아니요)" << endl;
		cin >> betInput;
		playerGold -= 1000;

		if (betInput == 0)
		{
			//게임진행
			int betType;
			cout << "베팅 타입을 골라주세요. (0 : 하이, 1 : 로우, 2 : 세븐)" << endl;
			cin >> betType;

			printCard(card[cardIndex]);

			int cardNum = card[cardIndex] % 13 + 1;	//카드 숫자의 값은1~13
			if (betType == 0 && 7 < cardNum)
			{
				cout << "승리" << endl;
				playerGold += 2000;
			}
			else if (betType == 1 && cardNum < 7)
			{
				cout << "승리" << endl;
				playerGold += 2000;
			}
			else if (betType == 2 && cardNum == 7)
			{
				cout << "7 승리" << endl;
				playerGold += 10000;
			}
			else
			{
				cout << "패배" << endl;
			}
		}
		else
		{
			continue;
		}


	}



	return 0;
}