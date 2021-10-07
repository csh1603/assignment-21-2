#include <stdio.h>

int main(void)
{
	printf("4자리의 정수를 입력하세요 : ");
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
					printf("%d(은)는 회문수입니다.\n", x);
				}
			}
			else { printf("%d(은)는 회문수가 아닙니다.\n", x); }
		}
		else {printf("%d은(는) 4자리 정수가 아닙니다.\n", x);}
		
		return 0;
}