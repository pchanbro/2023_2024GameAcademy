#pragma once
enum eBetChoice
{
	BETCHIOICE_HIGH,
	BETCHIOICE_LOW,
	BETCHIOICE_SEVEN,
	BETCHIOICE_NOBET,
	BETCHIOICE_END
};
class MainGame
{
public: //구조체랑 똑같아지려면 public 붙여줘야함
	//--------------------------
	// 하이로우세븐에 필요한내용
	//--------------------------
	//Card 52장
	//플레이어 베팅금액
	//플레이어가 어디에 걸었는지
	//현재 카드 인덱스
	int _card[52];
	int _playerBet;
	int _betChoice;
	int _currentCardIndex;
	int _playerGold;
	//초기화
	void Init();
	//업데이트
	void Updata();
	//해제 
	void Release();

	//게임이 끝났는지 체크
	bool IsGameEnd();
};

