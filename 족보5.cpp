// ��� ���� ���� �Է¹ް� ��ġ ��ķ� �����

#include <stdio.h>
#define MAX_ROW 10
#define MAX_COL 10

int main(void) {
	int a[MAX_ROW][MAX_COL];

	int col, row, i, j;
	
	while (1) {
		printf("���� �Է��ϼ��� : ");
		scanf("%d", &row);

		if (0 < row && row <= MAX_ROW)
			break;
		else
			continue;
	}

	while (1) {
		printf("���� �Է��ϼ��� : ");
		scanf("%d", &col);

		if (0 < col && col <= MAX_COL)
			break;
		else
			continue;
	}

		for (i = 0;i < row;i++) {
			for (j = 0;j < col;j++) {
				while (1) {
					printf("a[%d][%d] : ", i + 1, j + 1);
					scanf("%d", &a[i][j]);

					if (a[i][j] < 100 && a[i][j] > 0)
						break;
					else
						continue;
				}
			}
		}

		for (i = 0;i < col;i++) {
			for (j = 0;j < row;j++)
				printf("%d ", a[j][i]);
			printf("\n");
		}
		
		return 0;
}