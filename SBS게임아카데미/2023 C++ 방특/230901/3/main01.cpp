#include <iostream>
#include <Windows.h>

using namespace std;

class MainGame
{

};
void main()
{
	//������ - �迭 �����Ҵ�
	
	int* ptrArr = nullptr;


	//�����ʹ� * �����ڸ� ����Ҽ��ִ�.
	//�����Ͱ� ����ִ� �ּҷ� �̵��Ͽ� ���� �����Ѵ�.
	//�ٸ� ���� �ּҶ��, ������ ���.
	//cout << *ptrArr << endl;


	//�����Ҵ�
	int* myNumber = new int(3);
	delete myNumber;
	myNumber = nullptr;

	MainGame* mainGame = new MainGame();
	delete mainGame;
	mainGame = nullptr;

	//�����Ҵ� - �迭
	int input;
	cout << "����� �����Է����ּ��� : ";
	cin >> input;
	//ERROR
	//int arr[input] = { 0, };
	//��Ÿ�ӵ��߿� ������ ���̸�ŭ �迭������ �Ұ����ϴ�.
	//������ �츮�� �˴� �����迭�� ���̰� �������� �ʴ�.

	int* ptrArr = new int[input] {0, };
	//new int[�迭ũ��] { �ʱ�ȭ ���� };

	//������ = �迭
	for (int i = 0; i < input; i++)
	{
		ptrArr[i] = i;
	}

	//�迭 = ������
	//�迭�� ������ �����ڸ� ����Ҽ��ִ�.
	int arr[52] = { 0, };
	for (int i = 0; i < 52; i++)
	{
		*(arr + i) = i;
	}

	//�����Ҵ�� ������ ��� ����
	delete [] ptrArr;
}