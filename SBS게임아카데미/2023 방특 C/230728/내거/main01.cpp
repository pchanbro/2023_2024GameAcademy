#include <iostream>
using namespace std;


void Function1(int* card, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << card[i] << endl;
	}
}

struct A{

};

enum eRCP
{
	ROCK,
	SCISSOR,
	PAPER
};

int main() 
{
	// ��� ������ ���� �ּҸ� ������.
	// ������
	// - ������ �����ϸ� �޸� ���� ����ϴ� �ڷ���
	// - int* myPointer = &number;
	// - �޸� ���� ������ �� ���� �޶�����.
	// - �Լ�, ���� �Ҵ�
	
	float time = 0.1;
	cout << &time << endl;
	cout << &(*(&time)) << endl;
	int number = 3;
	cout << &number << endl;

	int card[5] = { 0, };
	Function1(card, 5);

	int* myPointer = &number;
	//float* a;
	//char* b;
	//bool* c;
	//void* d;
	A* e; //����ü�� ���� enum�� ����

	int* myPointer2 = card;//�迭�� ��������
	cout << *(myPointer2) << endl;
	//�迭, �������� �������
	// �迭 == �����ͷ� ���� �ϴ�.
	cout << "�迭, �������� �������" << endl;
	int arr[10] = { 0, };
	int* myPointer3 = arr;
	cout << myPointer3 << endl;
	cout << *myPointer3 << endl;
	cout << myPointer3[0] << endl;
	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr + 1) << endl;
	cout << *(myPointer3 + 1) << endl;
	cout << arr[1] << endl;
	
	//������� ������ ����

	int* myPointer4 = &number;
	float* a;	//==> �ּҰ�
	char* b;	//==> �ּҰ�
	bool* c;	//==> �ּҰ�
	void* d;	//==> �ּҰ�

	//Error�߻��� ��� 
	// (�ڷ��� ����ġ)
	// a = myPointer;
	int abc = eRCP::PAPER;
	cout << "Ȯ���غ���" << abc << endl;
	// eRCP rcp = 2;

	//������ �ڷ��� ��ȯ�ϸ� �����ϱ�� �� (�ڷ���)��;
	//������ �ѵ� ���� ��� ����
	a = (float*)myPointer4;
	eRCP rcp = (eRCP)2;

	int myNumber1 = 10 / 3;
	cout << myNumber1 << endl; // 3 ���
	cout << (float*)myNumber1 << endl; // �̰� ���� ������ �ȵǴµ� �ּ� ���̸�ŭ �տ��� ä���༭ 0000000003�̷������� ���°�
	cout << (float)myNumber1 << endl; //��� 3.0���� ������ ���� ������ �׳� cout�� �̻ڰ� ��Ÿ�� �ذ�
	printf("%f", (float)myNumber1);

	float myNumber2 = 10.0 / 3.0;
	cout << myNumber2 << endl; // 3.3333333���


	return 0;
}