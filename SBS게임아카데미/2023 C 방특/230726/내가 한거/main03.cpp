#include <iostream>>
using namespace std;

// enum
// int, float, char, bool

// ����� ���� �ڷ���
// enum(������), struc(����ü) (c/c++��������) typedef

typedef int Damage; //�ڵ�� int�� MyNumber�� ��� ���� - �ڵ� �������� ���� �����
typedef int Hp;

struct monster
{
	Damage damage;
	Hp hp;
	float attackSpeed;
};



int main()
{
	monster slime;
	slime.damage = 10;
	slime.hp = 100;
	slime.attackSpeed = 1.0;

	cout << "[������ ���� ���]" << endl;
	cout << "ü�� : " << slime.hp << endl;
	cout << "������ : " << slime.damage << endl;
	cout << "���ݼӵ� : " << slime.attackSpeed << endl;

	//���� : 
	// �⺻ ���� : 
	// �� ĳ����
	// ��ǻ�� ĳ����
	// ���� �� �� ������,
	// ��ǻ�Ͱ� �� �� ������ �ݺ�
	// ������ ���� �� ����

	// +
	// GetTickCount64() �Լ�
	// ���ݼӵ� ���
	// �� ������ ������ �� �� ������

	// +
	// �⺻���� x ��ų ���(��ų�� �� ������)

	// + 
	// CustomConsole ����ؼ�
	// �ִϸ��̼� �־��
	return 0;
}