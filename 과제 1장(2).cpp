//�� �ڸ� ������ �Է� �޾� �� ���� �� �ڸ����� ���� ���

#include <stdio.h>

int main(void) {
	int num, total;

	printf("�� �ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	total = num / 1000;
	num = num % 1000;
	total = total + num / 100;
	num = num % 100;
	total = total + num / 10;
	num = num % 10;
	total = total + num;

	printf("�� �ڸ����� ���� %d�Դϴ�.\n", total);
}