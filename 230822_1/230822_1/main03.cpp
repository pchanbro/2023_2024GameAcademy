#include <iostream>
#include <time.h>
using namespace std;

struct Unit
{
	float Hp;
	float Damage;
};

void main()
{
	// ����1.
	// ���ھ߱�
	// ��ǻ�Ͱ� ������ ���ڸ� �̴´�.
	// �� �� ���ڰ� ��ġ�� �ʵ��� 4�ڸ��� ����
	// �� ù ���ڴ� 0 �Ұ�
	// ������� ���� �ݺ�
	//		����ڰ� ��ġ�� �ʴ� 4�ڸ� ���� �Է�
	//		������ ���� ��� 2593 �� �� ����ڰ� 2307�� �Է��ϸ� 1strike 1ball
	// 4strike�� �Ǹ� ����
	// ��������� 4strike�� ���� ����

	// ����ü 
	// �ڷ���
	// ����� ���� �ڷ���
	
	// �ڷ����� ����
	// 1. �⺻�ڷ���
	// 2. ����� ���� �ڷ���

	// 1. �⺻�ڷ���
	// c++���� �⺻������ �������ִ� �ڷ���
	// int, float, bool, char

	// 2. ��������� �ڷ��� (�̰� ����ڿ� ���� �ٸ��� �����ڵ忡 ���� �޶����� �����ڵ尡 �ſ��߿�)
	// ����ڰ� ���� �ǹ̸� �����ϰ� ������ �����Ͽ� ����ϴ� �ڷ���
	// struct, enum, class

	// ������ Hp, Damage�� �������Ѵ�.
	float Hp;
	float Damage;

	Unit monster;
	//float monsterHp
	//float monsterDamage

	//����
	monster.Hp = 100;
	monster.Damage = 23;

	//���� �ʱ�ȭ
	Unit slime = { 100, 10 };
	cout << "slime Hp : " << slime.Hp << endl;
	cout << "slime Damage : " << slime.Damage << endl;

	Unit hero = { 200, 7 };
	cout << "hero Hp : " << slime.Hp << endl;
	cout << "hero Damage : " << slime.Damage << endl;

	// �������� ����θ� �� �� ������ 
	// ����ΰ� �������� �� �� ������ ���� ����� 
	// �� �� �ϳ��� ���� ������ �ݺ�

	while (true)
	{
		cout << "�������� ����!" << endl;
		hero.Hp -= slime.Damage;
		cout << "������� Hp : " << hero.Hp << endl;
		cout << endl;

		if (hero.Hp < 0)
		{
			cout << "����� ���, ������ �¸�" << endl;
			break;
		}

		cout << "������� ����!" << endl;
		slime.Hp -= hero.Damage;
		cout << "�������� Hp : " << slime.Hp << endl;
		cout << endl;

		if (slime.Hp < 0)
		{
			cout << "������ ���, ����� �¸�" << endl;
			break;
		}
	}
}