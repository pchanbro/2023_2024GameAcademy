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
	//���� ����
	//���� 1��,
	//�� 1��
	//������

	Player player = { 1000, 10 };//�̷������� �߰�ȣ�� ���� ����ü�� ������ ��Ҹ� �ʱ�ȭ�ϸ� ���� ����
	Monster monster;
	monster.hp = 20;
	monster.damage = 10;

	while (0 < monster.hp && 0 < player.hp)
	{
		cout << "ĳ���� Hp : " << player.hp << endl;
		cout << "���� Hp : " << player.hp << endl;

		cout << "ĳ���Ͱ� �����߽��ϴ�. " << endl;
		//monster.hp = monster.hp - Plyer.damage;
		monster.hp -= player.damage;

		cout << "���Ͱ� �����߽��ϴ�. " << endl;
		player.hp -= monster.damage;
	}
	if (player.hp <= 0)
	{
		cout << "�÷��̾� ���" << endl;
	}
	else
	{
		cout << "�÷��̾� �¸�" << endl;
	}
	return 0;
}