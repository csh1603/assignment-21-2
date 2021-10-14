#include <stdio.h>
int main(void) {
	int a, b, c, d, e;
	printf("4자리 정수를 입력하세요 : ");
	scanf("%d", &a);

	b = a % 10;
	c = a % 100 / 10;
	d = a % 1000 / 100;
	e = a / 1000;

	if (e == b) {
		if (d == c)
			printf("palindrome 숫자 입니다.\n");
		else
			printf("palindrome 숫자가 아닙니다.\n");
	}
	else
		printf("palindrom 숫자가 아닙니다.\n");
	return 0;
}