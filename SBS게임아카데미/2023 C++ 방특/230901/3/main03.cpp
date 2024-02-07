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
	cout << "1. 플레이어의 Hp 를 정해주세요." << endl;
	cin >> player.Hp;
	cout << "2. 플레이어의 Damage 를 정해주세요." << endl;
	cin >> player.Damage;
	

	/*
	1. 몬스터 100마리를 vector에 담는다.
	2. 0번째 몬스터부터 플레이어와 계속싸운다.
	3. 플레이어가 한대때리고, 몬스터가 한대때리고
	4. 플레이어가 몇번째 몬스터까지 잡는지 체크하는 프로그램
	//  +  공격속도까지 추가
	*/

	//1. 몬스터 100마리를 vector에 담는다.
	vector<Unit> monsterManager;
	for (int i = 0; i < 100000; i++)
	{
		Unit monster;
		monster.Hp = rand() % 10 + 10;
		monster.Damage = rand() % 10 + 1;

		monsterManager.push_back(monster);
	}

	//2. 0번째 몬스터부터 플레이어와 계속싸운다.

	//만들때
	//여러개라서 힘든 경우
	//구현이 안된다
	//잘 생각이 안된다.
	//1개라고 생각하고 먼저 짠후에
	//2개라고 생각하고 이어서 짜보면
	//어느정도 연결고리가 보임.
	//그 연결고리를가지고 for문으로 바꿔주면됩니다
	//그러면 N개(다수개)도 모두 가능

	// 0번째 몬스터부터 플레이어와 계속싸운다.
	// 
	//while(전투가 끝나지 않았다면) 
	//	플레이어가 몬스터를 한대때린다
	//	MonsterHp -= PlayerDamage
	//	몬스터가 플레이어를 한대 때린다.
	//	PlayerHp -= MonsterDamage
	//	if( MonsterHp <= 0 ) 
	//		전투종료
	//	if( playerHP <= 0)
	//		전투종료

	//첫번째 몬스터 = monsterManager[0]
	bool isBattleEnd = false;
	int killCount = 0;
	
	//포문 => 
	//		몇번 반복한다 (게임 10판)
	//		배열과 함께쓸 때 (카드 52장 배열)
	//		N번 반복 (몬스터 N마리와의 싸움) (i => N)
	for (int i = 0; true; i++)
	{
		//N번째 몬스터와 플레이어의 싸움
		if (0 < player.Hp)
		{
			isBattleEnd = false;
			while (false == isBattleEnd)
			{
				cout << "플레이어가 몬스터를 한대 때린다" << endl;
				monsterManager[i].Hp -= player.Damage;

				cout << "몬스터가 플레이어를 한대 때린다." << endl;
				player.Hp -= monsterManager[i].Damage;

				if (monsterManager[i].Hp <= 0)
				{
					cout << "플레이어 승리" << endl;
					isBattleEnd = true;
					killCount++;
				}
				if (player.Hp <= 0)
				{
					cout << "몬스터 승리" << endl;
					isBattleEnd = true;
				}
			}
			cout << "플레이어가 죽인 횟수 : " << killCount << endl;
		}
	}




}