/*�� �Է¹ް� �� ���� �̿��� �����̵�ﰢ�� ���*/

#include <stdio.h>

int main(void) {
	int a, i, j;
	printf("���� ���̸� �Է��ϼ��� : ");
	scanf("%d", &a);

	for (i = 0;i <a;i++) {
		for (j = 0;j <= i;j++)
			printf("*");
		printf("\n");
	}
}