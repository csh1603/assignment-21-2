// ���ﰢ�� ���� �׸��� ���α׷� -> ù �ٿ� N���� *, ��°�ٿ� N-1���� * ...

#include<stdio.h>

int main(void) {
	int num, i, j;

	printf("1~100 ������ ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	if (num > 0 && num < 101) {
		for (i = num;i >= 0;i--) {
			for (j = num;j >= i;j--)
				printf(" ");
			for (j = 0;j <= i*2 ;j++)
				printf("*");
			printf("\n");
		}
	}
	else
		printf("�߸��� �Է��Դϴ�.\n");
}