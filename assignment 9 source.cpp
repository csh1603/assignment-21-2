#include <stdio.h>

void intdivision(int x, int y, int* z, int* w);

int main (void) {
	int quot, rem;
	int u = 0, v = 0;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &u, &v);
	
	if (v == 0) {
		printf("0���� ���� �� �����ϴ�.\n");
	}

	else {
		intdivision(u, v, &quot, &rem);
		printf("%d�� %d�� ������ ���� %d�̰� �������� %d�Դϴ�.\n", u, v, quot, rem);
	}
	return 0;
}

void intdivision(int x, int y, int* z, int* w) {
	*z = x / y;
	*w = x % y;
}