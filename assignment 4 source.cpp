#include <stdio.h>

int main(void)
{
	printf("#���� �簢���� ��� ���� ���� �Է��ϼ��� : ");

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