#include <stdio.h>
int main(void) {
	int a, b, c, d, e;
	printf("4�ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &a);

	b = a % 10;
	c = a % 100 / 10;
	d = a % 1000 / 100;
	e = a / 1000;

	if (e == b) {
		if (d == c)
			printf("palindrome ���� �Դϴ�.\n");
		else
			printf("palindrome ���ڰ� �ƴմϴ�.\n");
	}
	else
		printf("palindrom ���ڰ� �ƴմϴ�.\n");
	return 0;
}