#include <iostream>
#include <time.h>
using namespace std;

enum eCardShape {
	SPADE,
	DIA,
	HART,
	CLOVER,
	END
};

void Suffle(int cardArr[])
{
	for (int i = 0; i < 100000; i++)
	{
		int temp;
		int num1 = rand() % 52;
		int num2 = rand() % 52;

		temp = cardArr[num1];
		cardArr[num1] = cardArr[num2];
		cardArr[num2] = temp;
	}
}

void PrintCard(int card)
{
	int shape = card / 13;
	switch (shape)
	{
	case eCardShape::SPADE : 
		cout << "♤";
		break;
	case eCardShape::DIA:
		cout << "◆";
		break;
	case eCardShape::HART:
		cout << "♥";
		break;
	case eCardShape::CLOVER:
		cout << "♧";
		break;
	}

	int num = card % 13 + 1;
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
	//카드뭉치
	int cardArr[52] = {};

	//카드뭉치 초기화

	for (int i = 0; i < 52; i++)
	{
		// 0 ~ 12 = > ♤A ~ ♤K
		// 13 ~ 25 = > ◆A ~ ◆K
		// 26 ~ 38 = > ♥A ~ ♥K
		// 39 ~ 51 = > ♧A ~ ♧K
		cardArr[i] = i;

	}

	//카드섞기
	Suffle(cardArr);

	//카드 뭉치 그리기
	for (int i = 0; i < 52; i++)
	{
		PrintCard(cardArr[i]);
		cout << endl;
	}

	int playerCard = cardArr[0];
	int comCard = cardArr[1];

	cout << "내가 집은 카드 : ";
	PrintCard(playerCard);
	cout << endl;

	cout << "컴퓨터가 집은 카드 : ";
	PrintCard(comCard);
	cout << endl;


	int playerCardNumber = playerCard % 13 + 1;
	int comCardNumber = comCard % 13 + 1;
	if (playerCardNumber  < comCardNumber) //if 문 안에 식을 넣어주면 번잡하니 그 전에 깔끔하게 정리해서 넣어주자
	{
		cout << "패배 " << endl;
	}
	else if (playerCardNumber > comCardNumber)
	{
		cout << "승리 " << endl;
	}
	else
	{
		cout << "무승부" << endl;
	}

}

//숙제 1 빙고 타임어택 20분

//2. 하이로우세븐 (구현 이후 꾸밀 수 있을 만큼 꾸미기)

//하이로우세븐 (다음과 같이 보이도록 만들어라)
// 게임시작
// 플레이어 초기자본 : 1000골드
// 맨위에서 4장이 화면에 보여진다
// 마지막 카드는 ??

// ♤A ♧K ♧3 ♤2 ??
// 베팅 금액을 정해주세요. :
// 베팅 유형을 골라주세요 ( 0 : 하이, 1 : 로우, 2 : 세븐)
// 하이 => ?? 숫자가 7보다 크면 베팅금액 * 2
// 로우 => ?? 숫자가 7보다 작으면 베팅금액 * 2
// 세븐 => ?? 숫자가 7이면 베팅금액 * 10

//◆4
// 로우 ! 플레이어 승리!
// 현재 얼마!

//현재 골드 1000
//♧K ♧3 ♤2 ◆4 ??
// 베팅 금액을 정해주세요. :
// 베팅 유형을 골라주세요 ( 0 : 하이, 1 : 로우, 2 : 세븐)

//플레이어 골드가 0원이거나, 52장을 다 소진했으면(처음에 보여지는 4장은 이미 소진되었다고 보면 됨).. 게임 끝