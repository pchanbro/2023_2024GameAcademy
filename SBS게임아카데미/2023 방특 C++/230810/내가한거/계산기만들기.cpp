#include <iostream>
using namespace std;

void main()
{
	//-------------------------------------
	// 1. �̴� ���� (num1 + num2 = result)
	//-------------------------------------
	//cout << num1 << " + " << num2 << " = " << result << endl; //�̷������� ������
	// 
	//result = num1 + num2;

	//cout << num1 << " + " << num2 << " = " << result << endl;

	//-------------------------------------
	// ���� �����.
	
	// +++ 4. ����Ÿ�� ����, �Ǽ�Ÿ�� ���⸦ �������ּ���. (0: ����Ÿ�� ����, 1: �Ǽ�Ÿ�� ����)
	// 5. ��� ���

	

	int num1;
	int num2;
	int calType;
	int varType;
	int result;

	cout << "ù��° ���� �Է����ּ��� : ";
	// ù��° �� �Է�
	cin >> num1;
	
	cout << "�ι�° ���� �Է����ּ��� : ";
	// �ι�° ���� �Է�
	cin >> num2;

	cout << "ù��° �� : " << num1 << endl;
	cout << "�ι�° �� : " << num2 << endl;

	// ��� Ÿ���� �Է� (0 : +, 1 : -, 2 : *, 3 : /)
	cout << "��� Ÿ���� �������ּ���(0 : +, 1 : -, 2 : *, 3 : /) : ";
	cin >> calType;

	// ���� Ÿ���� �Է�
	cout << "���������� �Ǽ������� �����ϼ���(0 : ����Ÿ�� ����, 1: �Ǽ�Ÿ�� ����) : ";
	cin >> varType;

	// ��� Ÿ���� ���������� �����ߴٸ�
	if (varType == 0)
	{
		cout << "����Ÿ�� ���⸦ �����ϼ̽��ϴ�. " << endl;

		// ���� Ÿ���� + �� �����ߴٸ�
		if (calType == 0)
		{
			cout << " + �� �����ϼ̽��ϴ�." << endl;
			result = num1 + num2;
			cout << " + �� ��� : " << result << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� - �� �����ߴٸ�
		else if (calType == 1)
		{
			cout << " - �� �����ϼ̽��ϴ�." << endl;
			result = num1 - num2;
			cout << " - �� ��� : " << result << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� * �� �����ߴٸ�
		else if (calType == 2)
		{
			cout << " * �� �����ϼ̽��ϴ�." << endl;
			result = num1 * num2;
			cout << " * �� ��� : " << result << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� / �� �����ߴٸ�
		else if (calType == 3)
		{
			cout << " / �� �����ϼ̽��ϴ�." << endl;
			result = num1 / num2;
			cout << " / �� ��� : " << result << endl;
		}
		// ���� Ÿ�� ���� �� ���� ��� ��쿡�� ���Ե��� �ʴ´ٸ�
		else
		{
			cout << "��� Ÿ���� �߸� �����ϼ̽��ϴ�." << endl;
		}
	}
	// �׷��� �ʰ� ��� Ÿ���� �Ǽ������� �����ߴٸ�
	else if (varType == 1)
	{
		cout << "�Ǽ�Ÿ�� ���⸦ �����ϼ̽��ϴ�. " << endl;
		// �Ǽ� Ÿ�� ����� ���������ν� ������ Ÿ�� ��ȯ
		float fnum1 = (float)num1;
		float fnum2 = (float)num2;
		float fresult;

		// ���� Ÿ���� + �� �����ߴٸ�
		if (calType == 0)
		{
			cout << " + �� �����ϼ̽��ϴ�." << endl;
			fresult = fnum1 + fnum2;
			cout << " + �� ��� : " << fresult << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� - �� �����ߴٸ�
		else if (calType == 1)
		{
			cout << " - �� �����ϼ̽��ϴ�." << endl;
			fresult = fnum1 - fnum2;
			cout << " - �� ��� : " << fresult << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� * �� �����ߴٸ�
		else if (calType == 2)
		{
			cout << " * �� �����ϼ̽��ϴ�." << endl;
			fresult = fnum1 * fnum2;
			cout << " * �� ��� : " << fresult << endl;
		}
		// �׷��� �ʰ� ���� Ÿ���� / �� �����ߴٸ�
		else if (calType == 3)
		{
			cout << " / �� �����ϼ̽��ϴ�." << endl;
			fresult = fnum1 / fnum2;
			cout << " / �� ��� : " << fresult << endl;
		}
		// ���� ��� ��쿡�� ���Ե��� �ʴ´ٸ�
		else
		{
			cout << "��� Ÿ���� �߸� �����ϼ̽��ϴ�." << endl;
		}
	}
	// ��� Ÿ�� ���� �� ���� ��� ��쿡�� ���Ե��� �ʴ´ٸ�
	else
	{
		cout << "���� Ÿ���� �߸� �����ϼ̽��ϴ�." << endl;
	}
}