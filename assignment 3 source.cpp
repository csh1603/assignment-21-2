#include <stdio.h>

int main(void)
{
	printf("4�ڸ��� ������ �Է��ϼ��� : ");
		int x=0, y=0, z=0, w=0;
		scanf_s("%d", &x);
		
		y = x / 1000;
		z = x % 1000 / 100;
		w = x % 100 / 10;

		if (x < 10000 and x > 999)
		{
			if (y == x%10)
			{
				if (z == w)
				{
					printf("%d(��)�� ȸ�����Դϴ�.\n", x);
				}
			}
			else { printf("%d(��)�� ȸ������ �ƴմϴ�.\n", x); }
		}
		else {printf("%d��(��) 4�ڸ� ������ �ƴմϴ�.\n", x);}
		
		return 0;
}