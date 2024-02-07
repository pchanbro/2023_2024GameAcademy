#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

struct Unit
{
	int Hp;
	int Damage;
};

void main()
{
	srand(time(NULL));

	Unit player;
	cout << "1. �÷��̾��� Hp �� �����ּ���." << endl;
	cin >> player.Hp;
	cout << "2. �÷��̾��� Damage �� �����ּ���." << endl;
	cin >> player.Damage;
	

	/*
	1. ���� 100������ vector�� ��´�.
	2. 0��° ���ͺ��� �÷��̾�� ��ӽο��.
	3. �÷��̾ �Ѵ붧����, ���Ͱ� �Ѵ붧����
	4. �÷��̾ ���° ���ͱ��� ����� üũ�ϴ� ���α׷�
	//  +  ���ݼӵ����� �߰�
	*/

	//1. ���� 100������ vector�� ��´�.
	vector<Unit> monsterManager;
	for (int i = 0; i < 100000; i++)
	{
		Unit monster;
		monster.Hp = rand() % 10 + 10;
		monster.Damage = rand() % 10 + 1;

		monsterManager.push_back(monster);
	}

	//2. 0��° ���ͺ��� �÷��̾�� ��ӽο��.

	//���鶧
	//�������� ���� ���
	//������ �ȵȴ�
	//�� ������ �ȵȴ�.
	//1����� �����ϰ� ���� §�Ŀ�
	//2����� �����ϰ� �̾ ¥����
	//������� ������� ����.
	//�� ������������� for������ �ٲ��ָ�˴ϴ�
	//�׷��� N��(�ټ���)�� ��� ����

	// 0��° ���ͺ��� �÷��̾�� ��ӽο��.
	// 
	//while(������ ������ �ʾҴٸ�) 
	//	�÷��̾ ���͸� �Ѵ붧����
	//	MonsterHp -= PlayerDamage
	//	���Ͱ� �÷��̾ �Ѵ� ������.
	//	PlayerHp -= MonsterDamage
	//	if( MonsterHp <= 0 ) 
	//		��������
	//	if( playerHP <= 0)
	//		��������

	//ù��° ���� = monsterManager[0]
	bool isBattleEnd = false;
	int killCount = 0;
	
	//���� => 
	//		��� �ݺ��Ѵ� (���� 10��)
	//		�迭�� �Բ��� �� (ī�� 52�� �迭)
	//		N�� �ݺ� (���� N�������� �ο�) (i => N)
	for (int i = 0; true; i++)
	{
		//N��° ���Ϳ� �÷��̾��� �ο�
		if (0 < player.Hp)
		{
			isBattleEnd = false;
			while (false == isBattleEnd)
			{
				cout << "�÷��̾ ���͸� �Ѵ� ������" << endl;
				monsterManager[i].Hp -= player.Damage;

				cout << "���Ͱ� �÷��̾ �Ѵ� ������." << endl;
				player.Hp -= monsterManager[i].Damage;

				if (monsterManager[i].Hp <= 0)
				{
					cout << "�÷��̾� �¸�" << endl;
					isBattleEnd = true;
					killCount++;
				}
				if (player.Hp <= 0)
				{
					cout << "���� �¸�" << endl;
					isBattleEnd = true;
				}
			}
			cout << "�÷��̾ ���� Ƚ�� : " << killCount << endl;
		}
	}




}