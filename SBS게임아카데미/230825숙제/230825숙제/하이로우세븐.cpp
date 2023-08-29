#include <iostream>
#include <time.h>
#include <Windows.h>
//콘솔에서의 키보드 관련된 헤더
#include <conio.h> // console input output
using namespace std;

int _money;
int _betMoney;
int _betState;
int _card[52];
int _cardNum;

enum eCardShape {
	SPADE,
	DIAMOND,
	HART,
	CLOVER,
	END
};

void Gotoxy(int x, int y)
{

	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursor(bool isShow)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (isShow)
	{
		cursorInfo.bVisible = TRUE;
		cursorInfo.dwSize = 10;
	}
	else
	{
		cursorInfo.bVisible = FALSE;
		cursorInfo.dwSize = 10;
	}

	SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void GenerateCard()
{
	//카드 생성
	for (int i = 0; i < 52; i++)
	{
		_card[i] = i + 1;
	}

	//카드 셔플
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = _card[num1];
		_card[num1] = _card[num2];
		_card[num2] = temp;
	}

	//게임을 위한 카드 순서
	//4장을 보여주고 시작히니 4부터 시작
	_cardNum = 4;
}

//카드 출력
void PrintCard(int cardNum)
{
	int shape = _card[cardNum] / 13;
	switch (shape)
	{
	case eCardShape::SPADE:
		cout << "♠";
		break;
	case eCardShape::DIAMOND:
		cout << "◇";
		break;
	case eCardShape::HART:
		cout << "♡";
		break;
	case eCardShape::CLOVER:
		cout << "♣";
		break;
	default:
		break;
	}

	int num = _card[cardNum] % 13 + 1;
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
	cout << " ";
}

//베팅 요소 선택
void Betting()
{
	//현재 골드 : 1000
	//♤A ♧K ♧3 ♤2 ??
	//베팅 금액을 정해주세요. : 
	//베팅 유형을 골라주세요 ( 0: 하이, 1: 로우, 2: 세븐)
	cout << "현재 골드 : " << _money << endl;
	PrintCard(_cardNum - 3);
	PrintCard(_cardNum - 2);
	PrintCard(_cardNum - 1);
	PrintCard(_cardNum);
	cout << "??" << endl;

	cout << "베팅 금액을 정해주세요 : ";
	cin >> _betMoney;
	while(_betMoney > _money)
	{
		cout << "소지금을 초과한 금액은 베팅할 수 없습니다." << endl;
		cout << "다시 베팅 금액을 정해주세요 : " << endl;
		cin >> _betMoney;
	}
	_money -= _betMoney;

	cout << "베팅 유형을 골라주세요 ( 0 : 하이, 1 : 로우, 2 : 세븐) : ";
	cin >> _betState;

}

//하이로우세븐 여부 출력
void IsHighLowSeven(int num)
{
	if (num > 7)
	{
		cout << "하이" << endl;
	}
	else if (num < 7)
	{
		cout << "로우" << endl;
	}
	else
	{
		cout << "세븐" << endl;
	}
}

//결과 출력
void ShowResult()
{
	//하이 => ?? 숫자가 7보다 크면 베팅금액 * 2
	//로우 => ?? 숫자가 7보다 작으면 베팅금액 * 2
	//세븐 => ?? 숫자가 7이면 베팅금액 * 10

	cout << "결과 : ";
	PrintCard(_cardNum);

	int num = _card[_cardNum] % 13 + 1;

	IsHighLowSeven(num);

	//하이를 맞춘 경우
	if (num > 7 && _betState == 0)
	{
		cout << "하이를 맞추셨습니다. " << endl;
		_money += _betMoney * 2;
	}
	else if (num < 7 && _betState == 1)
	{
		cout << "로우를 맞추셨습니다. " << endl;
		_money += _betMoney * 2;
	}
	else if (num == 7 && _betState == 2)
	{
		cout << "세븐을 맞추셨습니다!! " << endl;
		_money += _betMoney * 10;
	}
}

void main()
{
	//하이로우세븐

	//게임시작
	//플레이어 초기자본 : 1000골드
	//맨위에서 4장이 화면에 보여진다
	//마지막카드는 ??
	srand(time(NULL));
	SetCursor(false);

	cout << "게임을 시작합니다." << endl;
	_money = 1000;
	_betMoney = 0;

	//카드 생성
	GenerateCard();

	system("pause");

	//반복
	while (true)
	{
		system("cls");

		Betting();

		_cardNum++;

		ShowResult();

		//소유금액이 0원 이하거나 카드를 끝까지 봤으면 게임 종료
		if (_money < 0 || _cardNum == 51)
		{
			break;
		}

		system("pause");
	}


	//◆4
	//로우! 플레이어 승리! 
	//현재 얼마!

	//현재 골드 : 1000
	//♧K ♧3 ♤2 ◆4 ??
	//베팅 금액을 정해주세요. : 
	//베팅 유형을 골라주세요 ( 0: 하이, 1: 로우, 2: 세븐)

	//플레이어 골드가 0원이거나, 52장을 다 소진했으면.. 게임끝.
}