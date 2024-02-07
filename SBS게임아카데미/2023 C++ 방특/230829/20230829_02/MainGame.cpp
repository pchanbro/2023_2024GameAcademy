#include "main.h"
#include "MainGame.h"
#include "CardUtil.h"

//초기화
void MainGame::Init()
{
	srand(time(NULL));
	//_card 초기화
	//배열은 항상 for문과함께
	for (int i = 0; i < 52; i++)
	{
		_card[i] = i;
	}
	_playerBet = 0;
	//0 => 하이, 1 => 로우, 2 => 세븐, 3 => 베팅안함.
	_betChoice = eBetChoice::BETCHOICE_END;
	//앞에 0,1,2,3 은 화면에 보여주고 시작하기 때문,
	_currentCardIndex = 4;


	//카드섞기
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;
		int temp = _card[num1];
		_card[num1] = _card[num2];
		_card[num2] = temp;
	}

	_playerGold = 10000;
}

void MainGame::Update()
{
	system("cls");

	//디버그용 출력
	//for (int i = 0; i < 52; i++)
	//{
	//	PrintCard(_card[i]);
	//	cout << endl;
	//}

	// 앞에 4장 출력
	//	 _card[_currentCardIndex - 4]
	//	 _card[_currentCardIndex - 3]
	//   _card[_currentCardIndex - 2]
	//   _card[_currentCardIndex - 1]
	// 뒤에 ?? 카드 출력
	
	// 플레이어 베팅하시겠습니까? 출력
	// 0, 1 받고
	// 베팅을 한다면
	// 베팅 타입 정하기
	// 0(하이) 1(로우) 2(세븐)
	// 베팅금액 설정
	// _card[_currentCardIndex] 의 카드 숫자가
	// 7과 같고 SEVEN을 선택하면
	//		10배수령
	// 7보다 작고 LOW를 선택했다면
	//		2배수령
	// 7보다 작고 HIGH를 선택했다면
	//		2배 수령
	// 그렇지않다면
	//		아쉽네요 ㅠㅠ 출력


	// 앞에 4장 출력
	//	 _card[_currentCardIndex - 4]
	//	 _card[_currentCardIndex - 3]
	//   _card[_currentCardIndex - 2]
	//   _card[_currentCardIndex - 1]
	// 뒤에 ?? 카드 출력
	cout << "펼쳐진 카드 : ";
	for (int i = 4; i >= 1; i--)
	{
		PrintCard(_card[_currentCardIndex - i]);
		cout << "\t";
	}
	cout << "??" << endl;

	cout << "플레이어 현재 골드 : " << _playerGold << endl;

	// 플레이어 베팅하시겠습니까? 출력
	cout << "플레이어 베팅하시겠습니까? (0: 베팅한다. 1: 베팅안한다.)" << endl;
	int input;
	cin >> input;
	if (input == 0)
	{
		//베팅 타입 정하기
		// 0(하이) 1(로우) 2(세븐)
		// 베팅금액 설정

		cout << "베팅타입을 정해주세요. (0:하이, 1:로우, 2:세븐) :" << endl;
		cin >> _betChoice;

		cout << "베팅 금액을 설정해주세요 : " << endl;
		cin >> _playerBet;

		if (_playerGold < _playerBet)
		{
			_playerBet = _playerGold;
		}

		//베팅한만큼 돈 차감
		_playerGold -= _playerBet;
	}
	else 
	{
		_betChoice = eBetChoice::BETCHOICE_NOBET;
	}



	// _card[_currentCardIndex] 의 카드 숫자가
	// 7과 같고 SEVEN을 선택하면
	//		10배수령
	// 7보다 작고 LOW를 선택했다면
	//		2배수령
	// 7보다 작고 HIGH를 선택했다면
	//		2배 수령
	// 그렇지않다면
	//		아쉽네요 ㅠㅠ 출력
	cout << "이번 카드 : ";
	PrintCard(_card[_currentCardIndex]);
	cout << endl;

	int cardNum = _card[_currentCardIndex] % 13 + 1;
	if (cardNum == 7 && _betChoice == eBetChoice::BETCHOICE_SEVEN)
	{
		cout << "### 축하합니다. ###" << endl;
		_playerGold += _playerBet * 10;
	}
	else if (cardNum < 7 && _betChoice == eBetChoice::BETCHOICE_LOW)
	{
		cout << "축하합니다." << endl;
		_playerGold += _playerBet * 2;
	}
	else if (7 < cardNum && _betChoice == eBetChoice::BETCHOICE_HIGH)
	{
		cout << "축하합니다." << endl;
		_playerGold += _playerBet * 2;
	}
	else
	{
		cout << "아쉽네요 ㅠㅠ" << endl;
	}
	_currentCardIndex++;


	system("pause");
}

bool MainGame::IsGameEnd()
{
	return _currentCardIndex == 52 || _playerGold <= 0;
}


//해제
void MainGame::Release()
{
}
