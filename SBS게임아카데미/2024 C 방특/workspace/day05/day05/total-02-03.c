// 10개의 소수를 출력하는 프로그램
// 소수란 1과 자기 자신으로만 나누어지는 숫자
// 2 3 5 7 11 13 17 19 23 29
#include <stdio.h>

int main()
{
	for(int i = 0; i < 10;) //굳이 포문 하나를 더 추가한 느낌 int변수 하나를 추가해서 이 부분을 없애도 됨
	{
		for (int j = 2; ; j++)
		{
			int num = 0;
			for (int k = 1; k < j; k++)
			{
				
				if (j % k == 0)
				{
					num++;
				}
			}
			if (num == 1)
			{
				printf("%d ",j);
				i++;
			}
			if (i == 10)
				break;
		}
	}
}