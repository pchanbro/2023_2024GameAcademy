#include <iostream>
using namespace std;

void main()
{
	// �� ����
	// ==, !=, >, <, >=, <=

	int num1 = 1;
	int num2 = 2;

	// �� �ڷ��� (TRUE, FALSE) -> bool
	bool result1 = 1 == 2;	// 1�� 2�� ���� result �� false�� ����.
	bool result2 = 1 != 2;	// 1�� 2�� �ٸ��� result2 �� true�� ����.
	bool result3 = 1 > 2;	// 1�� 2���� ũ��
	bool result4 = 1 < 2;	// 1�� 2���� �۳�
	bool result5 = 1 >= 2;	// 1�� 2���� ũ�ų� ����
	bool result6 = 1 <= 2;	// 1�� 2���� �۰ų� ����

	cout << num1 << " == " << num2 << " = " << result1 << endl;
	cout << num1 << " != " << num2 << " != " << result2 << endl;
	cout << num1 << " > " << num2 << " > " << result3 << endl;
	cout << num1 << " < " << num2 << " < " << result4 << endl;
	cout << num1 << " >= " << num2 << " >= " << result5 << endl;
	cout << num1 << " <= " << num2 << " <= " << result6 << endl;

	// ���ǹ�, ��� (���� ���� ���̴� ����)
	// if ( ����1 )
	// {
	//		������ ������
	//		����� ����
	// }
	// else if ( ����2 )
	// {
	//		����1�� ���� �ʰ� ����2�� ������
	//		����� ����
	// }
	// else
	// {
	//		���� ������ ��� ���� ������
	//		����� ����
	// }
	

	// ���� num1�� num2���� ������
	if (num1 < num2)
	{
		//�̳��� ���
		cout << "num1�� �� �۽��ϴ�. " << endl;
	}
	// �׷��� �ʰ�, num1�� num2���� ũ��
	else if (num1 > num2)
	{
		//�̳��� ���
		cout << "num1�� �� Ů�ϴ�. " << endl;
	}
	// �׷��� �ʰ� num1 �� num2�� ������
	else if (num1 == num2)
	{
		//�̳��� ���
		cout << "num1�� num2�� �����ϴ�. " << endl;
	}
	// �׷����� ������
	else
	{
		//�̳��� ���
		cout << "�̷� ���� ���ڰ� �ƴ϶�� �Ű��� �� " << endl;
	}
}