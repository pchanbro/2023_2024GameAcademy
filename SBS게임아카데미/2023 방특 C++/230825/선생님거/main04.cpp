#include <iostream>
#include <time.h>
using namespace std;
enum eCardShape {
	SPACE,
	DIAMOND,
	HEART,
	CLOVER,
	END
};

void PrintCard(int card)
{
	//카드 그리기
	/*switch (card)
	{
	case 0:
		cout << "♤A";
		break;
	case 1:
		cout << "♤2";
		break;
	case 2:
		cout << "♤3";
		break;
	default:
		break;
	}*/

	int shape = card / 13;
	//0~12 => ♤A ~ ♤K ==> 0
	//13~25 => ◆A ~ ◆K ==> 1
	//26~38 => ♥A ~ ♥K ==> 2
	//39~51 => ♧A ~ ♧K ==> 3

	switch (shape)
	{
	case eCardShape::SPACE:
		cout << "♤";
		break;
	case eCardShape::DIAMOND:
		cout << "◆";
		break;
	case eCardShape::HEART:
		cout << "♥";
		break;
	case eCardShape::CLOVER:
		cout << "♧";
		break;
	default:
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
	//♤A ~ ♧K (52장으로 구성된 트럼프카드)

	//카드뭉치
	int cardArr[52] = {};

	//카드뭉치 초기화
	for (int i = 0; i < 52; i++)
	{
		//약속
		//0~12 => ♤A ~ ♤K
		//13~25 => ◆A ~ ◆K
		//26~38 => ♥A ~ ♥K
		//39~51 => ♧A ~ ♧K
		cardArr[i] = i;

		//가위바위보
		//hand => 0 
		//가위바로 부를게
	}

	//카드섞기
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = cardArr[num1];
		cardArr[num1] = cardArr[num2];
		cardArr[num2] = temp;
	}

	//카드 뭉치 그리기
	for (int i = 0; i < 52; i++)
	{
		PrintCard(cardArr[i]);
		cout << endl;
	}

	//내가 짚은 카드 : ◆7
	//상대가 짚은 카드 : ♧3
	//나의 승리!
	int playerCard = cardArr[0];
	int comCard = cardArr[1];

	cout << "내가 짚은 카드 : ";
	PrintCard(playerCard);
	cout << endl;

	cout << "상대가 짚은 카드 : ";
	PrintCard(comCard);
	cout << endl;

	int playerCardNumber = playerCard % 13 + 1;
	int comCardNumber = comCard % 13 + 1;
	if (playerCardNumber < comCardNumber)
	{
		cout << "패배" << endl;
	}
	else if (comCardNumber < playerCardNumber)
	{
		cout << "승리" << endl;
	}
	else
	{
		cout << "무승부" << endl;
	}
}

//하이로우세븐
//게임시작
//플레이어 초기자본 : 1000골드
//맨위에서 4장이 화면에 보여진다
//마지막카드는 ??

//현재 골드 : 1000
//♤A ♧K ♧3 ♤2 ??
//베팅 금액을 정해주세요. : 
//베팅 유형을 골라주세요 ( 0: 하이, 1: 로우, 2: 세븐)
//하이 => ?? 숫자가 7보다 크면 베팅금액 * 2
//로우 => ?? 숫자가 7보다 작으면 베팅금액 * 2
//세븐 => ?? 숫자가 7이면 베팅금액 * 10

//◆4
//로우! 플레이어 승리! 
//현재 얼마!

//현재 골드 : 1000
//♧K ♧3 ♤2 ◆4 ??
//베팅 금액을 정해주세요. : 
//베팅 유형을 골라주세요 ( 0: 하이, 1: 로우, 2: 세븐)

//플레이어 골드가 0원이거나, 52장을 다 소진했으면.. 게임끝.