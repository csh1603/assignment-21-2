#include <stdio.h>

int main(void) {
	float a, b, c, d;
	int x;

	printf("실수 두 개를 입력해주세요 : ");
	scanf("%f %f", &a, &b);

	c = b - a;
	x = (int)c;
	d = c - x;

	printf("%f 빼기 %f의 정수부분은 %d이고 소수점 부분은 %f입니다.\n", b, a, x, d);
}