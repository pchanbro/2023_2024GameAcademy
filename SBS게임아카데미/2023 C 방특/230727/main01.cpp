#include <iostream>
#include <time.h>
using namespace std;

struct Player 
{
	int hp;
	int damage;
};

struct Monster
{
	int hp;
	int damage;
};
int main()
{
	//기초 스펙
	//몬스터 1대,
	//나 1대
	//때리기

	Player player = { 1000, 10 };//이런식으로 중괄호를 통해 구조체의 각각의 요소를 초기화하며 선언 가능
	Monster monster;
	monster.hp = 20;
	monster.damage = 10;

	while (0 < monster.hp && 0 < player.hp)
	{
		cout << "캐릭터 Hp : " << player.hp << endl;
		cout << "몬스터 Hp : " << player.hp << endl;

		cout << "캐릭터가 공격했습니다. " << endl;
		//monster.hp = monster.hp - Plyer.damage;
		monster.hp -= player.damage;

		cout << "몬스터가 공격했습니다. " << endl;
		player.hp -= monster.damage;
	}
	if (player.hp <= 0)
	{
		cout << "플레이어 사망" << endl;
	}
	else
	{
		cout << "플레이어 승리" << endl;
	}
	return 0;
}