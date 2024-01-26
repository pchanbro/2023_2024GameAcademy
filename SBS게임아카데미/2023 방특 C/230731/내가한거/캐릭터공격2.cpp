#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define COMPLIED_CONSOLE
#include "TConsole.h"

tvision::TConsole tvision::TConsole::theInstance;

#define CustomConsole tvision ::TConsole::GetConsole()
using namespace std;

//캐릭터의 능력치
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

//플레이어와 컴퓨터 캐릭터 선언
Unit Player;
Unit Monster;


//캐릭터 기본 스펙 설정
void setCharacter(Unit& unit, float inputAttackSpeed, int x, int y, int width, int height)
{
	unit.hp = 100;
	//데미지는 공격 시 마다 범위 안에서 변경되기 위해 공격 전에 값을 넣어줌
	unit.attackDamage = 0;
	unit.skillDamage = 0;
	unit.attackSpeed = inputAttackSpeed;
	unit.x = x;
	unit.y = y;
	unit.width = width;
	unit.height = height;
}

//캐릭터 체력 상태 표시
void showStat(Unit player, Unit monster)
{
	cout << "플레이어 체력 : " << player.hp << endl;
	cout << "몬스터 체력 : " << monster.hp << endl;
}

//유닛의 공격
void attack(Unit& attacker, Unit& target)
{
	if (3000.0 <= (float)(GetTickCount() - attacker.attackCheckTime) * attacker.attackSpeed)
	{
		attacker.attackCheckTime = GetTickCount();
		attacker.skillGage++;

		//3번째 공격 마다 스킬 사용
		if (attacker.skillGage == 3)
		{
			attacker.skillGage = 0;
			//플레이어의 스킬 공격(스킬 데미지 : 11 ~ 20)
			attacker.skillDamage = rand() % 10 + 11;
			cout << attacker.hp/*여기에이름넣기*/ << "의 스킬 공격! " << attacker.skillDamage << "데미지로 공격하였습니다. " << endl;
			target.hp -= attacker.skillDamage;

			showStat(attacker, target);
		}
		else
		{
			//플레이어의 일반 공격(데미지 1 ~ 10)
			attacker.attackDamage = rand() % 10 + 1;
			cout << attacker.hp/*여기에이름넣기*/ << "가 " << attacker.attackDamage << "데미지로 공격하였습니다. " << endl;
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

//플레이어의 캐릭터와 컴퓨터의 캐릭터 전투
void battle()
{
	Player.attackCheckTime = GetTickCount();
	Player.renderCheckTime = GetTickCount();
	Monster.attackCheckTime = GetTickCount();

	Player.skillGage = 0;
	Monster.skillGage = 0;

	//플레이어나 몬스터의 hp가 0이하가 될 때 까지
	while (Player.hp > 0 && Monster.hp > 0)
	{

		//1초에 3번 변경
		if (GetTickCount64() - Player.renderCheckTime >= 3000 / (3 * Player.attackSpeed))
		{
			Player.renderCheckTime = GetTickCount64();
			++Player.renderIndex %= 3;
			RenderCharacter(Player);
		}

		//플레이어의 스피드가 2이기 때문에 공격은 0.5초에 한 번씩 공격
		attack(Player, Monster);

		//플레이어가 몬스터의 체력을 0 이하로 만들면 승리
		if (Monster.hp <= 0)
		{
			cout << "컴퓨터의 hp가 0 이하가 되었습니다." << endl;
			cout << "플레이어의 승리" << endl;
			return;
		}

		//몬스터의 스피드가 1이기 때문에 공격은 1초에 한 번씩
		attack(Monster, Player);

		//몬스터가 플레이어의 체력을 0 이하로 만들면 패배
		if (Player.hp <= 0)
		{
			cout << "플레이어의 hp가 0 이하가 되었습니다." << endl;
			cout << "플레이어의 패배" << endl;
			return;
		}
	}
}

int main()
{
	// 기본 스펙 : 
	// 내 캐릭터
	// 컴퓨터 캐릭터
	// 내가 한 대 때리고,
	// 컴퓨터가 한 대 떄리고 반복
	// 누군가 죽을 때 까지
	// 데미지는 범위 안에서 변경

	// +
	// GetTickCount64() 함수
	// 공격속도 계산
	// 내 공속이 빠르면 두 대 때리고

	// +
	// 기본공격 x 스킬 사용(스킬은 더 강력함)

	// + 
	// CustomConsole 사용해서
	// 애니메이션 넣어보기

	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	srand(time(NULL));
	setCharacter(Player, 2, 0, 0, 22, 22);
	setCharacter(Monster, 1, 0, 0, 22, 22);

	battle();
	return 0;
}