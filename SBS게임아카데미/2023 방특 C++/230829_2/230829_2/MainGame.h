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
public: //����ü�� �Ȱ��������� public �ٿ������
	//--------------------------
	// ���̷ο켼�쿡 �ʿ��ѳ���
	//--------------------------
	//Card 52��
	//�÷��̾� ���ñݾ�
	//�÷��̾ ��� �ɾ�����
	//���� ī�� �ε���
	int _card[52];
	int _playerBet;
	int _betChoice;
	int _currentCardIndex;
	int _playerGold;
	//�ʱ�ȭ
	void Init();
	//������Ʈ
	void Updata();
	//���� 
	void Release();

	//������ �������� üũ
	bool IsGameEnd();
};

