#include <iostream>
using namespace std;

// �⺻ �ڷ���
// int, float, char, bool

// ����� ���� �ڷ���
// enum(������) , struct(����ü), class, C/C++ typedef


struct monster
{
	int damage;
	int hp;
	float attackSpeed;
};


int main()
{
	//C++
	//monster slime;
	//C 
	struct monster slime;
	slime.damage = 10;
	slime.hp = 100;
	slime.attackSpeed = 1.0;

	cout << "[������ ���� ���]" << endl;
	cout << "ü�� : " << slime.hp << endl;
	cout << "������ : " << slime.damage << endl;
	cout << "���ݼӵ� : " << slime.attackSpeed << endl;
	//printf("���ݼӵ� : %f\n", slime.attackSpeed);


	//���� : 
	// �⺻ ���� : 
	
	// ��		ĳ����,
	// ��ǻ��	ĳ���� 
	// ���� �Ѵ붧����,
	// ��ǻ�Ͱ� �Ѵ붧���� �ݺ�
	// ��������������

	// GetTickCount64() �Լ�
	// ���ݼӵ� ���
	// �������̺����� �δ붧����

	// + 
	// �⺻���� x ��ų�� ���Բ� (���ݽ� ����)
	
	// +
	// CustomConsole ����ؼ�
	// �ִϸ��̼Ǳ��� �־��






	return 0;
}