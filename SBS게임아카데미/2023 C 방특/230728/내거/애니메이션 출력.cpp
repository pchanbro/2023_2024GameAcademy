#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

struct Unit {
	int hp;
	int damage;
	float attackSpeed;
	int animationIndex;
	int animationGetTickCount;
};

Unit _player;
int main()
{
	//�ִϸ��̼� ���
	_player.hp = 100;
	_player.damage = 1;
	_player.animationIndex = 0;
	_player.animationGetTickCount = 0;

	return 0;
}