#include <iostream>
#include <time.h>
//��ũ��
#define MYVALUE_SCISSOR 0 //����� �빮�ڷ� ���ִ°� �����̴�
#define MYVALUE_ROCK 1
#define MYVALUE_PAPER 2

using namespace std;

//enum 

//�ڷ��� 
//�⺻ �ڷ���
//int bool char float

//����� ���� �ڷ���
//enum, class, struct

//enum ������ �տ� e�� �ٿ��ش�.
enum eRockScissorPaper
{
	SCISSOR,
	ROCK,
	PAPER
};

int main()
{
	//�������� ����
	//�ڷ��� ������ = ��;
	eRockScissorPaper a = SCISSOR;

	int myVar2 = ROCK;
	//���� ���� ���� enum���� ROCK, SCISSOR, PAPER�� ����� ���⿡ ������
	
	return 0;
}