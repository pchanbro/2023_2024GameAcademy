#include <iostream>
using namespace std;

//C++ [구조체 == 클래스]
//C에서는 구조체안에 함수 사용 불가능
//C++에서는 구조체안에 함수 사용 가능
struct Unit
{
	char name[250];
	int hp;
	int damage;

	void Attack(Unit& target)
	{
		//target.hp -= damage;
		target.hp -= this->damage;
	}

	void PrintStat()
	{
		cout << "Name : " << name << endl;
		cout << "Hp : " << hp << endl;
		cout << "Damage : " << this->damage << endl;
	}
};

void Attack(Unit attacker, Unit& target)
{
	target.hp -= attacker.damage;
}

int main()
{
	Unit player;
	strcpy_s(player.name, "플레이어");
	player.hp = 100;
	player.damage = 10;

	Unit monster;
	strcpy_s(monster.name, "몬스터");
	monster.hp = 10;
	monster.damage = 4;

	player.Attack(monster);
	Attack(player, monster);

	player.PrintStat();
	monster.PrintStat();


	return 0;
}