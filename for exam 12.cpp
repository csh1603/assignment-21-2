//�Է¹��� ���� �غ����� �ϴ� ���ﰢ�� ���

/*#include <stdio.h>

int main(void) {
	int a, i, j;
	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf("%d", &a);

	for (i = 0;i < a;i++) {
		for (j = a-1;j>i;j--)
			printf(" ");
		for (j = 0;j<2*i+1;j++)
			printf("*");
		printf("\n");
	}
} */

// ���� ������ ����� ���

#include<stdio.h>

int main(void) {
	int a, i, j;

	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	for (i = a;i > 0;i--) {
		for (j = i;j <= a;j++)
			printf(" ");
		for (j = 0;j <= ((i-1)*2);j++)
			printf("*");
		printf("\n");
	}
}