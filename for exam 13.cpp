/*���� �Է¹ް� ���̾Ƹ�� �����*/

#include <stdio.h>

int main(void) {
	int a, i, j;
	printf("1~100������ Ȧ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a < 1 || a>100 || a % 2 == 0)
		printf("�߸��� �Է��Դϴ�.\n");
	else {
		for (i = 0;i < a;i++) {
			for (j = a - 1;j > i;j--)
				printf(" ");
			for (j = 0;j < 2 * i + 1;j++)
				printf("*");
			printf("\n");
		}

		for (i = 1;i < a;i++) {
			for (j = 0;j < i;j++)
				printf(" ");
			for (j = 2*a-1;j >2*i;j--)
				printf("*");
			printf("\n");
		}
	}
}