#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()
using namespace std;

//ĳ������ �ɷ�ġ
struct Unit {
	int hp;
	int attackDamage;
	int skillDamage;
	int skillGage;
	float attackSpeed;
	int attackCheckTime;
	int renderCheckTime;
	int renderIndex;
	int x, y, width, height;
	char name[256];
};

//�÷��̾�� ��ǻ�� ĳ���� ����
Unit Player;
Unit Monster;


//ĳ���� �⺻ ���� ����
void setCharacter(Unit& unit, float inputAttackSpeed, int x, int y, int width, int height)
{
	unit.hp = 100;
	//�������� ���� �� ���� ���� �ȿ��� ����Ǳ� ���� ���� ���� ���� �־���
	unit.attackDamage = 0;
	unit.skillDamage = 0;
	unit.attackSpeed = inputAttackSpeed;
	unit.x = x;
	unit.y = y;
	unit.width = width;
	unit.height = height;
}

//ĳ���� ü�� ���� ǥ��
void showStat(Unit player, Unit monster)
{
	cout << "�÷��̾� ü�� : " << player.hp << endl;
	cout << "���� ü�� : " << monster.hp << endl;
}

//������ ����
void attack(Unit& attacker, Unit& target)
{
	if (3000.0 <= (float)(GetTickCount() - attacker.attackCheckTime) * attacker.attackSpeed)
	{
		attacker.attackCheckTime = GetTickCount();
		attacker.skillGage++;

		//3��° ���� ���� ��ų ���
		if (attacker.skillGage == 3)
		{
			attacker.skillGage = 0;
			//�÷��̾��� ��ų ����(��ų ������ : 11 ~ 20)
			attacker.skillDamage = rand() % 10 + 11;
			cout << attacker.hp/*���⿡�̸��ֱ�*/ << "�� ��ų ����! " << attacker.skillDamage << "�������� �����Ͽ����ϴ�. " << endl;
			target.hp -= attacker.skillDamage;

			showStat(attacker, target);
		}
		else
		{
			//�÷��̾��� �Ϲ� ����(������ 1 ~ 10)
			attacker.attackDamage = rand() % 10 + 1;
			cout << attacker.hp/*���⿡�̸��ֱ�*/ << "�� " << attacker.attackDamage << "�������� �����Ͽ����ϴ�. " << endl;
			target.hp -= attacker.attackDamage;

			showStat(attacker, target);
		}
	}
}

void PrintString(int x, int y, const char str[])
{
	CustomConsole.GotoXY(x, y);
	cout << str;
}

void RenderCharacter(Unit unit)
{
	int x = unit.x;
	int y = unit.y;
	int width = unit.width;
	int height = unit.height;

	system("cls");

	CustomConsole.ClearArea(x, y, x + width, y + height);
	switch (unit.renderIndex)
	{
	case 0:
		PrintString(x, y++, "                ====@");
		PrintString(x, y++, "               =     @");
		PrintString(x, y++, "              =      @");
		PrintString(x, y++, "             =       @");
		PrintString(x, y++, "            =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "     =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
	case 1:
		PrintString(x, y++, "              ====@");
		PrintString(x, y++, "              =     @");
		PrintString(x, y++, "              =      @");
		PrintString(x, y++, "              =       @");
		PrintString(x, y++, "             =       @");
		PrintString(x, y++, "            =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
	case 2:
		PrintString(x, y++, "      ====@");
		PrintString(x, y++, "       =     @");
		PrintString(x, y++, "        =      @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "           =       @");
		PrintString(x, y++, "          =       @");
		PrintString(x, y++, "         =       @");
		PrintString(x, y++, "        =       @");
		PrintString(x, y++, "       =       @");
		PrintString(x, y++, "      =       @");
		PrintString(x, y++, "   @=       @");
		PrintString(x, y++, "  @ @      @");
		PrintString(x, y++, " @   @    @");
		PrintString(x, y++, "  @   @  @");
		PrintString(x, y++, "  @@   @@");
		PrintString(x, y++, " @  @   @");
		PrintString(x, y++, "@   @@ @");
		PrintString(x, y++, "@  @  @");
		PrintString(x, y++, " @@ ");
		break;
	default:
		break;
	}
	showStat(Player, Monster);
}

//�÷��̾��� ĳ���Ϳ� ��ǻ���� ĳ���� ����
void battle()
{
	Player.attackCheckTime = GetTickCount();
	Player.renderCheckTime = GetTickCount();
	Monster.attackCheckTime = GetTickCount();

	Player.skillGage = 0;
	Monster.skillGage = 0;

	//�÷��̾ ������ hp�� 0���ϰ� �� �� ����
	while (Player.hp > 0 && Monster.hp > 0)
	{

		//1�ʿ� 3�� ����
		if (GetTickCount64() - Player.renderCheckTime >= 3000 / (3 * Player.attackSpeed))
		{
			Player.renderCheckTime = GetTickCount64();
			++Player.renderIndex %= 3;
			RenderCharacter(Player);
		}

		//�÷��̾��� ���ǵ尡 2�̱� ������ ������ 0.5�ʿ� �� ���� ����
		attack(Player, Monster);

		//�÷��̾ ������ ü���� 0 ���Ϸ� ����� �¸�
		if (Monster.hp <= 0)
		{
			cout << "��ǻ���� hp�� 0 ���ϰ� �Ǿ����ϴ�." << endl;
			cout << "�÷��̾��� �¸�" << endl;
			return;
		}

		//������ ���ǵ尡 1�̱� ������ ������ 1�ʿ� �� ����
		attack(Monster, Player);

		//���Ͱ� �÷��̾��� ü���� 0 ���Ϸ� ����� �й�
		if (Player.hp <= 0)
		{
			cout << "�÷��̾��� hp�� 0 ���ϰ� �Ǿ����ϴ�." << endl;
			cout << "�÷��̾��� �й�" << endl;
			return;
		}
	}
}

int main()
{
	// �⺻ ���� : 
	// �� ĳ����
	// ��ǻ�� ĳ����
	// ���� �� �� ������,
	// ��ǻ�Ͱ� �� �� ������ �ݺ�
	// ������ ���� �� ����
	// �������� ���� �ȿ��� ����

	// +
	// GetTickCount64() �Լ�
	// ���ݼӵ� ���
	// �� ������ ������ �� �� ������

	// +
	// �⺻���� x ��ų ���(��ų�� �� ������)

	// + 
	// CustomConsole ����ؼ�
	// �ִϸ��̼� �־��

	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	srand(time(NULL));
	setCharacter(Player, 2, 0, 0, 22, 22);
	setCharacter(Monster, 1, 0, 0, 22, 22);

	battle();
	return 0;
}