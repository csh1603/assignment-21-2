/*���ڸ��� ���� ������ �Է� �޾Ƽ� �Է� ���� ������ �ʰ� ���� �ڸ����� �߰��Ͽ� ȸ������ ����� ����ϴ� ���α׷�*/

#include <stdio.h>

int main(void) {
	int num, a, b, c, d;

	printf("3�ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	a = num / 100;
	b = num % 100 / 10;
	c = a;
	d = b*10;
	
	printf("�Է��� ���� %d�� ȸ������ ����� %d�Դϴ�.\n", num, (num * 100) + c + d);
}