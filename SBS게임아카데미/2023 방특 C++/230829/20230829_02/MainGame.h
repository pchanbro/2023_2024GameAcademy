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
	// ���̷ο켼�쿡 �ʿ��ѳ���
	//---------------------------
	//	Card 52��
	//	�÷��̾� ���ñݾ�
	//	�÷��̾ ��� �ɾ�����
	//	���� ī�� �ε���
	int _card[52];
	int _playerBet;
	int _playerGold;
	int _betChoice;
	int _currentCardIndex;

	//�ʱ�ȭ
	void Init();
	//������Ʈ
	void Update();
	//����
	void Release();

	//������ �������� üũ
	bool IsGameEnd();
};

