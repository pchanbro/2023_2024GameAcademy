#include <iostream>

using namespace std;
void printCard()
{
	cout << "Print Card ����" << endl;
}
void printRCP(int hand)
{
	switch (hand)
	{
	case 0: 
		cout << "����" << endl;
		break;
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "��" << endl;
		break;
	}
}

int main() 
{
	//�Լ�
	//�ݺ��Ǵ� �۾��� �ٿ��ֱ����� ���
	printCard();
	//Cout << "Print Card ����" << endl;
	return 0;
}