#include <iostream>
using namespace std;

void main()
{

	// �� ������
	
	// && => and
	// true && true => true
	// true && false => false
	// false && false => false
	
	// || => and
	// true || true => true
	// ture || false => true
	// false || false => false
	
	// ��� ����
	int year = 2023;
	int month = 8;

	// year�� 1990 ���İ�, 8�����̸�
	if (1990 < year && month == 8)
	{
		cout << "1990 ������ 8���̴�. " << endl;
	}

	// 2024���̰ų� 3�� �̸��� ���̶��
	if (year == 2024 || month < 3)
	{
		
	}
}