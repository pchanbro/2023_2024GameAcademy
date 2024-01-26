#pragma once
enum eBetChoice
{
	BETCHOICE_HIGH,
	BETCHOICE_LOW,
	BETCHOICE_SEVEN,
	BETCHOICE_NOBET,
	BETCHOICE_END
};
class MainGame
{
public:
	//---------------------------
	// 하이로우세븐에 필요한내용
	//---------------------------
	//	Card 52장
	//	플레이어 베팅금액
	//	플레이어가 어디에 걸었는지
	//	현재 카드 인덱스
	int _card[52];
	int _playerBet;
	int _playerGold;
	int _betChoice;
	int _currentCardIndex;

	//초기화
	void Init();
	//업데이트
	void Update();
	//해제
	void Release();

	//게임이 끝났는지 체크
	bool IsGameEnd();
};

