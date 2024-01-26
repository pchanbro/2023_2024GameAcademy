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
	cout << "�÷��̾� ü�� : " << player.hp << endl;
	cout << "���� ü�� : " << monster.hp << endl;
}

void attack(Unit& attacker, Unit& target)
{
	target.hp -= attacker.damage;
}

int main()
{
	//����, �÷��̾� ���� Ȯ��
	//���ݼӵ���� ������
	Unit player = { 1000, 20, 2.0, 0 };
	Unit monster = { 500, 10, 0.5, 0 };

	int showStatLastTime = GetTickCount64();
	showStat(player, monster);

	while (player.hp >= 0 && monster.hp >= 0)
	{
		//���� �ð��̵Ǹ�, ������.

		//�÷��̾� ����
		//����ð� - ������üũ�ð� >= 1�� �̸�, 
		
		//������
		// 1000ms : attackSpeed: ? �� : 1
		// attackSpeed * ? = 1000ms
		// ? = 1000 / attackSpeed;
		if (GetTickCount64() - player.attackLastTime >= 1000 / player.attackSpeed)
		{
			//�����Ѵ�.
			attack(player, monster);
			cout << "�÷��̾ �����߽��ϴ�." << endl;

			//������ üũ�ð� = ����ð�;
			player.attackLastTime = GetTickCount64();
		}

		if (GetTickCount64() - monster.attackLastTime >= 1000 / monster.attackSpeed)
		{
			//�����Ѵ�.
			attack(monster, player);
			cout << "���Ͱ� �����߽��ϴ�." << endl;

			//������ üũ�ð� = ����ð�;
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
		cout << "�÷��̾� ���" << endl;
	}
	else
	{
		cout << "�÷��̾� �¸�" << endl;
	}
}