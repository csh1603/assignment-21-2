#include <stdio.h>

int main(void) {
	float a, b, c, d;
	int x;

	printf("�Ǽ� �� ���� �Է����ּ��� : ");
	scanf("%f %f", &a, &b);

	c = b - a;
	x = (int)c;
	d = c - x;

	printf("%f ���� %f�� �����κ��� %d�̰� �Ҽ��� �κ��� %f�Դϴ�.\n", b, a, x, d);
}