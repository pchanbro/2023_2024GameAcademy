#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

struct Unit
{
	int hp;
	int damage;
	float attackSpeed;
	int attackLastTime;
};

void showStat(Unit player, Unit monster)
{
	system("cls");
	cout << "플레이어 체력 : " << player.hp << endl;
	cout << "몬스터 체력 : " << monster.hp << endl;
}

void attack(Unit& attacker, Unit& target)
{
	target.hp -= attacker.damage;
}

int main()
{
	//몬스터, 플레이어 공격 확장
	//공격속도대로 때리기
	Unit player = { 1000, 20, 2.0, 0 };
	Unit monster = { 500, 10, 0.5, 0 };

	int showStatLastTime = GetTickCount64();
	showStat(player, monster);

	while (player.hp >= 0 && monster.hp >= 0)
	{
		//공격 시간이되면, 때린다.

		//플레이어 공격
		//현재시간 - 마지막체크시간 >= 1초 이면, 
		
		//방정식
		// 1000ms : attackSpeed: ? 초 : 1
		// attackSpeed * ? = 1000ms
		// ? = 1000 / attackSpeed;
		if (GetTickCount64() - player.attackLastTime >= 1000 / player.attackSpeed)
		{
			//공격한다.
			attack(player, monster);
			cout << "플레이어가 공격했습니다." << endl;

			//마지막 체크시간 = 현재시간;
			player.attackLastTime = GetTickCount64();
		}

		if (GetTickCount64() - monster.attackLastTime >= 1000 / monster.attackSpeed)
		{
			//공격한다.
			attack(monster, player);
			cout << "몬스터가 공격했습니다." << endl;

			//마지막 체크시간 = 현재시간;
			monster.attackLastTime = GetTickCount64();
		}

		if (GetTickCount64() - showStatLastTime >= 1000)
		{
			showStat(player, monster);
			showStatLastTime = GetTickCount64();
		}
	}

	if (player.hp <= 0)
	{
		cout << "플레이어 사망" << endl;
	}
	else
	{
		cout << "플레이어 승리" << endl;
	}
}