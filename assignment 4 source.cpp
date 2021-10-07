#include <stdio.h>

int main(void)
{
	printf("#문자 사각형의 행과 열의 수를 입력하세요 : ");

	int i, j, x = 0, y= 0;
	scanf_s("%d %d", &x, &y);

	i = 1;
	while (i < x+1)
	{
		for (j=1; j<y+1;j++)
		{
			printf("#");
		}
		printf("\n");
		i++;
	}
	return 0;
}