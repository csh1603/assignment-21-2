/*�� �Է� �ް� �� ���� ������ �ϴ� �������̵ �ﰢ��*/

#include <stdio.h> 

int main(void) {
	int a, i, j;

	printf("���� �Է����ּ��� : ");
	scanf("%d", &a);

	for (i = a;i > 0;i--) {
		for (j = a+1;j > i;j--)
			printf("*");
		printf("\n");
	}
}